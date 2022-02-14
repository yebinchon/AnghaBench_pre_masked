
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xmlXPathParserContextPtr ;
typedef TYPE_4__* xmlXPathObjectPtr ;
typedef TYPE_5__* xmlNsPtr ;
typedef int xmlChar ;
struct TYPE_23__ {int * href; } ;
struct TYPE_22__ {int stringval; } ;
struct TYPE_21__ {int context; int error; TYPE_1__* value; } ;
struct TYPE_20__ {TYPE_14__* inst; } ;
struct TYPE_19__ {scalar_t__ type; } ;
struct TYPE_18__ {int doc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int ,TYPE_14__*,int *) ;
 int * FUNC_4 (int ,int **) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int * FUNC_10 (TYPE_2__*,int *,int const*) ;
 int FUNC_11 (TYPE_2__*,int *,int *,char*,...) ;
 TYPE_2__* FUNC_12 (TYPE_3__*) ;

void
FUNC_13(xmlXPathParserContextPtr VAR_3, int VAR_4){
    xmlXPathObjectPtr VAR_5;
    xmlChar *VAR_6, *VAR_7;
    const xmlChar *VAR_8 = ((void*)0);
    xsltTransformContextPtr VAR_9;

    if (VAR_4 != 1) {
 FUNC_11(FUNC_12(VAR_3), ((void*)0), ((void*)0),
  "element-available() : expects one string arg\n");
 VAR_3->error = VAR_0;
 return;
    }
    FUNC_9(VAR_3, 1);
    if ((VAR_3->value == ((void*)0)) || (VAR_3->value->type != VAR_2)) {
 FUNC_11(FUNC_12(VAR_3), ((void*)0), ((void*)0),
     "element-available() : invalid arg expecting a string\n");
 VAR_3->error = VAR_1;
 return;
    }
    VAR_5 = FUNC_0(VAR_3);
    VAR_9 = FUNC_12(VAR_3);
    if ((VAR_9 == ((void*)0)) || (VAR_9->inst == ((void*)0))) {
 FUNC_11(FUNC_12(VAR_3), ((void*)0), ((void*)0),
  "element-available() : internal error tctxt == NULL\n");
 FUNC_6(VAR_5);
 FUNC_1(VAR_3, FUNC_7(0));
 return;
    }


    VAR_7 = FUNC_4(VAR_5->stringval, &VAR_6);
    if (VAR_7 == ((void*)0)) {
 xmlNsPtr VAR_10;

 VAR_7 = FUNC_5(VAR_5->stringval);
 VAR_10 = FUNC_3(VAR_9->inst->doc, VAR_9->inst, ((void*)0));
 if (VAR_10 != ((void*)0)) VAR_8 = VAR_10->href;
    } else {
 VAR_8 = FUNC_8(VAR_3->context, VAR_6);
 if (VAR_8 == ((void*)0)) {
     FUNC_11(FUNC_12(VAR_3), ((void*)0), ((void*)0),
  "element-available() : prefix %s is not bound\n", VAR_6);
 }
    }

    if (FUNC_10(VAR_9, VAR_7, VAR_8) != ((void*)0)) {
 FUNC_1(VAR_3, FUNC_7(1));
    } else {
 FUNC_1(VAR_3, FUNC_7(0));
    }

    FUNC_6(VAR_5);
    if (VAR_7 != ((void*)0))
 FUNC_2(VAR_7);
    if (VAR_6 != ((void*)0))
 FUNC_2(VAR_6);
}
