
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (void*,unsigned int,int *,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 __le32 VAR_4;
 unsigned int VAR_5;

 VAR_5 = FUNC_2(VAR_2);

 if (VAR_2 == VAR_0) {

  VAR_2 += 3;
  VAR_5 = 1;
  VAR_3 >>= 24;
 }

 VAR_4 = FUNC_0(VAR_3);
 return FUNC_1(VAR_1, VAR_2, &VAR_4, VAR_5);
}
