
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;


 int FUNC_0 () ;
 int* FUNC_1 (int *,int*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(void *VAR_2)
{
 __u64 *VAR_3, *VAR_4;
 __u32 VAR_5 = 0, VAR_6, VAR_7;
 int VAR_8;

 VAR_4 = FUNC_1(&VAR_1, &VAR_5);
 if (!VAR_4 || *VAR_4 != 0)
  return 0;

 VAR_3 = FUNC_1(&VAR_0, &VAR_5);
 if (!VAR_3 || *VAR_3 == 0)
  return 0;

 VAR_7 = *VAR_3 >> 32;
 VAR_6 = *VAR_3 & 0xffffFFFF;

 if ((FUNC_0() >> 32) == VAR_6) {
  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8 == 0)
   *VAR_4 = 1;
 }

 return 0;
}
