
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_17__ ;


typedef int ut64 ;
struct TYPE_33__ {int file; } ;
struct TYPE_32__ {int bits; int arch; } ;
struct TYPE_31__ {TYPE_6__* info; } ;
struct TYPE_30__ {int xtr_idx; } ;
struct TYPE_29__ {char* name; } ;
struct TYPE_28__ {TYPE_17__* bin; int config; int io; int dbg; } ;
struct TYPE_27__ {int fd; } ;
struct TYPE_26__ {void* maxstrbuf; void* minstrlen; } ;
typedef int RIODesc ;
typedef TYPE_1__ RCoreFile ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RBinPlugin ;
typedef TYPE_4__ RBinOptions ;
typedef TYPE_5__ RBinObject ;
typedef TYPE_6__ RBinInfo ;
typedef TYPE_7__ RBinFile ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 TYPE_7__* FUNC_2 (TYPE_17__*) ;
 TYPE_5__* FUNC_3 (TYPE_17__*) ;
 TYPE_3__* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_17__*,char const*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int,int ,int ,int) ;
 scalar_t__* FUNC_7 (int ,char*) ;
 void* FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_11 (TYPE_2__*,TYPE_7__*) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ,int ,int ) ;
 int * FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_21(RCore *VAR_1, ut64 VAR_2, const char *VAR_3) {
 RCoreFile *VAR_4 = FUNC_13 (VAR_1);
 RIODesc *VAR_5 = VAR_4 ? FUNC_15 (VAR_1->io, VAR_4->fd) : ((void*)0);
 RBinFile *VAR_6 = ((void*)0);
 RBinPlugin *VAR_7;
 int VAR_8 = 0;


 if (!FUNC_20 ("dbg://", VAR_3, 6)) {
  VAR_3 += 6;
 }
 if (!VAR_5) {
  return 0;
 }
 if (VAR_4) {
  FUNC_14 (VAR_1->dbg, FUNC_16 (VAR_1->io, VAR_4->fd),
    FUNC_17 (VAR_1->io, VAR_4->fd));
 }
 int VAR_9 = VAR_4? VAR_4->fd: -1;
 RBinOptions VAR_10;
 FUNC_6 (&VAR_10, VAR_9, VAR_2, VAR_0, 0);
 VAR_10.xtr_idx = VAR_8;
 if (!FUNC_5 (VAR_1->bin, VAR_3, &VAR_10)) {
  FUNC_0 ("RBinLoad: Cannot open %s\n", VAR_3);
  if (FUNC_8 (VAR_1->config, "bin.rawstr")) {
   FUNC_6 (&VAR_10, VAR_9, VAR_2, VAR_0, 1);
   VAR_10.xtr_idx = VAR_8;
   if (!FUNC_5 (VAR_1->bin, VAR_3, &VAR_10)) {
    return 0;
   }
  }
 }

 if (*FUNC_7 (VAR_1->config, "dbg.libs")) {
  FUNC_12 (VAR_1, ".dmm*");

  FUNC_18 (VAR_1, "dbg.libs", "sym.imp.dlopen");
  FUNC_18 (VAR_1, "dbg.libs", "sym.imp.dlmopen");
  FUNC_18 (VAR_1, "dbg.unlibs", "sym.imp.dlclose");




 }
 VAR_6 = FUNC_2 (VAR_1->bin);
 FUNC_11 (VAR_1, VAR_6);
 VAR_7 = FUNC_4 (VAR_6);
 if (VAR_7 && !FUNC_20 (VAR_7->name, "any", 5)) {




  VAR_1->bin->minstrlen = FUNC_8 (VAR_1->config, "bin.minstr");
  VAR_1->bin->maxstrbuf = FUNC_8 (VAR_1->config, "bin.maxstrbuf");
 } else if (VAR_6) {
  RBinObject *VAR_11 = FUNC_3 (VAR_1->bin);
  RBinInfo *VAR_12 = VAR_11? VAR_11->info: ((void*)0);
  if (VAR_7 && FUNC_19 (VAR_7->name, "any") && VAR_12) {
   FUNC_10 (VAR_1, VAR_6->file, VAR_12->arch, VAR_12->bits);
  }
 }

 if (VAR_7 && !FUNC_19 (VAR_7->name, "dex")) {
  FUNC_12 (VAR_1, "\"(fix-dex,wx `ph sha1 $s-32 @32` @12 ; wx `ph adler32 $s-12 @12` @8)\"\n");
 }

 return 1;
}
