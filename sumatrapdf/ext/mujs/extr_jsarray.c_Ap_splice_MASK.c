
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int,int) ;
 double FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(js_State *VAR_0)
{
 int VAR_1 = FUNC_3(VAR_0);
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 double VAR_7;

 FUNC_5(VAR_0);

 VAR_2 = FUNC_2(VAR_0, 0);

 VAR_7 = FUNC_8(VAR_0, 1);
 if (VAR_7 < 0) VAR_7 = VAR_7 + VAR_2;
 VAR_3 = VAR_7 < 0 ? 0 : VAR_7 > VAR_2 ? VAR_2 : VAR_7;

 VAR_7 = FUNC_8(VAR_0, 2);
 VAR_4 = VAR_7 < 0 ? 0 : VAR_7 > VAR_2 - VAR_3 ? VAR_2 - VAR_3 : VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
  if (FUNC_4(VAR_0, 0, VAR_3 + VAR_6))
   FUNC_6(VAR_0, -2, VAR_6);
 FUNC_7(VAR_0, -1, VAR_4);


 VAR_5 = VAR_1 - 3;
 if (VAR_5 < VAR_4) {
  for (VAR_6 = VAR_3; VAR_6 < VAR_2 - VAR_4; ++VAR_6) {
   if (FUNC_4(VAR_0, 0, VAR_6 + VAR_4))
    FUNC_6(VAR_0, 0, VAR_6 + VAR_5);
   else
    FUNC_1(VAR_0, 0, VAR_6 + VAR_5);
  }
  for (VAR_6 = VAR_2; VAR_6 > VAR_2 - VAR_4 + VAR_5; --VAR_6)
   FUNC_1(VAR_0, 0, VAR_6 - 1);
 } else if (VAR_5 > VAR_4) {
  for (VAR_6 = VAR_2 - VAR_4; VAR_6 > VAR_3; --VAR_6) {
   if (FUNC_4(VAR_0, 0, VAR_6 + VAR_4 - 1))
    FUNC_6(VAR_0, 0, VAR_6 + VAR_5 - 1);
   else
    FUNC_1(VAR_0, 0, VAR_6 + VAR_5 - 1);
  }
 }


 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
  FUNC_0(VAR_0, 3 + VAR_6);
  FUNC_6(VAR_0, 0, VAR_3 + VAR_6);
 }

 FUNC_7(VAR_0, 0, VAR_2 - VAR_4 + VAR_5);
}
