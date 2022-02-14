
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {char* szPname; } ;
typedef TYPE_1__ MIDIOUTCAPS ;
typedef char* HMIDIOUT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char**,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;

int FUNC_5()
{
    UINT VAR_2 = FUNC_1();


    MIDIOUTCAPS VAR_3;


    int VAR_4;

    HMIDIOUT VAR_5 = ((void*)0);
    UINT VAR_6;

    FUNC_4("MIDI output devices: %d\n", VAR_2);

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 ++)
    {
        if (FUNC_0(VAR_4, &VAR_3, sizeof(MIDIOUTCAPS)) == VAR_1)
            FUNC_4("Device #%d: %s\n", VAR_4, VAR_3.szPname);
    }

    FUNC_4("Opening MIDI output #0\n");

    VAR_6 = FUNC_2(&VAR_5, 0, 0, 0, VAR_0);
    FUNC_4("Result == %d Handle == %p\n", VAR_6, VAR_5);


    FUNC_3(VAR_5, 0x007f3090);
    return 0;
}
