
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int Rune ;


 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,char const*) ;

__attribute__((used)) static void FUNC_11(js_State *VAR_0)
{
 const char *VAR_1 = FUNC_1(VAR_0, 0);
 const char *VAR_2 = FUNC_8(VAR_0, 1);
 int VAR_3 = FUNC_2(VAR_0, 2) ? FUNC_7(VAR_0, 2) : 1 << 30;
 int VAR_4, VAR_5;

 FUNC_3(VAR_0);

 VAR_5 = FUNC_9(VAR_2);


 if (VAR_5 == 0) {
  Rune VAR_6;
  for (VAR_4 = 0; *VAR_1 && VAR_4 < VAR_3; ++VAR_4) {
   VAR_5 = FUNC_0(&VAR_6, VAR_1);
   FUNC_4(VAR_0, VAR_1, VAR_5);
   FUNC_6(VAR_0, -2, VAR_4);
   VAR_1 += VAR_5;
  }
  return;
 }

 for (VAR_4 = 0; VAR_1 && VAR_4 < VAR_3; ++VAR_4) {
  const char *VAR_7 = FUNC_10(VAR_1, VAR_2);
  if (VAR_7) {
   FUNC_4(VAR_0, VAR_1, VAR_7-VAR_1);
   FUNC_6(VAR_0, -2, VAR_4);
   VAR_1 = VAR_7 + VAR_5;
  } else {
   FUNC_5(VAR_0, VAR_1);
   FUNC_6(VAR_0, -2, VAR_4);
   VAR_1 = ((void*)0);
  }
 }
}
