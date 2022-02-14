
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(void *VAR_3, size_t VAR_4)
{
 if (!VAR_3) {
  FUNC_1(VAR_0, "mem is NULL");
  return 0;
 }

 if (FUNC_0(VAR_3, VAR_4) == -1) {
  FUNC_1(VAR_1, "Unable to free shm");
  return 0;
 }

 if (VAR_2 - VAR_4 > 0) {
  VAR_2 -= VAR_4;
 } else {
  VAR_2 = 0;
 }

 return 1;
}
