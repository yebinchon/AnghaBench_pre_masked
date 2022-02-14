
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash_machine_guid; int machine_guid; } ;
typedef TYPE_1__ RRDHOST ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void* VAR_0, void* VAR_1) {
    if(((RRDHOST *)VAR_0)->hash_machine_guid < ((RRDHOST *)VAR_1)->hash_machine_guid) return -1;
    else if(((RRDHOST *)VAR_0)->hash_machine_guid > ((RRDHOST *)VAR_1)->hash_machine_guid) return 1;
    else return FUNC_0(((RRDHOST *)VAR_0)->machine_guid, ((RRDHOST *)VAR_1)->machine_guid);
}
