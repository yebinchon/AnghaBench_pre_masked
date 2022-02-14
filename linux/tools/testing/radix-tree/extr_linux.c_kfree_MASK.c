
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,void*) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_2)
{
 if (!VAR_2)
  return;
 FUNC_2(&VAR_1);
 if (VAR_0)
  FUNC_1("Freeing %p to malloc\n", VAR_2);
 FUNC_0(VAR_2);
}
