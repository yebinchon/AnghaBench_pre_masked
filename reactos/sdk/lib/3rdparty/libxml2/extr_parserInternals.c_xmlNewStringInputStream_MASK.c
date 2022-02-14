
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputPtr ;
typedef int xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_4__ {size_t length; int const* end; int const* cur; int const* base; } ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int const*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_4 (int const*) ;

xmlParserInputPtr
FUNC_5(xmlParserCtxtPtr VAR_2, const xmlChar *VAR_3) {
    xmlParserInputPtr VAR_4;

    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_2, "xmlNewStringInputStream string = NULL\n",
                ((void*)0));
 return(((void*)0));
    }
    if (VAR_1)
 FUNC_2(VAR_0,
  "new fixed input: %.30s\n", VAR_3);
    VAR_4 = FUNC_3(VAR_2);
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_2, "couldn't allocate a new input stream\n");
 return(((void*)0));
    }
    VAR_4->base = VAR_3;
    VAR_4->cur = VAR_3;
    VAR_4->length = FUNC_4(VAR_3);
    VAR_4->end = &VAR_3[VAR_4->length];
    return(VAR_4);
}
