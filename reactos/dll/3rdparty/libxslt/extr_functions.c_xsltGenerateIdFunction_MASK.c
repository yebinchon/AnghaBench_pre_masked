
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_3__* xmlXPathParserContextPtr ;
typedef TYPE_4__* xmlXPathObjectPtr ;
typedef TYPE_5__* xmlNodeSetPtr ;
typedef int * xmlNodePtr ;
typedef int xmlChar ;
typedef int str ;
struct TYPE_16__ {int nodeNr; int ** nodeTab; } ;
struct TYPE_15__ {TYPE_5__* nodesetval; } ;
struct TYPE_14__ {int error; TYPE_2__* value; TYPE_1__* context; } ;
struct TYPE_13__ {scalar_t__ type; } ;
struct TYPE_12__ {int * node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,char*,long) ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *,char*,...) ;
 int FUNC_8 (TYPE_3__*) ;

void
FUNC_9(xmlXPathParserContextPtr VAR_3, int VAR_4){
    static char VAR_5;
    xmlNodePtr VAR_6 = ((void*)0);
    xmlXPathObjectPtr VAR_7 = ((void*)0);
    long VAR_8;
    xmlChar VAR_9[30];

    if (VAR_4 == 0) {
 VAR_6 = VAR_3->context->node;
    } else if (VAR_4 == 1) {
 xmlNodeSetPtr VAR_10;
 int VAR_11, VAR_12;

 if ((VAR_3->value == ((void*)0)) || (VAR_3->value->type != VAR_2)) {
     VAR_3->error = VAR_1;
     FUNC_7(FUNC_8(VAR_3), ((void*)0), ((void*)0),
  "generate-id() : invalid arg expecting a node-set\n");
     return;
 }
 VAR_7 = FUNC_1(VAR_3);
 VAR_10 = VAR_7->nodesetval;
 if ((VAR_10 == ((void*)0)) || (VAR_10->nodeNr <= 0)) {
     FUNC_4(VAR_7);
     FUNC_2(VAR_3, FUNC_5(""));
     return;
 }
 VAR_6 = VAR_10->nodeTab[0];
 for (VAR_11 = 1;VAR_11 < VAR_10->nodeNr;VAR_11++) {
     VAR_12 = FUNC_3(VAR_6, VAR_10->nodeTab[VAR_11]);
     if (VAR_12 == -1)
         VAR_6 = VAR_10->nodeTab[VAR_11];
 }
    } else {
 FUNC_7(FUNC_8(VAR_3), ((void*)0), ((void*)0),
  "generate-id() : invalid number of args %d\n", VAR_4);
 VAR_3->error = VAR_0;
 return;
    }

    if (VAR_7)
        FUNC_4(VAR_7);

    VAR_8 = (long)((char *)VAR_6 - (char *)&VAR_5);
    if (VAR_8 >= 0) {
      FUNC_0((char *)VAR_9, sizeof(VAR_9), "idp%ld", VAR_8);
    } else {
      FUNC_0((char *)VAR_9, sizeof(VAR_9), "idm%ld", -VAR_8);
    }
    FUNC_2(VAR_3, FUNC_6(VAR_9));
}
