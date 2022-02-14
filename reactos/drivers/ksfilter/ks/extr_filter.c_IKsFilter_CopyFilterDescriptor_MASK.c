
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {int Bag; TYPE_10__* Descriptor; } ;
struct TYPE_15__ {TYPE_1__ Filter; } ;
struct TYPE_14__ {int PropertyItemSize; int PropertySetsCount; int PropertySets; } ;
struct TYPE_13__ {scalar_t__ AutomationTable; } ;
struct TYPE_11__ {int AutomationTable; } ;
typedef int PVOID ;
typedef int PKSAUTOMATION_TABLE ;
typedef int NTSTATUS ;
typedef int KSPROPERTY_ITEM ;
typedef TYPE_2__ KSFILTER_DESCRIPTOR ;
typedef TYPE_3__ KSAUTOMATION_TABLE ;
typedef TYPE_4__ IKsFilterImpl ;


 TYPE_10__* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_2__ const*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int VAR_2 ;

NTSTATUS
FUNC_7(
    IKsFilterImpl * VAR_3,
    const KSFILTER_DESCRIPTOR* VAR_4)
{
    NTSTATUS VAR_5;
    KSAUTOMATION_TABLE VAR_6;

    VAR_3->Filter.Descriptor = FUNC_0(VAR_1, sizeof(KSFILTER_DESCRIPTOR));
    if (!VAR_3->Filter.Descriptor)
        return VAR_2;

    VAR_5 = FUNC_2(VAR_3->Filter.Bag, (PVOID)VAR_3->Filter.Descriptor, ((void*)0));
    if (!FUNC_4(VAR_5))
    {
        FUNC_1((PVOID)VAR_3->Filter.Descriptor);
        VAR_3->Filter.Descriptor = ((void*)0);
        return VAR_2;
    }


    FUNC_5((PVOID)VAR_3->Filter.Descriptor, VAR_4, sizeof(KSFILTER_DESCRIPTOR));


    FUNC_6(&VAR_6, sizeof(KSAUTOMATION_TABLE));


    VAR_6.PropertyItemSize = sizeof(KSPROPERTY_ITEM);
    VAR_6.PropertySetsCount = 3;
    VAR_6.PropertySets = VAR_0;


    VAR_5 = FUNC_3((PKSAUTOMATION_TABLE*)&VAR_3->Filter.Descriptor->AutomationTable, (PKSAUTOMATION_TABLE)VAR_4->AutomationTable, &VAR_6, VAR_3->Filter.Bag);

    return VAR_5;
}
