
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* xmlXPathParserContextPtr ;
typedef TYPE_3__* xmlXPathObjectPtr ;
typedef TYPE_4__* xmlEntityPtr ;
typedef int xmlChar ;
struct TYPE_16__ {int const* URI; } ;
struct TYPE_15__ {scalar_t__ type; int * stringval; } ;
struct TYPE_14__ {TYPE_1__* context; int error; int * value; } ;
struct TYPE_13__ {int doc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_2 (int ,int *) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_2 ;

void
FUNC_7(xmlXPathParserContextPtr VAR_3, int VAR_4){
    xmlXPathObjectPtr VAR_5;
    xmlChar *VAR_6;

    if ((VAR_4 != 1) || (VAR_3->value == ((void*)0))) {
        FUNC_6(VAR_2,
  "unparsed-entity-uri() : expects one string arg\n");
 VAR_3->error = VAR_0;
 return;
    }
    VAR_5 = FUNC_0(VAR_3);
    if (VAR_5->type != VAR_1) {
 VAR_5 = FUNC_3(VAR_5);
    }

    VAR_6 = VAR_5->stringval;
    if (VAR_6 == ((void*)0)) {
 FUNC_1(VAR_3, FUNC_5((const xmlChar *)""));
    } else {
 xmlEntityPtr VAR_7;

 VAR_7 = FUNC_2(VAR_3->context->doc, VAR_6);
 if (VAR_7 == ((void*)0)) {
     FUNC_1(VAR_3, FUNC_5((const xmlChar *)""));
 } else {
     if (VAR_7->URI != ((void*)0))
  FUNC_1(VAR_3, FUNC_5(VAR_7->URI));
     else
  FUNC_1(VAR_3, FUNC_5((const xmlChar *)""));
 }
    }
    FUNC_4(VAR_5);
}
