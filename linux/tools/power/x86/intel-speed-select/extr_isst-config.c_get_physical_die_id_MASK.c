
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;

int FUNC_1(int VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(0, "/sys/devices/system/cpu/cpu%d/topology/die_id",
        VAR_0);
 if (VAR_1 < 0)
  VAR_1 = 0;

 return VAR_1;
}
