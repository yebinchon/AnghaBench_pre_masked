
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
struct TYPE_8__ {TYPE_1__* style; TYPE_1__* topStyle; } ;
typedef TYPE_2__ xsltAttrSetContext ;
struct TYPE_7__ {int * attributeSets; } ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;

void
FUNC_5(xsltStylesheetPtr VAR_2) {
    xsltStylesheetPtr VAR_3;
    xsltAttrSetContext VAR_4;





    VAR_4.topStyle = VAR_2;
    VAR_3 = VAR_2;
    while (VAR_3 != ((void*)0)) {
 if (VAR_3->attributeSets != ((void*)0)) {
     if (VAR_2->attributeSets == ((void*)0)) {




  VAR_2->attributeSets = FUNC_0(10);
     }
            VAR_4.style = VAR_3;
     FUNC_2(VAR_3->attributeSets, VAR_1,
                            &VAR_4);

            if (VAR_3 != VAR_2) {




                FUNC_1(VAR_3->attributeSets, ((void*)0));
                VAR_3->attributeSets = ((void*)0);
            }
 }
 VAR_3 = FUNC_4(VAR_3);
    }
}
