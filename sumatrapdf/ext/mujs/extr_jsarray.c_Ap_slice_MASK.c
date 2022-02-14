
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;
 double VAR_5, VAR_6;

 FUNC_3(VAR_0);

 VAR_1 = FUNC_0(VAR_0, 0);
 VAR_5 = FUNC_5(VAR_0, 1);
 VAR_6 = FUNC_2(VAR_0, 2) ? FUNC_5(VAR_0, 2) : VAR_1;

 if (VAR_5 < 0) VAR_5 = VAR_5 + VAR_1;
 if (VAR_6 < 0) VAR_6 = VAR_6 + VAR_1;

 VAR_2 = VAR_5 < 0 ? 0 : VAR_5 > VAR_1 ? VAR_1 : VAR_5;
 VAR_3 = VAR_6 < 0 ? 0 : VAR_6 > VAR_1 ? VAR_1 : VAR_6;

 for (VAR_4 = 0; VAR_2 < VAR_3; ++VAR_2, ++VAR_4)
  if (FUNC_1(VAR_0, 0, VAR_2))
   FUNC_4(VAR_0, -2, VAR_4);
}
