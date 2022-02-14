
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMSampleBufferRef ;
typedef scalar_t__ CFDictionaryRef ;
typedef scalar_t__ CFBooleanRef ;
typedef int * CFArrayRef ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int * FUNC_2 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_3(CMSampleBufferRef VAR_2)
{
 CFArrayRef VAR_3 =
  FUNC_2(VAR_2, 0);
 if (VAR_3 != ((void*)0)) {
  CFDictionaryRef VAR_4;
  CFBooleanRef VAR_5;
  VAR_4 =
   (CFDictionaryRef)FUNC_0(VAR_3, 0);
  VAR_5 = (CFBooleanRef)FUNC_1(
   VAR_4, VAR_1);
  return VAR_5 == VAR_0;
 }

 return 0;
}
