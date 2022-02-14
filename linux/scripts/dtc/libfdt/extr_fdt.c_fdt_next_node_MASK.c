
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;





 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (void const*,int) ;
 int FUNC_1 (void const*,int,int*) ;

int FUNC_2(const void *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6;

 if (VAR_3 >= 0)
  if ((VAR_5 = FUNC_0(VAR_2, VAR_3)) < 0)
   return VAR_5;

 do {
  VAR_3 = VAR_5;
  VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_5);

  switch (VAR_6) {
  case 128:
  case 129:
   break;

  case 132:
   if (VAR_4)
    (*VAR_4)++;
   break;

  case 130:
   if (VAR_4 && ((--(*VAR_4)) < 0))
    return VAR_5;
   break;

  case 131:
   if ((VAR_5 >= 0)
       || ((VAR_5 == -VAR_1) && !VAR_4))
    return -VAR_0;
   else
    return VAR_5;
  }
 } while (VAR_6 != 132);

 return VAR_3;
}
