
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMImageType ;
typedef int MMIOError ;


 char const* FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;



const char *FUNC_2(MMImageType VAR_0, MMIOError VAR_1)
{
 switch (VAR_0) {
  case 129:
   return FUNC_0(VAR_1);
  case 128:
   return FUNC_1(VAR_1);
  default:
   return "Unsupported image type";
 }
}
