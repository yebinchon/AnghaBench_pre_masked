
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef size_t ULONG ;
struct TYPE_12__ {int TopologyNodesCount; int TopologyConnectionsCount; int * TopologyNodesNames; int * TopologyNodes; scalar_t__ TopologyConnections; int Categories; int CategoriesCount; } ;
struct TYPE_11__ {TYPE_1__* Descriptor; int Bag; } ;
struct TYPE_16__ {TYPE_3__ Topology; TYPE_2__ Filter; int * ProcessPinIndex; int * FirstPin; int * PinInstanceCount; } ;
struct TYPE_15__ {int NodeDescriptorsCount; int ConnectionsCount; int PinDescriptorsCount; int PinDescriptors; int PinDescriptorSize; int NodeDescriptors; int NodeDescriptorSize; scalar_t__ Connections; int Categories; int CategoriesCount; } ;
struct TYPE_14__ {int ConnectionsCount; } ;
struct TYPE_13__ {int Type; int Name; } ;
struct TYPE_10__ {scalar_t__ Connections; int PinDescriptors; } ;
typedef int PVOID ;
typedef TYPE_4__* PKSNODE_DESCRIPTOR ;
typedef TYPE_5__* PKSFILTER_DESCRIPTOR ;
typedef int NTSTATUS ;
typedef int KSTOPOLOGY_CONNECTION ;
typedef int KSPROCESSPIN_INDEXENTRY ;
typedef int KSPIN_DESCRIPTOR_EX ;
typedef int KSNODE_DESCRIPTOR ;
typedef TYPE_6__ KSFILTER_DESCRIPTOR ;
typedef TYPE_7__ IKsFilterImpl ;
typedef int GUID ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (char*,size_t,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int *,int,int,int ) ;

NTSTATUS
FUNC_7(
    IKsFilterImpl * VAR_3,
    KSFILTER_DESCRIPTOR* VAR_4)
{
    ULONG VAR_5 = 0;
    NTSTATUS VAR_6;
    PKSNODE_DESCRIPTOR VAR_7;


    VAR_3->FirstPin = ((void*)0);
    VAR_3->PinInstanceCount = ((void*)0);
    VAR_3->ProcessPinIndex = ((void*)0);


    VAR_3->Topology.CategoriesCount = VAR_4->CategoriesCount;
    VAR_3->Topology.Categories = VAR_4->Categories;
    VAR_3->Topology.TopologyNodesCount = VAR_4->NodeDescriptorsCount;
    VAR_3->Topology.TopologyConnectionsCount = VAR_4->ConnectionsCount;
    VAR_3->Topology.TopologyConnections = VAR_4->Connections;


    if (VAR_4->PinDescriptorsCount)
    {

        FUNC_0(VAR_4->PinDescriptors);


        FUNC_0(VAR_4->PinDescriptorSize == sizeof(KSPIN_DESCRIPTOR_EX));


        VAR_6 = FUNC_6(VAR_3->Filter.Bag, (PVOID*)&VAR_3->Filter.Descriptor->PinDescriptors, VAR_4->PinDescriptorSize * VAR_4->PinDescriptorsCount,
                         VAR_4->PinDescriptorSize * VAR_4->PinDescriptorsCount, 0);

        if (!FUNC_4(VAR_6))
        {
            FUNC_2("IKsFilter_CreateDescriptors _KsEdit failed %lx\n", VAR_6);
            return VAR_6;
        }


        VAR_6 = FUNC_6(VAR_3->Filter.Bag, (PVOID*)&VAR_3->PinInstanceCount, sizeof(ULONG) * VAR_4->PinDescriptorsCount,
                         sizeof(ULONG) * VAR_4->PinDescriptorsCount, 0);

        if (!FUNC_4(VAR_6))
        {
            FUNC_2("IKsFilter_CreateDescriptors _KsEdit failed %lx\n", VAR_6);
            return VAR_6;
        }


        VAR_6 = FUNC_6(VAR_3->Filter.Bag, (PVOID*)&VAR_3->FirstPin, sizeof(PVOID) * VAR_4->PinDescriptorsCount,
                         sizeof(PVOID) * VAR_4->PinDescriptorsCount, 0);

        if (!FUNC_4(VAR_6))
        {
            FUNC_2("IKsFilter_CreateDescriptors _KsEdit failed %lx\n", VAR_6);
            return VAR_6;
        }


        FUNC_5((PVOID)VAR_3->Filter.Descriptor->PinDescriptors, VAR_4->PinDescriptors, VAR_4->PinDescriptorSize * VAR_4->PinDescriptorsCount);


        VAR_6 = FUNC_6(VAR_3->Filter.Bag, (PVOID*)&VAR_3->ProcessPinIndex, sizeof(KSPROCESSPIN_INDEXENTRY) * VAR_4->PinDescriptorsCount,
                         sizeof(KSPROCESSPIN_INDEXENTRY) * VAR_4->PinDescriptorsCount, 0);

        if (!FUNC_4(VAR_6))
        {
            FUNC_2("IKsFilter_CreateDescriptors _KsEdit failed %lx\n", VAR_6);
            return VAR_6;
        }

    }


    if (VAR_4->ConnectionsCount)
    {

        VAR_6 = FUNC_6(VAR_3->Filter.Bag,
                        (PVOID*)&VAR_3->Filter.Descriptor->Connections,
                         VAR_4->ConnectionsCount * sizeof(KSTOPOLOGY_CONNECTION),
                         VAR_4->ConnectionsCount * sizeof(KSTOPOLOGY_CONNECTION),
                         0);

       VAR_3->Topology.TopologyConnections = VAR_3->Filter.Descriptor->Connections;
       VAR_3->Topology.TopologyConnectionsCount = ((PKSFILTER_DESCRIPTOR)VAR_3->Filter.Descriptor)->ConnectionsCount = VAR_4->ConnectionsCount;
    }

    if (VAR_4->NodeDescriptorsCount)
    {

        FUNC_0(VAR_4->NodeDescriptors);


        FUNC_0(VAR_4->NodeDescriptorSize >= sizeof(KSNODE_DESCRIPTOR));

        VAR_3->Topology.TopologyNodes = FUNC_1(VAR_0, sizeof(GUID) * VAR_4->NodeDescriptorsCount);

        if (!VAR_3->Topology.TopologyNodes)
        {
            FUNC_2("IKsFilter_CreateDescriptors OutOfMemory TopologyNodesCount %lu\n", VAR_4->NodeDescriptorsCount);
            return VAR_1;
        }

        VAR_3->Topology.TopologyNodesNames = FUNC_1(VAR_0, sizeof(GUID) * VAR_4->NodeDescriptorsCount);

        if (!VAR_3->Topology.TopologyNodesNames)
        {
            FUNC_3((PVOID)VAR_3->Topology.TopologyNodes);
            FUNC_2("IKsFilter_CreateDescriptors OutOfMemory TopologyNodesCount %lu\n", VAR_4->NodeDescriptorsCount);
            return VAR_1;
        }

        FUNC_2("NodeDescriptorCount %lu\n", VAR_4->NodeDescriptorsCount);
        VAR_7 = (PKSNODE_DESCRIPTOR)VAR_4->NodeDescriptors;
        for(VAR_5 = 0; VAR_5 < VAR_4->NodeDescriptorsCount; VAR_5++)
        {
            FUNC_2("Index %lu Type %p Name %p\n", VAR_5, VAR_7->Type, VAR_7->Name);


            if (VAR_7->Type)
                FUNC_5((PVOID)&VAR_3->Topology.TopologyNodes[VAR_5], VAR_7->Type, sizeof(GUID));


            if (VAR_7->Name)
                FUNC_5((PVOID)&VAR_3->Topology.TopologyNodesNames[VAR_5], VAR_7->Name, sizeof(GUID));


            VAR_7 = (PKSNODE_DESCRIPTOR)((ULONG_PTR)VAR_7 + VAR_4->NodeDescriptorSize);
        }
    }

    return VAR_2;
}
