
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * propid_to_prop; int * propid_to_name; int * name_to_propid; } ;
typedef TYPE_1__ PropertyStorage_impl ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(PropertyStorage_impl *VAR_0)
{
    FUNC_0(VAR_0->name_to_propid);
    VAR_0->name_to_propid = ((void*)0);
    FUNC_0(VAR_0->propid_to_name);
    VAR_0->propid_to_name = ((void*)0);
    FUNC_0(VAR_0->propid_to_prop);
    VAR_0->propid_to_prop = ((void*)0);
}
