
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ bMIDIOutChanged; scalar_t__ bAudioInChanged; scalar_t__ bAudioOutChanged; } ;
typedef TYPE_1__* PGLOBAL_DATA ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,char*) ;

VOID
FUNC_1(HWND VAR_3, PGLOBAL_DATA VAR_4)
{
    if (VAR_4->bAudioOutChanged)
    {
        FUNC_0(VAR_3,
                             VAR_1,
                             L"Software\\Microsoft\\Multimedia\\Sound Mapper",
                             L"Playback");
    }

    if (VAR_4->bAudioInChanged)
    {
        FUNC_0(VAR_3,
                             VAR_2,
                             L"Software\\Microsoft\\Multimedia\\Sound Mapper",
                             L"Record");
    }

    if (VAR_4->bMIDIOutChanged)
    {
        FUNC_0(VAR_3,
                             VAR_0,
                             L"Software\\Microsoft\\Windows\\CurrentVersion\\Multimedia\\MIDIMap",
                             L"szPname");
    }
}
