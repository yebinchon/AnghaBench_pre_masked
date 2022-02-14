
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bit_values; } ;
struct TYPE_5__ {TYPE_1__ bit_values; int cdw_params; int cdw_locals; int cb_proc_size; int ul_off_start; } ;
typedef TYPE_2__ SFPO_DATA ;


 int FUNC_0 (int,int,int ,char*,int ) ;
 int FUNC_1 (int,int,int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(char *VAR_2, int VAR_3, int *VAR_4, SFPO_DATA *VAR_5)
{
 int VAR_6 = *VAR_4;

 FUNC_1(*VAR_4, VAR_3, VAR_5->ul_off_start, VAR_2, VAR_1);
 FUNC_1(*VAR_4, VAR_3, VAR_5->cb_proc_size, VAR_2, VAR_1);
 FUNC_1(*VAR_4, VAR_3, VAR_5->cdw_locals, VAR_2, VAR_1);
 FUNC_0(*VAR_4, VAR_3, VAR_5->cdw_params, VAR_2, VAR_0);
 FUNC_0(*VAR_4, VAR_3, VAR_5->bit_values.bit_values, VAR_2, VAR_0);

 VAR_5->bit_values.bit_values = FUNC_2(VAR_5->bit_values.bit_values);

 return (*VAR_4 - VAR_6);
}
