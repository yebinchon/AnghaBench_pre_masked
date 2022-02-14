
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2,
   unsigned int *VAR_3)
{
 unsigned int VAR_4 = 0;
 int VAR_5 = -VAR_0;

 while (VAR_4 < VAR_2) {
  VAR_5 = FUNC_0(VAR_1, 8);
  if (VAR_5 < 0)
   break;
  VAR_4++;
 }

 if (VAR_3)
  *VAR_3 = VAR_4;

 return VAR_5;
}
