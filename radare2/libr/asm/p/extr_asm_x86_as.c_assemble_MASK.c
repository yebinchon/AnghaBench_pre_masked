
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef int opbuf ;
struct TYPE_7__ {scalar_t__ syntax; int bits; } ;
struct TYPE_6__ {int size; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;
 int FUNC_4 (char*,char**) ;
 int * FUNC_5 (int *,int,int const*,int) ;
 int FUNC_6 (char*,int,int) ;
 char* FUNC_7 (char*,char const*,int ,char const*) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (int,int *,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,char*,int ) ;

__attribute__((used)) static int FUNC_13(RAsm *VAR_4, RAsmOp *VAR_5, const char *VAR_6) {
 char *VAR_7, *VAR_8;
 const char *VAR_9 = "";
 int VAR_10 = 0;

 int VAR_11 = FUNC_4 ("r_as", &VAR_7);
 if (VAR_11 == -1) {
  return -1;
 }

 int VAR_12 = FUNC_4 ("r_as", &VAR_8);
 if (VAR_12 == -1) {
  FUNC_2 (VAR_7);
  FUNC_0 (VAR_11);
  return -1;
 }

 if (VAR_4->syntax == VAR_3) {
  VAR_9 = ".intel_syntax noprefix\n";
 }

 if (VAR_4->syntax == VAR_2) {
  VAR_9 = ".att_syntax\n";
 }

 char *VAR_13 = FUNC_7 (
   "%s.code%i\n"
   ".ascii \"BEGINMARK\"\n"
   "%s\n"
   ".ascii \"ENDMARK\"\n",
   VAR_9, VAR_4->bits, VAR_6);
 FUNC_12 (VAR_11, VAR_13, FUNC_10 (VAR_13));
 FUNC_0 (VAR_11);
 FUNC_2 (VAR_13);

 if (!FUNC_8 ("as %s -o %s", VAR_7, VAR_8)) {
  const ut8 *VAR_14, *VAR_15;
  FUNC_0 (VAR_12);

  VAR_12 = FUNC_6 (VAR_8, VAR_0|VAR_1, 0644);
  if (VAR_12 < 0) {
   FUNC_2 (VAR_7);
   FUNC_2 (VAR_8);
   return -1;
  }
  ut8 VAR_16[512] = {0};
  VAR_10 = FUNC_9 (VAR_12, VAR_16, sizeof (VAR_16));
  VAR_14 = FUNC_5 (VAR_16, VAR_10, (const ut8*)"BEGINMARK", 9);
  VAR_15 = FUNC_5 (VAR_16, VAR_10, (const ut8*)"ENDMARK", 7);
  if (!VAR_14 || !VAR_15) {
   FUNC_1 ("Cannot find water marks\n");
   VAR_10 = 0;
  } else {
   VAR_10 = (int)(size_t)(VAR_15 - VAR_14 - 9);
   if (VAR_10 > 0) {
    FUNC_3 (VAR_5, VAR_14 + 9, VAR_10);
   } else {
    VAR_10 = 0;
   }
  }
 } else {
  FUNC_1 ("Error running: as %s -o %s", VAR_7, VAR_8);
  VAR_10 = 0;
 }

 FUNC_0 (VAR_12);

 FUNC_11 (VAR_7);
 FUNC_11 (VAR_8);
 FUNC_2 (VAR_7);
 FUNC_2 (VAR_8);

 VAR_5->size = VAR_10;
 return VAR_10;
}
