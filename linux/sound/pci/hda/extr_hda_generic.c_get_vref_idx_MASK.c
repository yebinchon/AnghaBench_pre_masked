
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1 & (1 << VAR_3)) {
   if (VAR_4 == VAR_2)
    return VAR_3;
   VAR_4++;
  }
 }
 return 0;
}
