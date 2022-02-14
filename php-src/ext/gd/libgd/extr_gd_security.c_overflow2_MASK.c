
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(int VAR_1, int VAR_2)
{
 if(VAR_1 <= 0 || VAR_2 <= 0) {
  FUNC_0("one parameter to a memory allocation multiplication is negative or zero, failing operation gracefully\n");
  return 1;
 }
 if(VAR_1 > VAR_0 / VAR_2) {
  FUNC_0("product of memory allocation multiplication would exceed INT_MAX, failing operation gracefully\n");
  return 1;
 }
 return 0;
}
