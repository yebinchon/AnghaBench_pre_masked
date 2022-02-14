
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int guid; int debug_file_name; } ;
struct TYPE_16__ {int bin; } ;
struct TYPE_15__ {int (* download ) (TYPE_3__*) ;} ;
struct TYPE_14__ {char* dbg_file; int extract; int symbol_store_path; scalar_t__ user_agent; scalar_t__ symbol_server; int guid; } ;
struct TYPE_13__ {int extract; int symbol_store_path; scalar_t__ user_agent; scalar_t__ symbol_server; } ;
typedef TYPE_1__ SPDBOptions ;
typedef TYPE_2__ SPDBDownloaderOpt ;
typedef TYPE_3__ SPDBDownloader ;
typedef TYPE_4__ RCore ;
typedef TYPE_5__ RBinInfo ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (char*,char*,char*,...) ;
 TYPE_5__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;

int FUNC_7(RCore *VAR_0, int VAR_1, int *VAR_2, SPDBOptions *VAR_3) {
 int VAR_4;
 SPDBDownloaderOpt VAR_5;
 SPDBDownloader VAR_6;
 RBinInfo *VAR_7 = FUNC_4 (VAR_0->bin);

 if (!VAR_7 || !VAR_7->debug_file_name) {
  FUNC_1 ("Can't find debug filename\n");
  return 1;
 }

 if (!VAR_3 || !VAR_3->symbol_server || !VAR_3->user_agent) {
  FUNC_1 ("Can't retrieve pdb configurations\n");
  return 1;
 }

 VAR_5.dbg_file = (char*) FUNC_5 (VAR_7->debug_file_name);
 VAR_5.guid = VAR_7->guid;
 VAR_5.symbol_server = VAR_3->symbol_server;
 VAR_5.user_agent = VAR_3->user_agent;
 VAR_5.symbol_store_path = VAR_3->symbol_store_path;
 VAR_5.extract = VAR_3->extract;

 FUNC_2 (&VAR_5, &VAR_6);
 VAR_4 = VAR_6.download ? VAR_6.download (&VAR_6) : 0;
 if (VAR_1 && VAR_2) {
  FUNC_3 ("%s\"pdb\":{\"file\":\"%s\",\"download\":%s}",
          *VAR_2 ? "," : "", VAR_5.dbg_file, VAR_4 ? "true" : "false");
 } else {
  FUNC_3 ("PDB \"%s\" download %s\n",
          VAR_5.dbg_file, VAR_4 ? "success" : "failed");
 }
 if (VAR_2) {
  (*VAR_2)++;
 }
 FUNC_0 (&VAR_6);

 return 0;
}
