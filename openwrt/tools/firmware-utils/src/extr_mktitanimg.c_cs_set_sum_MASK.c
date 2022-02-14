
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (unsigned long*,int,int,int *) ;

int FUNC_2(FILE *VAR_2, unsigned long VAR_3, int VAR_4)
{
 unsigned long VAR_5 = VAR_0;

 if(VAR_4)
  FUNC_0(VAR_2, -8, VAR_1);
 else
  FUNC_0(VAR_2, 0, VAR_1);

 if(FUNC_1(&VAR_5, 1, 4, VAR_2) < 4)
  return 0;
 if(FUNC_1(&VAR_3, 1, 4, VAR_2) < 4)
  return 0;

 return 1;
}
