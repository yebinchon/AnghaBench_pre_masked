
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {char* s; } ;
typedef TYPE_1__ js_Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,TYPE_1__**,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (char const*,int) ;

__attribute__((used)) static void FUNC_10(js_State *VAR_0, const char *VAR_1, const char *VAR_2)
{
 js_Buffer *VAR_3 = ((void*)0);
 int VAR_4, VAR_5;

 if (FUNC_7(VAR_0)) {
  FUNC_3(VAR_0, VAR_3);
  FUNC_6(VAR_0);
 }

 while (*VAR_1) {
  int VAR_6 = (unsigned char) *VAR_1++;
  if (VAR_6 != '%')
   FUNC_5(VAR_0, &VAR_3, VAR_6);
  else {
   if (!VAR_1[0] || !VAR_1[1])
    FUNC_8(VAR_0, "truncated escape sequence");
   VAR_4 = *VAR_1++;
   VAR_5 = *VAR_1++;
   if (!FUNC_0(VAR_4) || !FUNC_0(VAR_5))
    FUNC_8(VAR_0, "invalid escape sequence");
   VAR_6 = FUNC_1(VAR_4) << 4 | FUNC_1(VAR_5);
   if (!FUNC_9(VAR_2, VAR_6))
    FUNC_5(VAR_0, &VAR_3, VAR_6);
   else {
    FUNC_5(VAR_0, &VAR_3, '%');
    FUNC_5(VAR_0, &VAR_3, VAR_4);
    FUNC_5(VAR_0, &VAR_3, VAR_5);
   }
  }
 }
 FUNC_5(VAR_0, &VAR_3, 0);

 FUNC_4(VAR_0, VAR_3 ? VAR_3->s : "");
 FUNC_2(VAR_0);
 FUNC_3(VAR_0, VAR_3);
}
