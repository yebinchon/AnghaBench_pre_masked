
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int FILE ;


 char const* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

const char *FUNC_2(FILE *VAR_0)
{
   uint16_t VAR_1 = FUNC_1(VAR_0);
   switch(VAR_1)
   {
      case 0:
  return FUNC_0("not copy protected");
      case 0x5a5a:
  return FUNC_0("copy protected");
      default:
  return FUNC_0("unknown value");
   }
}
