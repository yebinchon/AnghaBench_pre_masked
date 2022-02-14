
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMImageType ;
typedef int MMIOError ;
typedef int * MMBitmapRef ;



 int VAR_0 ;

 int * FUNC_0 (char const*,int *) ;
 int * FUNC_1 (char const*,int *) ;

MMBitmapRef FUNC_2(const char *VAR_1,
                                MMImageType VAR_2,
                                MMIOError *VAR_3)
{
 switch (VAR_2) {
  case 129:
   return FUNC_0(VAR_1, VAR_3);
  case 128:
   return FUNC_1(VAR_1, VAR_3);
  default:
   if (VAR_3 != ((void*)0)) *VAR_3 = VAR_0;
   return ((void*)0);
 }
}
