
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dwComponentType; } ;
struct TYPE_12__ {TYPE_1__ Line; } ;
struct TYPE_10__ {struct TYPE_10__* Flink; } ;
struct TYPE_11__ {TYPE_2__ LineList; } ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef TYPE_3__* LPMIXER_INFO ;
typedef TYPE_4__* LPMIXERLINE_EXT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 int VAR_0 ;

LPMIXERLINE_EXT
FUNC_1(
    LPMIXER_INFO VAR_1,
    DWORD VAR_2)
{
    PLIST_ENTRY VAR_3;
    LPMIXERLINE_EXT VAR_4;


    VAR_3 = VAR_1->LineList.Flink;

    while(VAR_3 != &VAR_1->LineList)
    {
        VAR_4 = (LPMIXERLINE_EXT)FUNC_0(VAR_3, VAR_0, VAR_3);
        if (VAR_4->Line.dwComponentType == VAR_2)
            return VAR_4;

        VAR_3 = VAR_3->Flink;
    }

    return ((void*)0);
}
