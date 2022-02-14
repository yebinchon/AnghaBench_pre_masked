
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (void*,void const*,int) ;
 int FUNC_2 (void*,int ,int) ;

__attribute__((used)) static void *
FUNC_3(const void *VAR_0, __u32 VAR_1,
   __u32 VAR_2, __u32 VAR_3)
{
 __u64 VAR_4 = VAR_2 * VAR_1;
 void *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return ((void*)0);


 VAR_6 = VAR_5;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  FUNC_1(VAR_6, VAR_0, VAR_3);
  FUNC_2(VAR_6 + VAR_3, 0,
         VAR_2 - VAR_3);
  VAR_0 += VAR_2;
  VAR_6 += VAR_2;
 }

 return VAR_5;
}
