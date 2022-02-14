
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (void const*,int,int*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_3, int VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 do {
  VAR_5 = FUNC_0(VAR_3, VAR_4, &VAR_6);

  switch (VAR_5) {
  case 129:
   if (VAR_6 >= 0)
    return -VAR_0;
   else
    return VAR_6;

  case 128:
   return VAR_4;
  }
  VAR_4 = VAR_6;
 } while (VAR_5 == VAR_2);

 return -VAR_1;
}
