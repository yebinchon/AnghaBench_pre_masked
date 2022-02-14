
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REgg ;
typedef int RBuffer ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(REgg *VAR_0) {
 RBuffer *VAR_1;
 int VAR_2 = 0;
 char *VAR_3 = FUNC_6 (VAR_0, "egg.shellcode");
 if (VAR_3 && *VAR_3) {
  if (!FUNC_10 (VAR_0, VAR_3)) {
   FUNC_0 ("Unknown shellcode '%s'\n", VAR_3);
   FUNC_1 (VAR_3);
   return 0;
  }
  FUNC_1 (VAR_3);
 } else {
  FUNC_0 ("Setup a shellcode before (gi command)\n");
  FUNC_1 (VAR_3);
  return 0;
 }

 FUNC_3 (VAR_0);
 if (!FUNC_2 (VAR_0)) {
  FUNC_0 ("r_egg_assemble: invalid assembly\n");
  return 0;
 }
 VAR_3 = FUNC_6 (VAR_0, "egg.padding");
 if (VAR_3 && *VAR_3) {
  FUNC_8 (VAR_0, VAR_3);
  FUNC_1 (VAR_3);
 }
 VAR_3 = FUNC_6 (VAR_0, "egg.encoder");
 if (VAR_3 && *VAR_3) {
  FUNC_4 (VAR_0, VAR_3);
  FUNC_1 (VAR_3);
 }
 if ((VAR_1 = FUNC_5 (VAR_0))) {
  FUNC_11 (VAR_1);
  VAR_2 = 1;
 }


 FUNC_7 (VAR_0, "egg.shellcode", "");
 FUNC_7 (VAR_0, "egg.padding", "");
 FUNC_7 (VAR_0, "egg.encoder", "");
 FUNC_7 (VAR_0, "key", "");

 FUNC_9 (VAR_0);
 return VAR_2;
}
