
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltDecimalFormatPtr ;
typedef int xmlChar ;
struct TYPE_8__ {int name; int nsUri; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_2__* decimalFormat; } ;


 scalar_t__ FUNC_0 (int const*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

xsltDecimalFormatPtr
FUNC_2(xsltStylesheetPtr VAR_0, const xmlChar *VAR_1,
                            const xmlChar *VAR_2)
{
    xsltDecimalFormatPtr VAR_3 = ((void*)0);

    if (VAR_2 == ((void*)0))
 return VAR_0->decimalFormat;

    while (VAR_0 != ((void*)0)) {
 for (VAR_3 = VAR_0->decimalFormat->next;
      VAR_3 != ((void*)0);
      VAR_3 = VAR_3->next) {
     if (FUNC_0(VAR_1, VAR_3->nsUri) &&
                FUNC_0(VAR_2, VAR_3->name))
  return VAR_3;
 }
 VAR_0 = FUNC_1(VAR_0);
    }
    return VAR_3;
}
