
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_8__ {struct TYPE_8__* Flink; } ;
typedef scalar_t__* PULONG ;
typedef int PMM_SECTION_SEGMENT ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;

NTSTATUS
FUNC_6(ULONG VAR_4,
               ULONG VAR_5,
               PULONG VAR_6)
{
    ULONG VAR_7;
    PLIST_ENTRY VAR_8;
    PMM_SECTION_SEGMENT VAR_9;
    *VAR_6 = 0;

    FUNC_1("Need to trim %lu cache pages\n", VAR_4);
    for (VAR_8 = VAR_2.Flink;
         *VAR_6 < VAR_4 && VAR_8 != &VAR_2;
         VAR_8 = VAR_8->Flink) {
        VAR_9 = FUNC_0(VAR_8, VAR_1, VAR_0);

        VAR_7 = FUNC_4(VAR_9, VAR_4);
        *VAR_6 += VAR_7;
    }
    FUNC_1("Evicted %lu cache pages\n", VAR_4);

    if (!FUNC_3(&VAR_2)) {
        VAR_8 = VAR_2.Flink;
        FUNC_5(VAR_8);
        FUNC_2(&VAR_2, VAR_8);
    }

    return VAR_3;
}
