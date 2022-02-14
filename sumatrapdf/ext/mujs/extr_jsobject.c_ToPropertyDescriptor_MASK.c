
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int js_Object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,char const*,int) ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,char const*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8(js_State *VAR_3, js_Object *VAR_4, const char *VAR_5, js_Object *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_3(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_6);

 if (FUNC_1(VAR_3, -1, "writable")) {
  VAR_7 = 1;
  VAR_11 = FUNC_6(VAR_3, -1);
  FUNC_2(VAR_3, 1);
 }
 if (FUNC_1(VAR_3, -1, "enumerable")) {
  VAR_9 = FUNC_6(VAR_3, -1);
  FUNC_2(VAR_3, 1);
 }
 if (FUNC_1(VAR_3, -1, "configurable")) {
  VAR_10 = FUNC_6(VAR_3, -1);
  FUNC_2(VAR_3, 1);
 }
 if (FUNC_1(VAR_3, -1, "value")) {
  VAR_8 = 1;
  FUNC_5(VAR_3, -3, VAR_5);
 }

 if (!VAR_11) VAR_12 |= VAR_2;
 if (!VAR_9) VAR_12 |= VAR_1;
 if (!VAR_10) VAR_12 |= VAR_0;

 if (FUNC_1(VAR_3, -1, "get")) {
  if (VAR_7 || VAR_8)
   FUNC_7(VAR_3, "value/writable and get/set attributes are exclusive");
 } else {
  FUNC_4(VAR_3);
 }

 if (FUNC_1(VAR_3, -2, "set")) {
  if (VAR_7 || VAR_8)
   FUNC_7(VAR_3, "value/writable and get/set attributes are exclusive");
 } else {
  FUNC_4(VAR_3);
 }

 FUNC_0(VAR_3, -4, VAR_5, VAR_12);

 FUNC_2(VAR_3, 2);
}
