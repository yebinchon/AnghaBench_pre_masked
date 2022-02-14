
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SPDBDownloader {TYPE_1__* opt; } ;
struct TYPE_2__ {char* dbg_file; char* symbol_store_path; char* guid; char* user_agent; char* symbol_server; scalar_t__ extract; } ;
typedef TYPE_1__ SPDBDownloaderOpt ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char const*,char const*,char*,char*,...) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(struct SPDBDownloader *VAR_1) {
 SPDBDownloaderOpt *VAR_2 = VAR_1->opt;
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 size_t VAR_7 = 0;
 char *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 char *VAR_13 = ((void*)0);

 int VAR_14 = 0;
 int VAR_15;
 if (!VAR_2->dbg_file || !*VAR_2->dbg_file) {

  return 0;
 }
 if (!FUNC_1 ()) {
  return 0;
 }

 VAR_7 = FUNC_12 (VAR_2->dbg_file);
 VAR_6 = FUNC_4 (VAR_7 + 1);
 if (!VAR_6) {
  return 0;
 }
 FUNC_5 (VAR_6, VAR_2->dbg_file, VAR_7 + 1);
 VAR_6[VAR_7 - 1] = '_';
 VAR_8 = FUNC_8 (VAR_2->symbol_store_path);
 VAR_9 = FUNC_8 (VAR_2->dbg_file);
 VAR_10 = FUNC_8 (VAR_2->guid);
 VAR_11 = FUNC_8 (VAR_6);
 VAR_12 = FUNC_8 (VAR_2->user_agent);
 VAR_13 = FUNC_8 (VAR_2->symbol_server);

 if (FUNC_2 () || VAR_2->extract == 0) {
  VAR_14 = 1;
  VAR_5 = FUNC_9 ("%s%s%s%s%s%s%s",
          VAR_8, VAR_0,
          VAR_9, VAR_0,
          VAR_10, VAR_0,
          VAR_11);

  VAR_3 = FUNC_9 ("curl -sfLA \"%s\" \"%s/%s/%s/%s\" --create-dirs -o \"%s\"",
                         VAR_12,
                         VAR_13,
          VAR_9,
          VAR_10,
                         VAR_11,
                         VAR_5);
  const char *VAR_16 = "cabextract";
  const char *VAR_17 = "%s -d \"%s\" \"%s\"";
  char *VAR_18 = FUNC_6 (VAR_5);



  VAR_4 = FUNC_9 (VAR_17, VAR_16, VAR_18, VAR_5);
  FUNC_0 (VAR_18);

  FUNC_3 ("Attempting to download compressed pdb in %s\n",VAR_5);
  if ((VAR_15 = FUNC_10 (VAR_3) != 0)) {
   FUNC_3("curl exited with error %d\n", VAR_15);
   VAR_14 = 0;
  }
  FUNC_3 ("Attempting to decompress pdb\n");
  if (VAR_2->extract > 0) {
   if (VAR_14 && ((VAR_15 = FUNC_10 (VAR_4)) != 0)) {
    FUNC_3 ("cab extractor exited with error %d\n", VAR_15);
    VAR_14 = 0;
   }
   FUNC_7 (VAR_5);
  }
  FUNC_0 (VAR_3);
  FUNC_0 (VAR_5);
 }
 if (VAR_14 == 0) {
  FUNC_3 ("Falling back to uncompressed pdb\n");
  VAR_14 = 1;
  VAR_6[VAR_7 - 1] = 'b';
  FUNC_0 (VAR_11);
  VAR_11 = FUNC_8 (VAR_6);
  VAR_5 = FUNC_9("%s%s%s%s%s%s%s",
      VAR_8, VAR_0,
      VAR_9, VAR_0,
      VAR_10, VAR_0,
      VAR_11);

  VAR_3 = FUNC_9 ("curl -sfLA \"%s\" \"%s/%s/%s/%s\" --create-dirs -o \"%s\"",
                         VAR_2->user_agent,
                         VAR_2->symbol_server,
                         VAR_2->dbg_file,
                         VAR_2->guid,
                         VAR_11,
                         VAR_5);
  FUNC_3 ("Attempting to download uncompressed pdb in %s\n",VAR_5);
  if ((VAR_15 = FUNC_10 (VAR_3) != 0)) {
   FUNC_3("curl exited with error %d\n", VAR_15);
   VAR_14 = 0;
  }
  FUNC_0 (VAR_3);
  FUNC_0 (VAR_5);
 }
 FUNC_0 (VAR_6);
 FUNC_0 (VAR_4);
 FUNC_0 (VAR_8);
 FUNC_0 (VAR_9);
 FUNC_0 (VAR_10);
 FUNC_0 (VAR_11);
 FUNC_0 (VAR_12);
 FUNC_0 (VAR_13);
 return VAR_14;
}
