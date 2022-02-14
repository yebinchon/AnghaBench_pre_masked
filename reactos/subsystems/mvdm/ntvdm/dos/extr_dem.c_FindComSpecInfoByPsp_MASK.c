
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_8__ {scalar_t__ ComSpecPsp; } ;
struct TYPE_7__ {struct TYPE_7__* Flink; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PCOMSPEC_INFO ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static PCOMSPEC_INFO
FUNC_1(WORD VAR_3)
{
    PLIST_ENTRY VAR_4;
    PCOMSPEC_INFO VAR_5;

    for (VAR_4 = VAR_1.Flink; VAR_4 != &VAR_1; VAR_4 = VAR_4->Flink)
    {
        VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_2);
        if (VAR_5->ComSpecPsp == VAR_3) return VAR_5;
    }

    return ((void*)0);
}
