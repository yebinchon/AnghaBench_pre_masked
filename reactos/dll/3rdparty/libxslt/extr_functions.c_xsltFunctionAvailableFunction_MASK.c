
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* xmlXPathParserContextPtr ;
typedef TYPE_3__* xmlXPathObjectPtr ;
typedef int xmlChar ;
struct TYPE_13__ {int stringval; } ;
struct TYPE_12__ {int context; int error; TYPE_1__* value; } ;
struct TYPE_11__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int **) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (int ,int *,int const*) ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (int ,int *,int *,char*,...) ;
 int FUNC_11 (TYPE_2__*) ;

void
FUNC_12(xmlXPathParserContextPtr VAR_3, int VAR_4){
    xmlXPathObjectPtr VAR_5;
    xmlChar *VAR_6, *VAR_7;
    const xmlChar *VAR_8 = ((void*)0);

    if (VAR_4 != 1) {
 FUNC_10(FUNC_11(VAR_3), ((void*)0), ((void*)0),
  "function-available() : expects one string arg\n");
 VAR_3->error = VAR_0;
 return;
    }
    FUNC_9(VAR_3, 1);
    if ((VAR_3->value == ((void*)0)) || (VAR_3->value->type != VAR_2)) {
 FUNC_10(FUNC_11(VAR_3), ((void*)0), ((void*)0),
     "function-available() : invalid arg expecting a string\n");
 VAR_3->error = VAR_1;
 return;
    }
    VAR_5 = FUNC_0(VAR_3);

    VAR_7 = FUNC_3(VAR_5->stringval, &VAR_6);
    if (VAR_7 == ((void*)0)) {
 VAR_7 = FUNC_4(VAR_5->stringval);
    } else {
 VAR_8 = FUNC_8(VAR_3->context, VAR_6);
 if (VAR_8 == ((void*)0)) {
     FUNC_10(FUNC_11(VAR_3), ((void*)0), ((void*)0),
  "function-available() : prefix %s is not bound\n", VAR_6);
 }
    }

    if (FUNC_6(VAR_3->context, VAR_7, VAR_8) != ((void*)0)) {
 FUNC_1(VAR_3, FUNC_7(1));
    } else {
 FUNC_1(VAR_3, FUNC_7(0));
    }

    FUNC_5(VAR_5);
    if (VAR_7 != ((void*)0))
 FUNC_2(VAR_7);
    if (VAR_6 != ((void*)0))
 FUNC_2(VAR_6);
}
