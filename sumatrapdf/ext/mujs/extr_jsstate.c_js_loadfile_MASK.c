
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
 int FUNC_2 (char*,int,size_t,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char const*,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char const*,char*) ;
 char* FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

void FUNC_13(js_State *VAR_3, const char *VAR_4)
{
 FILE *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(VAR_4, "rb");
 if (!VAR_5) {
  FUNC_6(VAR_3, "cannot open file '%s': %s", VAR_4, FUNC_12(VAR_2));
 }

 if (FUNC_3(VAR_5, 0, VAR_0) < 0) {
  FUNC_0(VAR_5);
  FUNC_6(VAR_3, "cannot seek in file '%s': %s", VAR_4, FUNC_12(VAR_2));
 }

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5);
  FUNC_6(VAR_3, "cannot tell in file '%s': %s", VAR_4, FUNC_12(VAR_2));
 }

 if (FUNC_3(VAR_5, 0, VAR_1) < 0) {
  FUNC_0(VAR_5);
  FUNC_6(VAR_3, "cannot seek in file '%s': %s", VAR_4, FUNC_12(VAR_2));
 }

 if (FUNC_11(VAR_3)) {
  FUNC_0(VAR_5);
  FUNC_10(VAR_3);
 }
 VAR_6 = FUNC_9(VAR_3, VAR_7 + 1);
 FUNC_5(VAR_3);

 VAR_8 = FUNC_2(VAR_6, 1, (size_t)VAR_7, VAR_5);
 if (VAR_8 != VAR_7) {
  FUNC_7(VAR_3, VAR_6);
  FUNC_0(VAR_5);
  FUNC_6(VAR_3, "cannot read data from file '%s': %s", VAR_4, FUNC_12(VAR_2));
 }

 VAR_6[VAR_7] = 0;

 if (FUNC_11(VAR_3)) {
  FUNC_7(VAR_3, VAR_6);
  FUNC_0(VAR_5);
  FUNC_10(VAR_3);
 }

 FUNC_8(VAR_3, VAR_4, VAR_6);

 FUNC_7(VAR_3, VAR_6);
 FUNC_0(VAR_5);
 FUNC_5(VAR_3);
}
