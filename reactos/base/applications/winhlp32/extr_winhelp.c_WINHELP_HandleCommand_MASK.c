
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ofsFilename; int command; int data; int size; } ;
typedef TYPE_1__ WINHELP ;
struct TYPE_4__ {int dwData; TYPE_1__* lpData; } ;
typedef int LRESULT ;
typedef int LPSTR ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef TYPE_2__ COPYDATASTRUCT ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ,int,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;

__attribute__((used)) static LRESULT FUNC_11(HWND VAR_0, LPARAM VAR_1)
{
    COPYDATASTRUCT* VAR_2 = (COPYDATASTRUCT*)VAR_1;
    WINHELP* VAR_3;

    if (VAR_2->dwData != 0xA1DE505)
    {
        FUNC_7("Wrong magic number (%08lx)\n", VAR_2->dwData);
        return 0;
    }

    VAR_3 = VAR_2->lpData;

    if (VAR_3)
    {
        char* VAR_4 = (VAR_3->ofsFilename) ? (LPSTR)VAR_3 + VAR_3->ofsFilename : ((void*)0);

        FUNC_8("Got[%u]: cmd=%u data=%08x fn=%s\n",
                   VAR_3->size, VAR_3->command, VAR_3->data, FUNC_10(VAR_4));
        switch (VAR_3->command)
        {
        case 133:
            if (VAR_4)
            {
                FUNC_3(VAR_4, "main", VAR_3->data);
            }
            if (!FUNC_9()) FUNC_0();
            break;
        case 129:
            FUNC_0();
            break;
        case 134:
            if (VAR_4)
            {
                FUNC_2(VAR_4, "main");
            }
            if (!FUNC_9()) FUNC_0();
            break;
        case 130:
            FUNC_1();
            if (!FUNC_9()) FUNC_0();
            break;

        case 128:
            if (VAR_4)
            {
                FUNC_6(VAR_4, VAR_3->data);
            }
            break;
        case 132:
            if (VAR_4)
            {
                FUNC_5(VAR_4, VAR_3->data);
            }
            break;


        case 131:

            FUNC_7("HELP_FINDER: stub\n");
            if (VAR_4)
            {
                FUNC_4(VAR_4, "main", 0);
            }
            break;







        default:
            FUNC_7("Unhandled command (%x) for remote winhelp control\n", VAR_3->command);
            break;
        }
    }

    return 1;
}
