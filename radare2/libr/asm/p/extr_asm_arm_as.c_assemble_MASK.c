
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int buf ;
struct TYPE_6__ {int bits; } ;
struct TYPE_5__ {int size; int buf; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char**) ;
 int * FUNC_4 (int *,int,int const*,int) ;
 int FUNC_5 (char*,int,int) ;
 char* FUNC_6 (char*,char const*,char const*) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (char*,char*,char*,char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int,int *,int) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,char*,int ) ;

__attribute__((used)) static int FUNC_15(RAsm *VAR_4, RAsmOp *VAR_5, const char *VAR_6) {
 const char *VAR_7 = "";
 char *VAR_8, *VAR_9;
 char *VAR_10 = ((void*)0);

 int VAR_11 = FUNC_3 ("r_as", &VAR_8);
 if (VAR_11 == -1) {
  return -1;
 }

 int VAR_12 = FUNC_3 ("r_as", &VAR_9);
 if (VAR_12 == -1) {
  FUNC_2 (VAR_8);
  return -1;
 }

 VAR_10 = FUNC_9 ("ARM_AS");
 if (!VAR_10 || !*VAR_10) {
  FUNC_2 (VAR_10);
  if (VAR_4->bits == 64) {
   VAR_10 = FUNC_11 (VAR_1);
  } else {
   VAR_10 = FUNC_11 (VAR_0);
  }
 }
 if (VAR_4->bits == 16) {
  VAR_7 = ".thumb";
 }

 char *VAR_13 = FUNC_6 ("%s\n"
   ".ascii \"BEGINMARK\"\n"
   "%s\n"
   ".ascii \"ENDMARK\"\n",
   VAR_7, VAR_6);
 if (VAR_13) {
  (void)FUNC_14 (VAR_11, VAR_13, FUNC_12 (VAR_13));
  (void)FUNC_0 (VAR_11);
  FUNC_2 (VAR_13);
 }

 int VAR_14 = 0;
 if (!FUNC_8 ("%s %s -o %s", VAR_10, VAR_8, VAR_9)) {
  const ut8 *VAR_15, *VAR_16;
  FUNC_0 (VAR_12);
  VAR_12 = FUNC_5 (VAR_9, VAR_2|VAR_3, 0644);
  if (VAR_12 < 0) {
   FUNC_2 (VAR_10);
   FUNC_2 (VAR_8);
   FUNC_2 (VAR_9);
   return -1;
  }
  ut8 VAR_17[4096];
  VAR_14 = FUNC_10 (VAR_12, VAR_17, sizeof (VAR_17));
  VAR_15 = FUNC_4 (VAR_17, VAR_14, (const ut8*)"BEGINMARK", 9);
  VAR_16 = FUNC_4 (VAR_17, VAR_14, (const ut8*)"ENDMARK", 7);
  if (!VAR_15 || !VAR_16) {
   FUNC_1 ("Cannot find water marks\n");
   VAR_14 = 0;
  } else {
   VAR_14 = (int)(size_t)(VAR_16 - VAR_15 - 9);
   if (VAR_14 > 0) {
    FUNC_7 (&VAR_5->buf, VAR_15 + 9, VAR_14);
   } else {
    VAR_14 = 0;
   }
  }
 } else {
  FUNC_1 ("Error running: %s %s -o %s", VAR_10, VAR_8, VAR_9);
  FUNC_1 ("export PATH=~/NDK/toolchains/arm-linux*/prebuilt/darwin-arm_64/bin\n");
 }

 FUNC_0 (VAR_12);

 FUNC_13 (VAR_8);
 FUNC_13 (VAR_9);
 FUNC_2 (VAR_8);
 FUNC_2 (VAR_9);
 FUNC_2 (VAR_10);

 return VAR_5->size = VAR_14;
}
