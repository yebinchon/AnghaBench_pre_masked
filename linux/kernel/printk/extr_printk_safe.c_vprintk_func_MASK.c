
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (int ,int ,int *,int ,char const*,int ) ;

int FUNC_8(const char *VAR_6, va_list VAR_7)
{




 if ((FUNC_3(VAR_5) & VAR_2) &&
     FUNC_1(&VAR_4)) {
  int VAR_8;

  VAR_8 = FUNC_7(0, VAR_0, ((void*)0), 0, VAR_6, VAR_7);
  FUNC_2(&VAR_4);
  FUNC_0();
  return VAR_8;
 }


 if (FUNC_3(VAR_5) & VAR_1)
  return FUNC_5(VAR_6, VAR_7);


 if (FUNC_3(VAR_5) & VAR_3)
  return FUNC_6(VAR_6, VAR_7);


 return FUNC_4(VAR_6, VAR_7);
}
