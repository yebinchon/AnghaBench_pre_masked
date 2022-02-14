
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, int VAR_3, const char *VAR_4, const char *VAR_5,
  const char *VAR_6, const char *VAR_7)
{
 char *VAR_8;
 switch (VAR_3) {
  case 128: {
     VAR_8 = FUNC_1(VAR_5);
   if (!VAR_8) {
    return VAR_0;
   }
   FUNC_0(VAR_8);
   return VAR_1;
  }

  case 129: {
     VAR_8 = FUNC_1(VAR_4);
   if (!VAR_8) {
    return VAR_0;
   }
   FUNC_0(VAR_8);
   return VAR_1;
  }

  default:

   return VAR_1;
 }
}
