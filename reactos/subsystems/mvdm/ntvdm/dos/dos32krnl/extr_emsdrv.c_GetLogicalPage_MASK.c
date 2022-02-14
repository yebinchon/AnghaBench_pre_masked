
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_6__ {struct TYPE_6__* Flink; } ;
struct TYPE_7__ {TYPE_1__ PageList; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef int * PEMS_PAGE ;
typedef TYPE_2__* PEMS_HANDLE ;


 int FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static PEMS_PAGE FUNC_1(PEMS_HANDLE VAR_1, USHORT VAR_2)
{
    PLIST_ENTRY VAR_3 = VAR_1->PageList.Flink;

    while (VAR_2)
    {
        if (VAR_3 == &VAR_1->PageList) return ((void*)0);
        VAR_2--;
        VAR_3 = VAR_3->Flink;
    }

    return (PEMS_PAGE)FUNC_0(VAR_3, VAR_0, VAR_3);
}
