
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int xmlChar ;
struct TYPE_3__ {int exclPrefixMax; int exclPrefixNr; int * exclPrefix; int ** exclPrefixTab; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int **,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(xsltStylesheetPtr VAR_1, xmlChar * VAR_2)
{
    int VAR_3;

    if (VAR_1->exclPrefixMax == 0) {
        VAR_1->exclPrefixMax = 4;
        VAR_1->exclPrefixTab =
            (xmlChar * *)FUNC_1(VAR_1->exclPrefixMax *
                                   sizeof(VAR_1->exclPrefixTab[0]));
        if (VAR_1->exclPrefixTab == ((void*)0)) {
            FUNC_0(VAR_0, "malloc failed !\n");
            return (-1);
        }
    }

    for (VAR_3 = 0;VAR_3 < VAR_1->exclPrefixNr;VAR_3++) {
        if (FUNC_3(VAR_1->exclPrefixTab[VAR_3], VAR_2))
     return(-1);
    }
    if (VAR_1->exclPrefixNr >= VAR_1->exclPrefixMax) {
        VAR_1->exclPrefixMax *= 2;
        VAR_1->exclPrefixTab =
            (xmlChar * *)FUNC_2(VAR_1->exclPrefixTab,
                                    VAR_1->exclPrefixMax *
                                    sizeof(VAR_1->exclPrefixTab[0]));
        if (VAR_1->exclPrefixTab == ((void*)0)) {
            FUNC_0(VAR_0, "realloc failed !\n");
            return (-1);
        }
    }
    VAR_1->exclPrefixTab[VAR_1->exclPrefixNr] = VAR_2;
    VAR_1->exclPrefix = VAR_2;
    return (VAR_1->exclPrefixNr++);
}
