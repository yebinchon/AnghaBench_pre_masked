
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int hBrowseTV; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef int * HTREEITEM ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *) ;

__attribute__((used)) static VOID
FUNC_5(PMAIN_WND_INFO VAR_1,
                 HTREEITEM VAR_2)
{
    while (FUNC_1(VAR_1, VAR_2))
    {
        HTREEITEM VAR_3;

        FUNC_0(VAR_1, VAR_2);

        VAR_3 = FUNC_2(VAR_1->hBrowseTV,
                                       VAR_2);

        FUNC_5(VAR_1,
                         VAR_3);

        VAR_2 = FUNC_3(VAR_1->hBrowseTV,
                                        VAR_2);
    }

    if (VAR_2)
    {

        while (VAR_0)
        {
            HTREEITEM VAR_4;

            FUNC_0(VAR_1, VAR_2);
            VAR_4 = VAR_2;
            VAR_2 = FUNC_3(VAR_1->hBrowseTV,
                                            VAR_2);
            if (VAR_2 == ((void*)0))
            {
                VAR_2 = VAR_4;
                break;
            }
        }

        VAR_2 = FUNC_4(VAR_1->hBrowseTV,
                                   VAR_2);
    }
}
