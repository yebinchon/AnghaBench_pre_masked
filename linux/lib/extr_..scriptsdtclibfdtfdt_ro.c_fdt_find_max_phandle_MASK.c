
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const*,int) ;
 int FUNC_1 (void const*,int,int *) ;

int FUNC_2(const void *VAR_1, uint32_t *VAR_2)
{
 uint32_t VAR_3 = 0;
 int VAR_4 = -1;

 while (1) {
  uint32_t VAR_5;

  VAR_4 = FUNC_1(VAR_1, VAR_4, ((void*)0));
  if (VAR_4 < 0) {
   if (VAR_4 == -VAR_0)
    break;

   return VAR_4;
  }

  VAR_5 = FUNC_0(VAR_1, VAR_4);

  if (VAR_5 > VAR_3)
   VAR_3 = VAR_5;
 }

 if (VAR_2)
  *VAR_2 = VAR_3;

 return 0;
}
