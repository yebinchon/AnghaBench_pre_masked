
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum COMPAT_MODE { ____Placeholder_COMPAT_MODE } COMPAT_MODE ;
typedef int PGresult ;


 long FUNC_0 (int const*,int,int,long) ;
 long FUNC_1 (int const*) ;

__attribute__((used)) static long
FUNC_2(const PGresult *VAR_0, int VAR_1, enum COMPAT_MODE VAR_2)
{
 long VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_1 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 return VAR_3;
}
