
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
struct TYPE_3__ {int profMax; long* profTab; int profNr; long prof; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (long*,int) ;

__attribute__((used)) static int
FUNC_3(xsltTransformContextPtr VAR_1, long VAR_2)
{
    if (VAR_1->profMax == 0) {
        VAR_1->profMax = 4;
        VAR_1->profTab =
            (long *) FUNC_1(VAR_1->profMax * sizeof(VAR_1->profTab[0]));
        if (VAR_1->profTab == ((void*)0)) {
            FUNC_0(VAR_0, "malloc failed !\n");
            return (0);
        }
    }
    else if (VAR_1->profNr >= VAR_1->profMax) {
        VAR_1->profMax *= 2;
        VAR_1->profTab =
            (long *) FUNC_2(VAR_1->profTab,
                                VAR_1->profMax * sizeof(VAR_1->profTab[0]));
        if (VAR_1->profTab == ((void*)0)) {
            FUNC_0(VAR_0, "realloc failed !\n");
            return (0);
        }
    }
    VAR_1->profTab[VAR_1->profNr] = VAR_2;
    VAR_1->prof = VAR_2;
    return (VAR_1->profNr++);
}
