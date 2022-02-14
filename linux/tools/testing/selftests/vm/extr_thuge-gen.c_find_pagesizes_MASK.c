
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gl_pathc; int * gl_pathv; } ;
typedef TYPE_1__ glob_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*,int*) ;

void FUNC_5(void)
{
 glob_t VAR_3;
 int VAR_4;
 FUNC_1("/sys/kernel/mm/hugepages/hugepages-*kB", 0, ((void*)0), &VAR_3);
 FUNC_0(VAR_3.gl_pathc <= VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_3.gl_pathc; VAR_4++) {
  FUNC_4(VAR_3.gl_pathv[VAR_4], "/sys/kernel/mm/hugepages/hugepages-%lukB",
    &VAR_2[VAR_4]);
  VAR_2[VAR_4] <<= 10;
  FUNC_3("Found %luMB\n", VAR_2[VAR_4] >> 20);
 }
 VAR_1 = VAR_3.gl_pathc;
 FUNC_2(&VAR_3);
}
