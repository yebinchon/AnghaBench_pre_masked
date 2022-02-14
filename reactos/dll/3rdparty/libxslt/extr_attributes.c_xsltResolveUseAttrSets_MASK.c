
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* xsltUseAttrSetPtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
typedef TYPE_3__* xsltAttrSetPtr ;
struct TYPE_17__ {TYPE_1__* useAttrSets; } ;
struct TYPE_16__ {scalar_t__ attributeSets; } ;
struct TYPE_15__ {struct TYPE_15__* next; int ns; int ncname; } ;


 TYPE_3__* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(xsltAttrSetPtr VAR_0, xsltStylesheetPtr VAR_1,
         int VAR_2) {
    xsltStylesheetPtr VAR_3;
    xsltAttrSetPtr VAR_4;
    xsltUseAttrSetPtr VAR_5 = VAR_0->useAttrSets;
    xsltUseAttrSetPtr VAR_6;

    while (VAR_5 != ((void*)0)) {



        VAR_3 = VAR_1;
        while (VAR_3 != ((void*)0)) {
            if (VAR_3->attributeSets) {
                VAR_4 = FUNC_0(VAR_3->attributeSets, VAR_5->ncname,
                                       VAR_5->ns);
                if (VAR_4 != ((void*)0)) {
                    FUNC_4(VAR_4, VAR_1, VAR_3, VAR_5->ncname,
                                       VAR_5->ns, VAR_2 + 1);
                    FUNC_2(VAR_0, VAR_4);
                    break;
                }
            }
            VAR_3 = FUNC_3(VAR_3);
        }

        VAR_6 = VAR_5->next;

        FUNC_1(VAR_5);
        VAR_5 = VAR_6;
    }

    VAR_0->useAttrSets = ((void*)0);
}
