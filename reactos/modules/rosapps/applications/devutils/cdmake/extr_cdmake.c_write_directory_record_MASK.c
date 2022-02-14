
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ offset; } ;
struct TYPE_5__ {int year; char month; char day; char hour; char minute; char second; } ;
struct TYPE_6__ {char* joliet_name; char* name_on_cd; char* extension_on_cd; char flags; TYPE_1__ date_and_time; int size; int sector; int joliet_size; int joliet_sector; } ;
typedef TYPE_2__* PDIR_RECORD ;
typedef int DIR_RECORD_TYPE ;
typedef char BYTE ;
typedef scalar_t__ BOOL ;





 scalar_t__ VAR_0 ;

 TYPE_4__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(PDIR_RECORD VAR_2,
                       DIR_RECORD_TYPE VAR_3,
                       BOOL VAR_4)
{
    unsigned VAR_5;
    unsigned VAR_6;

    if (VAR_4)
    {
        if (VAR_3 == 130 || VAR_3 == 131)
            VAR_5 = 1;
        else
            VAR_5 = FUNC_1(VAR_2->joliet_name) * 2;
    }
    else
    {
        switch (VAR_3)
        {
            case 130:
            case 131:
                VAR_5 = 1;
                break;
            case 128:

                VAR_5 = FUNC_1(VAR_2->name_on_cd);
                break;
            case 129:

                VAR_5 = FUNC_1(VAR_2->name_on_cd) + 2;
                if (VAR_2->extension_on_cd[0] != 0)
                    VAR_5 += 1 + FUNC_1(VAR_2->extension_on_cd);
                break;
            default:
                VAR_5 = 1;
                break;
        }
    }
    VAR_6 = 33 + VAR_5;
    if ((VAR_5 & 1) == 0)
        VAR_6++;
    if (VAR_1.offset + VAR_6 > VAR_0)
        FUNC_0();
    FUNC_4((BYTE)VAR_6);
    FUNC_4(0);
    if (VAR_4)
    {
        FUNC_2(VAR_2->joliet_sector);
        FUNC_2(VAR_2->joliet_size);
    }
    else
    {
        FUNC_2(VAR_2->sector);
        FUNC_2(VAR_2->size);
    }
    FUNC_4((BYTE)(VAR_2->date_and_time.year - 1900));
    FUNC_4(VAR_2->date_and_time.month);
    FUNC_4(VAR_2->date_and_time.day);
    FUNC_4(VAR_2->date_and_time.hour);
    FUNC_4(VAR_2->date_and_time.minute);
    FUNC_4(VAR_2->date_and_time.second);
    FUNC_4(0);
    FUNC_4(VAR_2->flags);
    FUNC_4(0);
    FUNC_4(0);
    FUNC_3(1);
    FUNC_4((BYTE)VAR_5);
    switch (VAR_3)
    {
        case 130:
            FUNC_4(0);
            break;
        case 131:
            FUNC_4(1);
            break;
        case 128:
            if (VAR_4)
                FUNC_6(VAR_2->joliet_name);
            else
                FUNC_5(VAR_2->name_on_cd);
            break;
        case 129:
            if (VAR_4)
            {
                FUNC_6(VAR_2->joliet_name);
            }
            else
            {
                FUNC_5(VAR_2->name_on_cd);
                if (VAR_2->extension_on_cd[0] != 0)
                {
                    FUNC_4('.');
                    FUNC_5(VAR_2->extension_on_cd);
                }
                FUNC_5(";1");
            }
            break;
    }
    if ((VAR_5 & 1) == 0)
        FUNC_4(0);
}
