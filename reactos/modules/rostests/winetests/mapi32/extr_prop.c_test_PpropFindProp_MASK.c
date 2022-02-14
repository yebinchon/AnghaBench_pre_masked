
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {void* ulPropTag; } ;
typedef TYPE_1__ SPropValue ;


 size_t FUNC_0 (void**) ;
 void* FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*,...) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,unsigned int,void*) ;
 void** VAR_2 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    SPropValue VAR_3, *VAR_4;
    ULONG VAR_5;

    if (!&FUNC_3)
    {
        FUNC_4("PpropFindProp is not available\n");
        return;
    }

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
    {
        VAR_3.ulPropTag = VAR_2[VAR_5];

        VAR_4 = FUNC_3(&VAR_3, 1u, VAR_2[VAR_5]);
        FUNC_2(VAR_4 == &VAR_3,
           "PpropFindProp[%d]: Didn't find existing property\n",
           VAR_2[VAR_5]);

        VAR_4 = FUNC_3(&VAR_3, 1u, VAR_5 ? VAR_2[VAR_5-1] : VAR_2[VAR_5+1]);
        FUNC_2(VAR_4 == ((void*)0), "PpropFindProp[%d]: Found nonexistent property\n",
           VAR_2[VAR_5]);
    }

    VAR_3.ulPropTag = FUNC_1(VAR_0, 1u);
    VAR_4 = FUNC_3(&VAR_3, 1u, FUNC_1(VAR_1, 0u));
    FUNC_2(VAR_4 == ((void*)0), "PpropFindProp[UNSPECIFIED]: Matched on different id\n");
    VAR_4 = FUNC_3(&VAR_3, 1u, FUNC_1(VAR_1, 1u));
    FUNC_2(VAR_4 == &VAR_3, "PpropFindProp[UNSPECIFIED]: Didn't match id\n");
}
