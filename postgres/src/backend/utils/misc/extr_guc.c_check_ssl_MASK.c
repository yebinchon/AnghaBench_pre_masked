
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool
FUNC_1(bool *VAR_0, void **VAR_1, GucSource VAR_2)
{

 if (*VAR_0)
 {
  FUNC_0("SSL is not supported by this build");
  return 0;
 }

 return 1;
}
