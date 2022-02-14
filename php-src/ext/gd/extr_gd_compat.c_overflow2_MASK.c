
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;

int FUNC_1(int VAR_2, int VAR_3)
{

 if(VAR_2 <= 0 || VAR_3 <= 0) {
  FUNC_0(((void*)0), VAR_0, "one parameter to a memory allocation multiplication is negative or zero, failing operation gracefully\n");
  return 1;
 }
 if(VAR_2 > VAR_1 / VAR_3) {
  FUNC_0(((void*)0), VAR_0, "product of memory allocation multiplication would exceed INT_MAX, failing operation gracefully\n");
  return 1;
 }
 return 0;
}
