
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(int *VAR_1, void **VAR_2, GucSource VAR_3)
{



 if (VAR_0 && VAR_0 != *VAR_1)
 {
  FUNC_0("\"temp_buffers\" cannot be changed after any temporary tables have been accessed in the session.");
  return 0;
 }
 return 1;
}
