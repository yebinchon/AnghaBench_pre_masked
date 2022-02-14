
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_0 << 27, VAR_5 = VAR_1 << 27;

 for (; VAR_4 >= VAR_0; VAR_4 >>= 1, VAR_5 >>= 1)
  if (VAR_3 & VAR_4)
   VAR_3 ^= VAR_5;
 return VAR_3 & (VAR_2-1);
}
