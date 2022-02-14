
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwTimeDiv; scalar_t__ dwTempo; } ;
typedef TYPE_1__ WINE_MIDIStream ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static DWORD FUNC_3(WINE_MIDIStream* VAR_0, DWORD VAR_1)
{
    DWORD VAR_2 = 0;

    if (VAR_0->dwTimeDiv == 0) {
 FUNC_0("Shouldn't happen. lpMidiStrm->dwTimeDiv = 0\n");
    } else if (VAR_0->dwTimeDiv > 0x8000) {
 int VAR_3 = -(char)FUNC_1(VAR_0->dwTimeDiv);
 int VAR_4 = FUNC_2(VAR_0->dwTimeDiv);
 VAR_2 = (VAR_1 * 1000) / (VAR_3 * VAR_4);
    } else {
 VAR_2 = (DWORD)((double)VAR_1 * ((double)VAR_0->dwTempo / 1000) /
        (double)VAR_0->dwTimeDiv);
    }

    return VAR_2;
}
