
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*,int,int *,int ) ;

void FUNC_1(void *VAR_0, int VAR_1)
{
 char *VAR_2 = (void *)VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += sizeof(u64)) {
  u64 *VAR_4 = (u64 *)(VAR_2 + VAR_3);
  FUNC_0("dump[%03d][@%p]: %016jx\n", VAR_3, VAR_4, *VAR_4);
 }
}
