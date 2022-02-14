
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_id {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct dmi_system_id *VAR_3)
{
 VAR_2 = (unsigned long)VAR_3->driver_data;
 VAR_0 = VAR_1;
 return 1;
}
