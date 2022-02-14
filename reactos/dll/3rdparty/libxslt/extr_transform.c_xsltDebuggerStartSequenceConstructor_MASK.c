
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltTemplatePtr ;
typedef int * xmlNodePtr ;
struct TYPE_9__ {int * elem; } ;
struct TYPE_8__ {int debugStatus; int * inst; } ;


 int VAR_0 ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static xmlNodePtr
FUNC_3(xsltTransformContextPtr VAR_1,
         xmlNodePtr VAR_2,
         xmlNodePtr VAR_3,
         xsltTemplatePtr VAR_4,
         int *VAR_5)
{
    xmlNodePtr VAR_6 = ((void*)0);

    if (VAR_1->debugStatus != VAR_0) {
        if (VAR_4) {
            *VAR_5 = FUNC_0(VAR_4, VAR_4->elem);
        } else {
            *VAR_5 = FUNC_0(((void*)0), VAR_3);
        }
        switch (VAR_1->debugStatus) {
            case 128:
            case 129:
                if (*VAR_5)
                    FUNC_1();
                return(((void*)0));
        }
        if (VAR_4) {
            FUNC_2(VAR_4->elem, VAR_2, VAR_4, VAR_1);
            VAR_6 = VAR_4->elem;
        } else if (VAR_3) {
            FUNC_2(VAR_3, VAR_2, VAR_4, VAR_1);
            VAR_6 = VAR_3;
        } else if (VAR_1->inst) {
            FUNC_2(VAR_1->inst, VAR_2, VAR_4, VAR_1);
            VAR_6 = VAR_1->inst;
        }
    }
    return(VAR_6);
}
