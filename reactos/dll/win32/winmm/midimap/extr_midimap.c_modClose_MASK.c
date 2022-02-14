
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {TYPE_1__** ChannelMap; } ;
struct TYPE_6__ {scalar_t__ loaded; scalar_t__ hMidi; } ;
typedef TYPE_2__ MIDIMAPDATA ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static DWORD FUNC_4(MIDIMAPDATA* VAR_2)
{
    UINT VAR_3;
    DWORD VAR_4 = VAR_1;

    if (FUNC_2(VAR_2)) return VAR_0;

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    {
 DWORD VAR_5;
 if (VAR_2->ChannelMap[VAR_3] && VAR_2->ChannelMap[VAR_3]->loaded > 0)
 {
     VAR_5 = FUNC_3(VAR_2->ChannelMap[VAR_3]->hMidi);
     if (VAR_5 == VAR_1)
     {
  VAR_2->ChannelMap[VAR_3]->loaded = 0;
  VAR_2->ChannelMap[VAR_3]->hMidi = 0;
     }
     else if (VAR_4 == VAR_1)
  VAR_4 = VAR_5;
 }
    }
    if (VAR_4 == VAR_1)
 FUNC_1(FUNC_0(), 0, VAR_2);
    return VAR_4;
}
