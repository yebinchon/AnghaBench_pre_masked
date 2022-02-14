
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_2) != VAR_1) {
  FUNC_1("encrypted_key: key description must be %d hexadecimal "
         "characters long\n", VAR_1);
  return -VAR_0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (!FUNC_0(VAR_2[VAR_3])) {
   FUNC_1("encrypted_key: key description must contain "
          "only hexadecimal characters\n");
   return -VAR_0;
  }
 }

 return 0;
}
