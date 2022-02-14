
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int mh ;
typedef int WORD ;
struct TYPE_13__ {scalar_t__ dwFlags; } ;
struct TYPE_12__ {TYPE_1__** ChannelMap; } ;
struct TYPE_11__ {scalar_t__ loaded; int hMidi; } ;
typedef TYPE_2__ MIDIMAPDATA ;
typedef TYPE_3__ MIDIHDR ;
typedef TYPE_3__* LPMIDIHDR ;
typedef int DWORD_PTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*,int) ;
 int FUNC_2 (int ,TYPE_3__*,int) ;
 int FUNC_3 (int ,TYPE_3__*,int) ;

__attribute__((used)) static DWORD FUNC_4(MIDIMAPDATA* VAR_2, LPMIDIHDR VAR_3, DWORD_PTR VAR_4)
{
    WORD VAR_5;
    DWORD VAR_6 = VAR_1;
    MIDIHDR VAR_7;

    if (FUNC_0(VAR_2))
 return VAR_0;

    VAR_7 = *VAR_3;
    for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
    {
 if (VAR_2->ChannelMap[VAR_5] && VAR_2->ChannelMap[VAR_5]->loaded > 0)
 {
     VAR_7.dwFlags = 0;
     FUNC_2(VAR_2->ChannelMap[VAR_5]->hMidi, &VAR_7, sizeof(VAR_7));
     VAR_6 = FUNC_1(VAR_2->ChannelMap[VAR_5]->hMidi, &VAR_7, sizeof(VAR_7));
     FUNC_3(VAR_2->ChannelMap[VAR_5]->hMidi, &VAR_7, sizeof(VAR_7));
     if (VAR_6 != VAR_1) break;
 }
    }
    return VAR_6;
}
