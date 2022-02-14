
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbg_vlog; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(void)
{
    char *VAR_5;
    DWORD VAR_6;

    DWORD VAR_7 = FUNC_1();

    if (VAR_2 != -1) return;
    VAR_2 = 0;

    VAR_6 = FUNC_0("DEBUGCHANNEL", ((void*)0), 0);
    if (VAR_6)
    {
        VAR_5 = FUNC_4(VAR_6);
        if (VAR_5)
        {
            if (FUNC_0("DEBUGCHANNEL", VAR_5, VAR_6) < VAR_6)
                FUNC_5(VAR_5);
            FUNC_3(VAR_5);
        }
    }

    VAR_6 = FUNC_0("DEBUGFORMAT", ((void*)0), 0);
    if (VAR_6)
    {
        VAR_5 = FUNC_4(VAR_6);
        if (VAR_5)
        {
            if (FUNC_0("DEBUGFORMAT", VAR_5, VAR_6) < VAR_6)
            {
                if (FUNC_6(VAR_5, "wine") == 0)
                {
                    VAR_1.dbg_vlog = VAR_4;
                }
                else
                if (FUNC_6(VAR_5, "extended") == 0 ||
                    FUNC_6(VAR_5, "ext") == 0)
                {
                    VAR_1.dbg_vlog = VAR_0;
                }
                else
                {
                    VAR_1.dbg_vlog = VAR_3;
                }
            }
            FUNC_3(VAR_5);
        }
    }

    FUNC_2(VAR_7);
}
