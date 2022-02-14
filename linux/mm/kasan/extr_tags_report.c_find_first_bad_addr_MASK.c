
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;

void *FUNC_3(void *VAR_1, size_t VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_1);
 void *VAR_4 = FUNC_2(VAR_1);
 void *VAR_5 = VAR_4 + VAR_2;

 while (VAR_4 < VAR_5 && VAR_3 == *(u8 *)FUNC_1(VAR_4))
  VAR_4 += VAR_0;
 return VAR_4;
}
