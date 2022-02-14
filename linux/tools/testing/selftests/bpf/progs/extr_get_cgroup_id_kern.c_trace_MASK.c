
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef scalar_t__ __u32 ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 (int *,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(void *VAR_2)
{
 __u32 VAR_3 = FUNC_1();
 __u32 VAR_4 = 0, *VAR_5;
 __u64 *VAR_6;

 VAR_5 = FUNC_2(&VAR_1, &VAR_4);
 if (!VAR_5 || *VAR_5 != VAR_3)
  return 0;

 VAR_6 = FUNC_2(&VAR_0, &VAR_4);
 if (VAR_6)
  *VAR_6 = FUNC_0();

 return 0;
}
