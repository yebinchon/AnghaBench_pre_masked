
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;






 int VAR_0 ;
 char* FUNC_0 (void const*,int,int *) ;
 int FUNC_1 (void const*,int,int*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const void *VAR_1, int VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;
 int VAR_5 = 0;
 const char *VAR_6;
 int VAR_7 = 1;

 while (VAR_5 >= 0) {
  VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);
  switch (VAR_4) {
  case 131:
   VAR_6 = FUNC_0(VAR_1, VAR_2, ((void*)0));
   if (VAR_5 <= VAR_7) {
    if (VAR_6 == ((void*)0))
     VAR_6 = "/* NULL pointer error */";
    if (*VAR_6 == '\0')
     VAR_6 = "/";
    if (VAR_5 == 1)
     FUNC_3(VAR_6);
   }
   VAR_5++;
   if (VAR_5 >= VAR_0) {
    FUNC_2("Nested too deep, aborting.\n");
    return 1;
   }
   break;
  case 129:
   VAR_5--;
   if (VAR_5 == 0)
    VAR_5 = -1;
   break;
  case 130:
   return 1;
  case 128:
   break;
  default:
   if (VAR_5 <= VAR_7)
    FUNC_2("Unknown tag 0x%08X\n", VAR_4);
   return 1;
  }
  VAR_2 = VAR_3;
 }
 return 0;
}
