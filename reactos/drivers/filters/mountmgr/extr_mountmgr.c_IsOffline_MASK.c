
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_7__ {int Buffer; } ;
struct TYPE_6__ {scalar_t__* EntryContext; int DefaultLength; scalar_t__* DefaultData; int DefaultType; int Name; int Flags; } ;
typedef TYPE_1__ RTL_QUERY_REGISTRY_TABLE ;
typedef int QueryTable ;
typedef TYPE_2__* PUNICODE_STRING ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

BOOLEAN
FUNC_3(PUNICODE_STRING VAR_4)
{
    NTSTATUS VAR_5;
    ULONG VAR_6, VAR_7;
    RTL_QUERY_REGISTRY_TABLE VAR_8[2];




    FUNC_2(VAR_8, sizeof(VAR_8));
    VAR_8[0].Flags = VAR_2;
    VAR_8[0].Name = VAR_4->Buffer;
    VAR_8[0].EntryContext = &VAR_6;
    VAR_8[0].DefaultType = VAR_1;
    VAR_8[0].DefaultLength = sizeof(ULONG);
    VAR_8[0].DefaultData = &VAR_7;

    VAR_7 = 0;


    VAR_5 = FUNC_1(VAR_3,
                                    VAR_0,
                                    VAR_8,
                                    ((void*)0),
                                    ((void*)0));
    if (!FUNC_0(VAR_5))
    {
        VAR_6 = 0;
    }

    return (VAR_6 != 0);
}
