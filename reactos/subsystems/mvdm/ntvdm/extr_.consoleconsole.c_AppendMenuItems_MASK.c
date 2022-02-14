
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ uID; scalar_t__ uCmdID; struct TYPE_3__* SubMenu; } ;
typedef TYPE_1__ VDM_MENUITEM ;
typedef scalar_t__ UINT_PTR ;
typedef size_t UINT ;
typedef int * HMENU ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,scalar_t__,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,size_t,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static VOID
FUNC_6(HMENU VAR_3,
                const VDM_MENUITEM *VAR_4)
{
    UINT VAR_5 = 0;
    WCHAR VAR_6[256];
    HMENU VAR_7;

    do
    {
        if (VAR_4[VAR_5].uID != (UINT)-1)
        {
            if (FUNC_5(FUNC_4(((void*)0)),
                            VAR_4[VAR_5].uID,
                            VAR_6,
                            FUNC_0(VAR_6)) > 0)
            {
                if (VAR_4[VAR_5].SubMenu != ((void*)0))
                {
                    VAR_7 = FUNC_2();
                    if (VAR_7 != ((void*)0))
                    {
                        FUNC_6(VAR_7, VAR_4[VAR_5].SubMenu);

                        if (!FUNC_1(VAR_3,
                                         VAR_2 | VAR_0,
                                         (UINT_PTR)VAR_7,
                                         VAR_6))
                        {
                            FUNC_3(VAR_7);
                        }
                    }
                }
                else
                {
                    FUNC_1(VAR_3,
                                VAR_2,
                                VAR_4[VAR_5].uCmdID,
                                VAR_6);
                }
            }
        }
        else
        {
            FUNC_1(VAR_3,
                        VAR_1,
                        0,
                        ((void*)0));
        }
        VAR_5++;
    } while (!(VAR_4[VAR_5].uID == 0 && VAR_4[VAR_5].SubMenu == ((void*)0) && VAR_4[VAR_5].uCmdID == 0));
}
