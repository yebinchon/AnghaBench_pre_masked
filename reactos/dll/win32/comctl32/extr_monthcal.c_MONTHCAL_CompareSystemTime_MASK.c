
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SYSTEMTIME ;
typedef int LONG ;
typedef int FILETIME ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int const*,int *) ;

LONG FUNC_2(const SYSTEMTIME *VAR_0, const SYSTEMTIME *VAR_1)
{
  FILETIME VAR_2, VAR_3;

  FUNC_1(VAR_0, &VAR_2);
  FUNC_1(VAR_1, &VAR_3);

  return FUNC_0(&VAR_2, &VAR_3);
}
