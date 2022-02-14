
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {char* s; } ;
typedef TYPE_1__ js_Buffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__**,char const) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,int) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_0, const char *VAR_1, const char *VAR_2)
{
 js_Buffer *VAR_3 = ((void*)0);

 static const char *VAR_4 = "0123456789ABCDEF";

 if (FUNC_5(VAR_0)) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_4(VAR_0);
 }

 while (*VAR_1) {
  int VAR_5 = (unsigned char) *VAR_1++;
  if (FUNC_6(VAR_2, VAR_5))
   FUNC_3(VAR_0, &VAR_3, VAR_5);
  else {
   FUNC_3(VAR_0, &VAR_3, '%');
   FUNC_3(VAR_0, &VAR_3, VAR_4[(VAR_5 >> 4) & 0xf]);
   FUNC_3(VAR_0, &VAR_3, VAR_4[VAR_5 & 0xf]);
  }
 }
 FUNC_3(VAR_0, &VAR_3, 0);

 FUNC_2(VAR_0, VAR_3 ? VAR_3->s : "");
 FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_3);
}
