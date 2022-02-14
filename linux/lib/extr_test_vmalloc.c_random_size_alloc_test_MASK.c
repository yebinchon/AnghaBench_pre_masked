
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i ;
typedef int __u8 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int*,int) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned int VAR_2;
 void *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(&VAR_2, sizeof(VAR_4));
  VAR_2 = (VAR_2 % 100) + 1;

  VAR_3 = FUNC_2(VAR_2 * VAR_0);

  if (!VAR_3)
   return -1;

  *((__u8 *)VAR_3) = 1;
  FUNC_1(VAR_3);
 }

 return 0;
}
