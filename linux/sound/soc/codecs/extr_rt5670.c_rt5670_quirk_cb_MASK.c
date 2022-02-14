
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_id {scalar_t__ driver_data; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct dmi_system_id *VAR_1)
{
 VAR_0 = (unsigned long)VAR_1->driver_data;
 return 1;
}
