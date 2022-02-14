
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* ULONG ;
struct TYPE_6__ {int Length; int RegionListEntry; void* Protect; void* Type; } ;
typedef int SIZE_T ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PMM_REGION ;
typedef int (* PMM_ALTER_REGION_FUNC ) (int ,scalar_t__,int,void*,void*,void*,void*) ;
typedef int PMMSUPPORT ;
typedef int MM_REGION ;


 TYPE_1__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static PMM_REGION
FUNC_5(PMM_REGION VAR_2, PVOID VAR_3,
              PVOID VAR_4, SIZE_T VAR_5, ULONG VAR_6,
              ULONG VAR_7, PMMSUPPORT VAR_8,
              PMM_ALTER_REGION_FUNC VAR_9)
{
    PMM_REGION VAR_10;
    PMM_REGION VAR_11;
    SIZE_T VAR_12;


    VAR_11 = FUNC_0(VAR_0, sizeof(MM_REGION),
                                       VAR_1);
    if (VAR_11 == ((void*)0))
    {
        return(((void*)0));
    }


    VAR_10 = FUNC_0(VAR_0, sizeof(MM_REGION),
                                       VAR_1);
    if (VAR_10 == ((void*)0))
    {
        FUNC_1(VAR_11, VAR_1);
        return(((void*)0));
    }
    VAR_10->Type = VAR_6;
    VAR_10->Protect = VAR_7;
    VAR_12 = ((char*)VAR_3 + VAR_2->Length) - (char*)VAR_4;
    VAR_12 = FUNC_4(VAR_12, VAR_5);
    VAR_10->Length = VAR_12;
    FUNC_2(&VAR_2->RegionListEntry,
                     &VAR_10->RegionListEntry);





    VAR_9(VAR_8, VAR_4, VAR_12, VAR_2->Type,
              VAR_2->Protect, VAR_6, VAR_7);





    if (((char*)VAR_3 + VAR_2->Length) > ((char*)VAR_4 + VAR_5))
    {
        VAR_11->Type = VAR_2->Type;
        VAR_11->Protect = VAR_2->Protect;
        VAR_11->Length = ((char*)VAR_3 + VAR_2->Length) -
                             ((char*)VAR_4 + VAR_5);
        FUNC_2(&VAR_10->RegionListEntry,
                         &VAR_11->RegionListEntry);
    }
    else
    {
        FUNC_1(VAR_11, VAR_1);
    }


    if (VAR_3 == VAR_4)
    {
        FUNC_3(&VAR_2->RegionListEntry);
        FUNC_1(VAR_2, VAR_1);
    }
    else
    {
        VAR_2->Length = (char*)VAR_4 - (char*)VAR_3;
    }

    return(VAR_10);
}
