
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int USHORT ;
typedef int PCONFIGURATION_COMPONENT_DATA ;
typedef int CHAR ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int,int,int,int *,int *,int ,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static VOID
FUNC_6(PCONFIGURATION_COMPONENT_DATA VAR_2)
{
    CHAR VAR_3[80];
    PCONFIGURATION_COMPONENT_DATA VAR_4;
    USHORT VAR_5;



    VAR_5 = FUNC_1();
    if (VAR_5 != 0)
    {
        FUNC_4("VESA version %c.%c\n",
              (VAR_5 >> 8) + '0',
              (VAR_5 & 0xFF) + '0');
    }
    else
    {
        FUNC_4("VESA not supported\n");
    }

    if (VAR_5 >= 0x0200)
    {
        FUNC_5(VAR_3, "VBE Display");
    }
    else
    {
        FUNC_5(VAR_3, "VGA Display");
    }

    FUNC_3(VAR_2,
                           VAR_0,
                           VAR_1,
                           0x0,
                           0x0,
                           0xFFFFFFFF,
                           VAR_3,
                           ((void*)0),
                           0,
                           &VAR_4);
    FUNC_4("Created key: DisplayController\\0\n");


    if (VAR_5 != 0)
    {
        if (FUNC_0())
        {
            FUNC_4("VESA/DDC supported!\n");
            if (FUNC_2())
            {
                FUNC_4("EDID data read successfully!\n");

            }
        }
    }
}
