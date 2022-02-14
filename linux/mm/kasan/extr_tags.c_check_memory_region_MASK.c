
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void const*) ;
 scalar_t__* FUNC_1 (void*) ;
 int FUNC_2 (unsigned long,size_t,int,unsigned long) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (void const*) ;
 scalar_t__ FUNC_5 (int) ;

bool FUNC_6(unsigned long VAR_2, size_t VAR_3, bool VAR_4,
    unsigned long VAR_5)
{
 u8 VAR_6;
 u8 *VAR_7, *VAR_8, *VAR_9;
 void *VAR_10;

 if (FUNC_5(VAR_3 == 0))
  return 1;

 VAR_6 = FUNC_0((const void *)VAR_2);
 if (VAR_6 == VAR_1)
  return 1;

 VAR_10 = FUNC_4((const void *)VAR_2);
 if (FUNC_5(VAR_10 <
   FUNC_3((void *)VAR_0))) {
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
  return 0;
 }
 VAR_7 = FUNC_1(VAR_10);
 VAR_8 = FUNC_1(VAR_10 + VAR_3 - 1);
 for (VAR_9 = VAR_7; VAR_9 <= VAR_8; VAR_9++) {
  if (*VAR_9 != VAR_6) {
   FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
   return 0;
  }
 }

 return 1;
}
