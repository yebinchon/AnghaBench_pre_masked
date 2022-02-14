
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(const char * VAR_4, int *VAR_5, int *VAR_6)
{
 char VAR_7[VAR_2];

 *VAR_5 = 0;
 *VAR_6 = 0;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_1(VAR_7, sizeof(VAR_7));







 }
 if (VAR_4 == ((void*)0) || !FUNC_2(VAR_4, -1)) {
  if (FUNC_3() == 0) {
   FUNC_5();
   FUNC_4(((void*)0), VAR_0, "unable to load random state; not enough random data!");
   return VAR_1;
  }
  return VAR_1;
 }
 *VAR_6 = 1;
 return VAR_3;
}
