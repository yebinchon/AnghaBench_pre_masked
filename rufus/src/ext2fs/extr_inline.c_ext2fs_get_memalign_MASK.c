
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ errcode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (unsigned long) ;
 void* FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (void**,unsigned long,unsigned long) ;
 void* FUNC_4 (unsigned long) ;

errcode_t FUNC_5(unsigned long VAR_3,
         unsigned long VAR_4, void *VAR_5)
{
 errcode_t VAR_6 = 0;
 void **VAR_7 = VAR_5;

 if (VAR_4 < 8)
  VAR_4 = 8;
  *VAR_7 = FUNC_1(VAR_3);
 if ((uintptr_t) *VAR_7 & (VAR_4 - 1)) {
  FUNC_0(*VAR_7);
  *VAR_7 = 0;
 }
 if (*VAR_7 == 0)
  return VAR_1;


 return VAR_6;
}
