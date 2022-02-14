
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int js_State ;
typedef int js_Object ;
struct TYPE_7__ {int n; } ;
typedef TYPE_1__ js_Buffer ;


 int FUNC_0 (int *,TYPE_1__**,char const*,int) ;
 int FUNC_1 (int *,TYPE_1__**,char const*) ;
 int FUNC_2 (int *,TYPE_1__**,char const*,char const*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,TYPE_1__**,char) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,char*) ;

__attribute__((used)) static void FUNC_12(js_State *VAR_0, js_Buffer **VAR_1, js_Object *VAR_2, const char *VAR_3, int VAR_4)
{
 const char *VAR_5;
 int VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_0) - 1;
 for (VAR_7 = 4; VAR_7 < VAR_8; ++VAR_7)
  if (FUNC_4(VAR_0, VAR_7))
   if (FUNC_10(VAR_0, VAR_7) == FUNC_10(VAR_0, -1))
    FUNC_11(VAR_0, "cyclic object value");

 VAR_8 = 0;
 FUNC_8(VAR_0, VAR_1, '{');
 FUNC_7(VAR_0, -1, 1);
 while ((VAR_5 = FUNC_5(VAR_0, -1))) {
  VAR_6 = (*VAR_1)->n;
  if (VAR_8) FUNC_8(VAR_0, VAR_1, ',');
  if (VAR_3) FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4 + 1);
  FUNC_1(VAR_0, VAR_1, VAR_5);
  FUNC_8(VAR_0, VAR_1, ':');
  if (VAR_3)
   FUNC_8(VAR_0, VAR_1, ' ');
  FUNC_9(VAR_0);
  if (!FUNC_2(VAR_0, VAR_1, VAR_5, VAR_3, VAR_4 + 1))
   (*VAR_1)->n = VAR_6;
  else
   ++VAR_8;
  FUNC_9(VAR_0);
 }
 FUNC_6(VAR_0, 1);
 if (VAR_3 && VAR_8) FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
 FUNC_8(VAR_0, VAR_1, '}');
}
