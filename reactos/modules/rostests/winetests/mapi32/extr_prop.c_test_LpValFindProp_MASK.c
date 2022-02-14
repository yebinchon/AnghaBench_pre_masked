
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {int ulPropTag; } ;
typedef TYPE_1__ SPropValue ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,int ) ;
 TYPE_1__* FUNC_3 (int ,unsigned int,TYPE_1__*) ;
 int * VAR_1 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    SPropValue VAR_2, *VAR_3;
    ULONG VAR_4;

    if (!&FUNC_3)
    {
        FUNC_4("LpValFindProp is not available\n");
        return;
    }

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
    {
        VAR_2.ulPropTag = FUNC_1(VAR_1[VAR_4], 1u);

        VAR_3 = FUNC_3(FUNC_1(VAR_1[VAR_4], 1u), 1u, &VAR_2);
        FUNC_2(VAR_3 == &VAR_2,
           "LpValFindProp[%d]: Didn't find existing property id/type\n",
           VAR_1[VAR_4]);

        VAR_3 = FUNC_3(FUNC_1(VAR_1[VAR_4], 0u), 1u, &VAR_2);
        FUNC_2(VAR_3 == ((void*)0), "LpValFindProp[%d]: Found nonexistent property id\n",
           VAR_1[VAR_4]);

        VAR_3 = FUNC_3(FUNC_1(VAR_0, 0u), 1u, &VAR_2);
        FUNC_2(VAR_3 == ((void*)0), "LpValFindProp[%d]: Found nonexistent property id/type\n",
           VAR_1[VAR_4]);

        VAR_3 = FUNC_3(FUNC_1(VAR_0, 1u), 1u, &VAR_2);
        FUNC_2(VAR_3 == &VAR_2,
           "LpValFindProp[%d]: Didn't find existing property id\n",
           VAR_1[VAR_4]);
    }
}
