
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltDecimalFormatPtr ;
struct TYPE_4__ {struct TYPE_4__* name; struct TYPE_4__* noNumber; struct TYPE_4__* infinity; struct TYPE_4__* minusSign; struct TYPE_4__* zeroDigit; struct TYPE_4__* permille; struct TYPE_4__* percent; struct TYPE_4__* grouping; struct TYPE_4__* decimalPoint; struct TYPE_4__* patternSeparator; struct TYPE_4__* digit; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(xsltDecimalFormatPtr VAR_0)
{
    if (VAR_0 != ((void*)0)) {
 if (VAR_0->digit)
     FUNC_0(VAR_0->digit);
 if (VAR_0->patternSeparator)
     FUNC_0(VAR_0->patternSeparator);
 if (VAR_0->decimalPoint)
     FUNC_0(VAR_0->decimalPoint);
 if (VAR_0->grouping)
     FUNC_0(VAR_0->grouping);
 if (VAR_0->percent)
     FUNC_0(VAR_0->percent);
 if (VAR_0->permille)
     FUNC_0(VAR_0->permille);
 if (VAR_0->zeroDigit)
     FUNC_0(VAR_0->zeroDigit);
 if (VAR_0->minusSign)
     FUNC_0(VAR_0->minusSign);
 if (VAR_0->infinity)
     FUNC_0(VAR_0->infinity);
 if (VAR_0->noNumber)
     FUNC_0(VAR_0->noNumber);
 if (VAR_0->name)
     FUNC_0(VAR_0->name);
 FUNC_0(VAR_0);
    }
}
