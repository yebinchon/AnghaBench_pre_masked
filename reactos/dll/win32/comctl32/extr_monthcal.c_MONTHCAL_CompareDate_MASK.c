
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SYSTEMTIME ;
typedef int LONG ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int const*,int *) ;
 int VAR_0 ;

__attribute__((used)) static LONG FUNC_2(const SYSTEMTIME *VAR_1, const SYSTEMTIME *VAR_2)
{
  SYSTEMTIME VAR_3, VAR_4;

  VAR_3 = VAR_4 = VAR_0;
  FUNC_1(VAR_1, &VAR_3);
  FUNC_1(VAR_2, &VAR_4);

  return FUNC_0(&VAR_3, &VAR_4);
}
