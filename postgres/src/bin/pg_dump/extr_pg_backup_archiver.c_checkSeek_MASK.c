
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pgoff_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;

bool
FUNC_2(FILE *VAR_1)
{
 pgoff_t VAR_2;






 if (sizeof(pgoff_t) > sizeof(long))
  return 0;



 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  return 0;






 if (FUNC_0(VAR_1, VAR_2, VAR_0) != 0)
  return 0;

 return 1;
}
