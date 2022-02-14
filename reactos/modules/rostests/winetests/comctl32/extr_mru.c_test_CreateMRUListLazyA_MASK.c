
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ret; int mruA; } ;
typedef TYPE_1__ create_lazya_t ;
typedef int MRUINFOA ;
typedef int * HANDLE ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,char*,int,int *) ;
 int * FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    int VAR_1;

    if (!&FUNC_2 || !&FUNC_3)
    {
        FUNC_4("CreateMRUListLazyA or FreeMRUList entry points not found\n");
        return;
    }

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
    {
        const create_lazya_t *VAR_2 = &VAR_0[VAR_1];
        HANDLE VAR_3;

        VAR_3 = FUNC_2((MRUINFOA*)&VAR_2->mruA, 0, 0, 0);
        if (VAR_2->ret)
        {
            FUNC_1(VAR_3 != ((void*)0), "%d: got %p\n", VAR_1, VAR_3);
            FUNC_3(VAR_3);
        }
        else
            FUNC_1(VAR_3 == ((void*)0), "%d: got %p\n", VAR_1, VAR_3);
    }
}
