
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int smart_str ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (char const*,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, smart_str *VAR_2)
{
 if (VAR_1) {
  int VAR_3 = FUNC_2(VAR_1);
  FUNC_0(VAR_3, VAR_2);
  if (VAR_3 > 0) {
   FUNC_1(VAR_1, VAR_3, VAR_2);
  }
 } else {
  FUNC_0(VAR_0, VAR_2);
 }
}
