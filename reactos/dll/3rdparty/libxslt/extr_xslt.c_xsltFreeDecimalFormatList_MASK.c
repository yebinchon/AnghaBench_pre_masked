
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltDecimalFormatPtr ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* decimalFormat; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(xsltStylesheetPtr VAR_0)
{
    xsltDecimalFormatPtr VAR_1;
    xsltDecimalFormatPtr VAR_2;

    if (VAR_0 == ((void*)0))
 return;

    VAR_1 = VAR_0->decimalFormat;
    while (VAR_1 != ((void*)0)) {
 VAR_2 = VAR_1->next;
 FUNC_0(VAR_1);
 VAR_1 = VAR_2;
    }
}
