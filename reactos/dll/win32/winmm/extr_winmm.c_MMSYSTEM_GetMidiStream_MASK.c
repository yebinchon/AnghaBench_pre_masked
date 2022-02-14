
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WINE_MIDIStream ;
struct TYPE_6__ {scalar_t__ dwStreamID; } ;
struct TYPE_7__ {TYPE_1__ rgIds; } ;
struct TYPE_8__ {TYPE_2__ mod; } ;
typedef TYPE_3__ WINE_MIDI ;
typedef scalar_t__ ULONG_PTR ;
typedef TYPE_3__* LPWINE_MIDI ;
typedef int HMIDISTRM ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(HMIDISTRM VAR_2, WINE_MIDIStream** VAR_3, WINE_MIDI** VAR_4)
{
    WINE_MIDI* VAR_5 = (LPWINE_MIDI)FUNC_0(VAR_2, VAR_1, VAR_0);

    if (VAR_4)
 *VAR_4 = VAR_5;

    if (VAR_5 == ((void*)0)) {
 return VAR_0;
    }

    *VAR_3 = (WINE_MIDIStream*)(ULONG_PTR)VAR_5->mod.rgIds.dwStreamID;

    return *VAR_3 != ((void*)0);
}
