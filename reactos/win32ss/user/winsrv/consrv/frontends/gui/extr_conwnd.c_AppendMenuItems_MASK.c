
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
typedef scalar_t__ UINT_PTR ;
typedef size_t UINT ;
struct TYPE_3__ {scalar_t__ uID; scalar_t__ wCmdID; struct TYPE_3__* SubMenu; } ;
typedef int * HMENU ;
typedef TYPE_1__ GUICONSOLE_MENUITEM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,scalar_t__,int *) ;
 int VAR_0 ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,size_t,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static VOID
FUNC_5(HMENU VAR_4,
                const GUICONSOLE_MENUITEM *VAR_5)
{
    UINT VAR_6 = 0;
    WCHAR VAR_7[255];
    HMENU VAR_8;

    do
    {
        if (VAR_5[VAR_6].uID != (UINT)-1)
        {
            if (FUNC_4(VAR_0,
                            VAR_5[VAR_6].uID,
                            VAR_7,
                            FUNC_0(VAR_7)) > 0)
            {
                if (VAR_5[VAR_6].SubMenu != ((void*)0))
                {
                    VAR_8 = FUNC_2();
                    if (VAR_8 != ((void*)0))
                    {
                        FUNC_5(VAR_8, VAR_5[VAR_6].SubMenu);

                        if (!FUNC_1(VAR_4,
                                         VAR_3 | VAR_1,
                                         (UINT_PTR)VAR_8,
                                         VAR_7))
                        {
                            FUNC_3(VAR_8);
                        }
                    }
                }
                else
                {
                    FUNC_1(VAR_4,
                                VAR_3,
                                VAR_5[VAR_6].wCmdID,
                                VAR_7);
                }
            }
        }
        else
        {
            FUNC_1(VAR_4,
                        VAR_2,
                        0,
                        ((void*)0));
        }
        VAR_6++;
    } while (!(VAR_5[VAR_6].uID == 0 && VAR_5[VAR_6].SubMenu == ((void*)0) && VAR_5[VAR_6].wCmdID == 0));
}
