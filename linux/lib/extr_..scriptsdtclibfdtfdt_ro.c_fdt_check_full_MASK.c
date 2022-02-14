
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 size_t VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (void const*) ;
 void* FUNC_1 (void const*,int,char const**,int*) ;
 int FUNC_2 (void const*,int,int*) ;
 int FUNC_3 (void const*) ;
 size_t FUNC_4 (void const*) ;

int FUNC_5(const void *VAR_5, size_t VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9, VAR_10 = 0;
 uint32_t VAR_11;
 unsigned VAR_12 = 0;
 const void *VAR_13;
 const char *VAR_14;

 if (VAR_6 < VAR_3)
  return -VAR_2;
 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 != 0)
  return VAR_7;
 if (VAR_6 < FUNC_4(VAR_5))
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 while (1) {
  VAR_9 = VAR_10;
  VAR_11 = FUNC_2(VAR_5, VAR_9, &VAR_10);

  if (VAR_10 < 0)
   return VAR_10;

  switch (VAR_11) {
  case 129:
   break;

  case 131:
   if (VAR_12 != 0)
    return -VAR_0;
   return 0;

  case 132:
   VAR_12++;
   if (VAR_12 > VAR_4)
    return -VAR_0;
   break;

  case 130:
   if (VAR_12 == 0)
    return -VAR_0;
   VAR_12--;
   break;

  case 128:
   VAR_13 = FUNC_1(VAR_5, VAR_9, &VAR_14,
           &VAR_7);
   if (!VAR_13)
    return VAR_7;
   break;

  default:
   return -VAR_1;
  }
 }
}
