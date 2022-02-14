
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* Flink; } ;
struct TYPE_11__ {TYPE_3__ RecordList; } ;
struct TYPE_9__ {TYPE_1__* Record; } ;
struct TYPE_8__ {int pName; } ;
typedef TYPE_2__* PRESOLVER_CACHE_ENTRY ;
typedef TYPE_3__* PLIST_ENTRY ;
typedef int LPCWSTR ;
typedef int BOOL ;


 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,int ) ;

BOOL
FUNC_6(LPCWSTR VAR_5)
{
    BOOL VAR_6 = VAR_2;
    PRESOLVER_CACHE_ENTRY VAR_7;
    PLIST_ENTRY VAR_8;

    FUNC_1("DnsIntCacheRemoveEntryByName %ws\n", VAR_5);


    FUNC_2();


    VAR_8 = VAR_1.RecordList.Flink;
    while (VAR_8 != &VAR_1.RecordList)
    {

        VAR_7 = FUNC_0(VAR_8, VAR_3, VAR_0);


        if (FUNC_5(VAR_7->Record->pName, VAR_5) == 0)
        {

            FUNC_4(VAR_7);
            VAR_6 = VAR_4;
            break;
        }

        VAR_8 = VAR_8->Flink;
    }


    FUNC_3();


    return VAR_6;
}
