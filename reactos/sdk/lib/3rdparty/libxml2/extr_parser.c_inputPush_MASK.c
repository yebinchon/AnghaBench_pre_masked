
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xmlParserInputPtr ;
typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_4__ {int inputNr; int inputMax; int * input; int ** inputTab; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **,int) ;

int
FUNC_3(xmlParserCtxtPtr VAR_0, xmlParserInputPtr VAR_1)
{
    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
        return(-1);
    if (VAR_0->inputNr >= VAR_0->inputMax) {
        VAR_0->inputMax *= 2;
        VAR_0->inputTab =
            (xmlParserInputPtr *) FUNC_2(VAR_0->inputTab,
                                             VAR_0->inputMax *
                                             sizeof(VAR_0->inputTab[0]));
        if (VAR_0->inputTab == ((void*)0)) {
            FUNC_0(VAR_0, ((void*)0));
     FUNC_1(VAR_1);
     VAR_0->inputMax /= 2;
     VAR_1 = ((void*)0);
            return (-1);
        }
    }
    VAR_0->inputTab[VAR_0->inputNr] = VAR_1;
    VAR_0->input = VAR_1;
    return (VAR_0->inputNr++);
}
