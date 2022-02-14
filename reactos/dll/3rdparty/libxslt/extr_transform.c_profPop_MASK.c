
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
struct TYPE_3__ {int profNr; long prof; long* profTab; } ;



__attribute__((used)) static long
FUNC_0(xsltTransformContextPtr VAR_0)
{
    long VAR_1;

    if (VAR_0->profNr <= 0)
        return (0);
    VAR_0->profNr--;
    if (VAR_0->profNr > 0)
        VAR_0->prof = VAR_0->profTab[VAR_0->profNr - 1];
    else
        VAR_0->prof = (long) 0;
    VAR_1 = VAR_0->profTab[VAR_0->profNr];
    VAR_0->profTab[VAR_0->profNr] = 0;
    return (VAR_1);
}
