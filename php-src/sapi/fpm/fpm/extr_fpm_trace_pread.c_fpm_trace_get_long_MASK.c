
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int,uintptr_t) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(long VAR_2, long *VAR_3)
{
 if (sizeof(*VAR_3) != FUNC_0(VAR_1, (void *) VAR_3, sizeof(*VAR_3), (uintptr_t) VAR_2)) {
  FUNC_1(VAR_0, "pread() failed");
  return -1;
 }
 return 0;
}
