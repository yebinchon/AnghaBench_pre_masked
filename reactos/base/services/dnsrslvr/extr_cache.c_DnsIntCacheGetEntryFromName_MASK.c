
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_10__ {TYPE_2__ RecordList; } ;
struct TYPE_9__ {int pName; } ;
struct TYPE_7__ {TYPE_3__* Record; } ;
typedef TYPE_1__* PRESOLVER_CACHE_ENTRY ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int * PDNS_RECORDW ;
typedef int LPCWSTR ;
typedef int BOOL ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int **) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int * FUNC_4 (TYPE_3__*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int ) ;

BOOL
FUNC_6(LPCWSTR VAR_6,
                            PDNS_RECORDW *VAR_7)
{
    BOOL VAR_8 = VAR_3;
    PRESOLVER_CACHE_ENTRY VAR_9;
    PLIST_ENTRY VAR_10;

    FUNC_1("DnsIntCacheGetEntryFromName %ws %p\n", VAR_6, VAR_7);


    *VAR_7 = ((void*)0);


    FUNC_2();


    VAR_10 = VAR_1.RecordList.Flink;
    while (VAR_10 != &VAR_1.RecordList)
    {

        VAR_9 = FUNC_0(VAR_10, VAR_4, VAR_0);


        if (FUNC_5(VAR_9->Record->pName, VAR_6) == 0)
        {

            *VAR_7 = FUNC_4(VAR_9->Record, VAR_2, VAR_2);
            VAR_8 = VAR_5;
            break;
        }

        VAR_10 = VAR_10->Flink;
    }


    FUNC_3();


    return VAR_8;
}
