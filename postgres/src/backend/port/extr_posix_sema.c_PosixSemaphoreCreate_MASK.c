
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sem_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int,int) ;

__attribute__((used)) static void
FUNC_2(sem_t *VAR_1)
{
 if (FUNC_1(VAR_1, 1, 1) < 0)
  FUNC_0(VAR_0, "sem_init failed: %m");
}
