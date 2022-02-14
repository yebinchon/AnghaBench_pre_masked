
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_6__ {TYPE_1__** ChannelMap; } ;
struct TYPE_5__ {int loaded; int* aChn; int* lpbPatch; int hMidi; int uDevID; } ;
typedef TYPE_2__ MIDIMAPDATA ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,long,long,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static DWORD FUNC_7(MIDIMAPDATA* VAR_3, DWORD_PTR VAR_4)
{
    BYTE VAR_5 = FUNC_2(FUNC_3(VAR_4));
    WORD VAR_6 = VAR_5 & 0x0F;
    DWORD VAR_7 = VAR_2;

    if (FUNC_4(VAR_3))
 return VAR_1;

    if (!VAR_3->ChannelMap[VAR_6]) return VAR_2;

    switch (VAR_5 & 0xF0)
    {
    case 0x80:
    case 0x90:
    case 0xA0:
    case 0xB0:
    case 0xC0:
    case 0xD0:
    case 0xE0:
 if (VAR_3->ChannelMap[VAR_6]->loaded == 0)
 {
     if (FUNC_5(&VAR_3->ChannelMap[VAR_6]->hMidi, VAR_3->ChannelMap[VAR_6]->uDevID,
       0L, 0L, VAR_0) == VAR_2)
  VAR_3->ChannelMap[VAR_6]->loaded = 1;
     else
  VAR_3->ChannelMap[VAR_6]->loaded = -1;



 }
 if (VAR_3->ChannelMap[VAR_6]->loaded > 0)
 {

     VAR_4 &= ~0x0F;
     VAR_4 |= VAR_3->ChannelMap[VAR_6]->aChn[VAR_6];

     if ((FUNC_2(FUNC_3(VAR_4)) & 0xF0) == 0xC0 &&
  VAR_3->ChannelMap[VAR_6]->lpbPatch)
     {
  BYTE VAR_8 = FUNC_1(FUNC_3(VAR_4));


  VAR_4 &= ~0x0000FF00;
  VAR_4 |= VAR_3->ChannelMap[VAR_6]->lpbPatch[VAR_8];
     }
     VAR_7 = FUNC_6(VAR_3->ChannelMap[VAR_6]->hMidi, VAR_4);
 }
 break;
    case 0xF0:
 for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
 {
     if (VAR_3->ChannelMap[VAR_6]->loaded > 0)
  VAR_7 = FUNC_6(VAR_3->ChannelMap[VAR_6]->hMidi, VAR_4);
 }
 break;
    default:
 FUNC_0("ooch %lu\n", VAR_4);
    }

    return VAR_7;
}
