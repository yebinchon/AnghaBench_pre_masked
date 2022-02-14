
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, int VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6, const char *VAR_7)
{
 switch (VAR_3) {
  case 128:
  {
   if (FUNC_0(VAR_4, ":memory:", sizeof(":memory:")) && *VAR_4) {
    if (FUNC_2(VAR_4, "file:", 5) == 0) {

     if (!VAR_4[5]) {
      return VAR_0;
     }
     if (FUNC_1(VAR_4 + 5)) {
      return VAR_0;
     }
    }
    if (FUNC_1(VAR_4)) {
     return VAR_0;
    }
   }
   return VAR_1;
  }

  default:

   return VAR_1;
 }
}
