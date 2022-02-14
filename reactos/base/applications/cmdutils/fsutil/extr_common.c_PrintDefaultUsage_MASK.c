
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* Desc; int const* Command; } ;
typedef int TCHAR ;
typedef TYPE_1__ HandlerItem ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int const*,...) ;
 int VAR_0 ;

void FUNC_2(const TCHAR * VAR_1,
                       const TCHAR * VAR_2,
                       HandlerItem * VAR_3,
                       int VAR_4)
{
    int VAR_5;


    if (VAR_2 != ((void*)0))
    {
        FUNC_1(VAR_0, FUNC_0("Unhandled%scommand: %s\n"), VAR_1, VAR_2);
    }


    FUNC_1(VAR_0, FUNC_0("---- Handled%scommands ----\n\n"), VAR_1);
    for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
    {
        FUNC_1(VAR_0, FUNC_0("%s\t%s\n"), VAR_3[VAR_5].Command, VAR_3[VAR_5].Desc);
    }
}
