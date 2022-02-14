
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t max_cons; struct TYPE_6__* connections; int * pAdvSink; } ;
typedef TYPE_1__ OleAdviseHolderImpl ;
typedef size_t DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(OleAdviseHolderImpl *VAR_0)
{
    DWORD VAR_1;
    FUNC_2("%p\n", VAR_0);

    for (VAR_1 = 0; VAR_1 < VAR_0->max_cons; VAR_1++)
    {
        if (VAR_0->connections[VAR_1].pAdvSink != ((void*)0))
            FUNC_3(VAR_0->connections + VAR_1);
    }

    FUNC_1(FUNC_0(), 0, VAR_0->connections);
    FUNC_1(FUNC_0(), 0, VAR_0);
}
