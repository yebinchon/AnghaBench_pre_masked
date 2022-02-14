
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (struct idr*,unsigned long*) ;

void *FUNC_2(struct idr *VAR_1, int *VAR_2)
{
 unsigned long VAR_3 = *VAR_2;
 void *VAR_4 = FUNC_1(VAR_1, &VAR_3);

 if (FUNC_0(VAR_3 > VAR_0))
  return ((void*)0);
 *VAR_2 = VAR_3;
 return VAR_4;
}
