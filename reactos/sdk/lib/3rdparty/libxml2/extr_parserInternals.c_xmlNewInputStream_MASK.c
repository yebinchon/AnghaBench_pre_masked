
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputPtr ;
typedef int xmlParserInput ;
typedef TYPE_2__* xmlParserCtxtPtr ;
struct TYPE_8__ {int input_id; } ;
struct TYPE_7__ {int line; int col; int standalone; scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (int) ;

xmlParserInputPtr
FUNC_3(xmlParserCtxtPtr VAR_0) {
    xmlParserInputPtr VAR_1;

    VAR_1 = (xmlParserInputPtr) FUNC_2(sizeof(xmlParserInput));
    if (VAR_1 == ((void*)0)) {
        FUNC_1(VAR_0, "couldn't allocate a new input stream\n");
 return(((void*)0));
    }
    FUNC_0(VAR_1, 0, sizeof(xmlParserInput));
    VAR_1->line = 1;
    VAR_1->col = 1;
    VAR_1->standalone = -1;






    if (VAR_0 != ((void*)0))
        VAR_1->id = VAR_0->input_id++;

    return(VAR_1);
}
