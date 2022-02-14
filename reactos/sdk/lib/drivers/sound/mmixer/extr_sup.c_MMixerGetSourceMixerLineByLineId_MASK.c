
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int dwLineID; } ;
struct TYPE_13__ {TYPE_1__ Line; } ;
struct TYPE_11__ {struct TYPE_11__* Flink; } ;
struct TYPE_12__ {TYPE_2__ LineList; } ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef TYPE_3__* LPMIXER_INFO ;
typedef TYPE_4__* LPMIXERLINE_EXT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_1 (char*,int ,int ,TYPE_4__*) ;
 int VAR_0 ;

LPMIXERLINE_EXT
FUNC_2(
    LPMIXER_INFO VAR_1,
    DWORD VAR_2)
{
    PLIST_ENTRY VAR_3;
    LPMIXERLINE_EXT VAR_4;


    VAR_3 = VAR_1->LineList.Flink;

    while(VAR_3 != &VAR_1->LineList)
    {
        VAR_4 = (LPMIXERLINE_EXT)FUNC_0(VAR_3, VAR_0, VAR_3);
        FUNC_1("dwLineID %x dwLineID %x MixerLineSrc %p\n", VAR_4->Line.dwLineID, VAR_2, VAR_4);
        if (VAR_4->Line.dwLineID == VAR_2)
            return VAR_4;

        VAR_3 = VAR_3->Flink;
    }

    return ((void*)0);
}
