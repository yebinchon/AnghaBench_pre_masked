
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_6__ {size_t CollectionNumber; } ;
struct TYPE_5__ {size_t CollectionDescLength; TYPE_2__* CollectionDesc; } ;
typedef TYPE_1__* PHIDP_DEVICE_DESC ;
typedef TYPE_2__* PHIDP_COLLECTION_DESC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_0 ;

PHIDP_COLLECTION_DESC
FUNC_2(
    PHIDP_DEVICE_DESC VAR_1,
    ULONG VAR_2)
{
    ULONG VAR_3;

    for(VAR_3 = 0; VAR_3 < VAR_1->CollectionDescLength; VAR_3++)
    {
        if (VAR_1->CollectionDesc[VAR_3].CollectionNumber == VAR_2)
        {



            return &VAR_1->CollectionDesc[VAR_3];
        }
    }




    FUNC_1("[HIDCLASS] GetCollectionDescription CollectionNumber %x not found\n", VAR_2);
    FUNC_0(VAR_0);
    return ((void*)0);
}
