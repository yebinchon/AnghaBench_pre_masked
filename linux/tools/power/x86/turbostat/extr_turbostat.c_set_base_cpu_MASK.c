
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(void)
{
 VAR_1 = FUNC_2();
 if (VAR_1 < 0)
  FUNC_0(-VAR_0, "No valid cpus found");

 if (VAR_2 > 1)
  FUNC_1(VAR_3, "base_cpu = %ld\n", VAR_1);
}
