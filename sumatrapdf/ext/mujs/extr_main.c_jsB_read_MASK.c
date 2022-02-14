
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *,int) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(js_State *VAR_3)
{
 const char *VAR_4 = FUNC_8(VAR_3, 1);
 FILE *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(VAR_4, "rb");
 if (!VAR_5) {
  FUNC_6(VAR_3, "cannot open file '%s': %s", VAR_4, FUNC_10(VAR_2));
 }

 if (FUNC_4(VAR_5, 0, VAR_0) < 0) {
  FUNC_0(VAR_5);
  FUNC_6(VAR_3, "cannot seek in file '%s': %s", VAR_4, FUNC_10(VAR_2));
 }

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5);
  FUNC_6(VAR_3, "cannot tell in file '%s': %s", VAR_4, FUNC_10(VAR_2));
 }

 if (FUNC_4(VAR_5, 0, VAR_1) < 0) {
  FUNC_0(VAR_5);
  FUNC_6(VAR_3, "cannot seek in file '%s': %s", VAR_4, FUNC_10(VAR_2));
 }

 VAR_6 = FUNC_9(VAR_7 + 1);
 if (!VAR_6) {
  FUNC_0(VAR_5);
  FUNC_6(VAR_3, "out of memory");
 }

 VAR_8 = FUNC_2(VAR_6, 1, VAR_7, VAR_5);
 if (VAR_8 != VAR_7) {
  FUNC_3(VAR_6);
  FUNC_0(VAR_5);
  FUNC_6(VAR_3, "cannot read data from file '%s': %s", VAR_4, FUNC_10(VAR_2));
 }
 VAR_6[VAR_7] = 0;

 FUNC_7(VAR_3, VAR_6);
 FUNC_3(VAR_6);
 FUNC_0(VAR_5);
}
