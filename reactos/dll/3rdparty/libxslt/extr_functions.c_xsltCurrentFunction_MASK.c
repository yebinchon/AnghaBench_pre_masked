
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xmlXPathParserContextPtr ;
struct TYPE_9__ {int error; } ;
struct TYPE_8__ {int * node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *,char*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(xmlXPathParserContextPtr VAR_1, int VAR_2){
    xsltTransformContextPtr VAR_3;

    if (VAR_2 != 0) {
 FUNC_2(FUNC_3(VAR_1), ((void*)0), ((void*)0),
  "current() : function uses no argument\n");
 VAR_1->error = VAR_0;
 return;
    }
    VAR_3 = FUNC_3(VAR_1);
    if (VAR_3 == ((void*)0)) {
 FUNC_2(FUNC_3(VAR_1), ((void*)0), ((void*)0),
  "current() : internal error tctxt == NULL\n");
 FUNC_0(VAR_1, FUNC_1(((void*)0)));
    } else {
 FUNC_0(VAR_1, FUNC_1(VAR_3->node));
    }
}
