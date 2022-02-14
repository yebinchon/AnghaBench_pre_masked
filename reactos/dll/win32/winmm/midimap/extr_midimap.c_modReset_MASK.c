
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {TYPE_1__** ChannelMap; } ;
struct TYPE_5__ {scalar_t__ loaded; int hMidi; } ;
typedef TYPE_2__ MIDIMAPDATA ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static DWORD FUNC_2(MIDIMAPDATA* VAR_2)
{
    WORD VAR_3;
    DWORD VAR_4 = VAR_1;

    if (FUNC_0(VAR_2))
 return VAR_0;

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    {
 if (VAR_2->ChannelMap[VAR_3] && VAR_2->ChannelMap[VAR_3]->loaded > 0)
 {
     VAR_4 = FUNC_1(VAR_2->ChannelMap[VAR_3]->hMidi);
     if (VAR_4 != VAR_1) break;
 }
    }
    return VAR_4;
}
