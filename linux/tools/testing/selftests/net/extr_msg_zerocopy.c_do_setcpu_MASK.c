
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mask ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,int,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(int VAR_2)
{
 cpu_set_t VAR_3;

 FUNC_1(&VAR_3);
 FUNC_0(VAR_2, &VAR_3);
 if (FUNC_4(0, sizeof(VAR_3), &VAR_3))
  FUNC_2(1, 0, "setaffinity %d", VAR_2);

 if (VAR_0)
  FUNC_3(VAR_1, "cpu: %u\n", VAR_2);

 return 0;
}
