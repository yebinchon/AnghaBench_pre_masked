
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* xmlXPathParserContextPtr ;
struct TYPE_6__ {TYPE_1__* value; int error; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *,int *,char*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(xmlXPathParserContextPtr VAR_4, int VAR_5){
    if (VAR_5 != 1) {
 FUNC_0(FUNC_1(VAR_4), ((void*)0), ((void*)0),
  "node-set() : expects one result-tree arg\n");
 VAR_4->error = VAR_0;
 return;
    }
    if ((VAR_4->value == ((void*)0)) ||
 ((VAR_4->value->type != VAR_3) &&
  (VAR_4->value->type != VAR_2))) {
 FUNC_0(FUNC_1(VAR_4), ((void*)0), ((void*)0),
     "node-set() invalid arg expecting a result tree\n");
 VAR_4->error = VAR_1;
 return;
    }
    if (VAR_4->value->type == VAR_3) {
 VAR_4->value->type = VAR_2;
    }
}
