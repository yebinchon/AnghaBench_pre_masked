
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UErrorCode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char**,int ,char*,int ,char const*) ;

__attribute__((used)) static int FUNC_6(UErrorCode VAR_2, const char *VAR_3)
{
 FUNC_3(((void*)0), VAR_2);
 if (FUNC_0(VAR_2)) {
  char *VAR_4;
  FUNC_5(&VAR_4, 0, "%s: %s",
   FUNC_2(),
   VAR_3);
  FUNC_4(((void*)0), VAR_4, 1);
  FUNC_1(VAR_4);
  return VAR_0;
 }

 return VAR_1;
}
