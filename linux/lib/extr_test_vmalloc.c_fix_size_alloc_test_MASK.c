
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void)
{
 void *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = FUNC_1(3 * VAR_0);

  if (!VAR_2)
   return -1;

  *((__u8 *)VAR_2) = 0;

  FUNC_0(VAR_2);
 }

 return 0;
}
