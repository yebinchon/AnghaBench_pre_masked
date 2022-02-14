
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xmlChar ;
typedef TYPE_1__* xmlBufferPtr ;
typedef int xmlBuffer ;
struct TYPE_4__ {int size; int * contentIO; scalar_t__* content; int alloc; scalar_t__ use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;

xmlBufferPtr
FUNC_4(void) {
    xmlBufferPtr VAR_2;

    VAR_2 = (xmlBufferPtr) FUNC_1(sizeof(xmlBuffer));
    if (VAR_2 == ((void*)0)) {
 FUNC_3("creating buffer");
        return(((void*)0));
    }
    VAR_2->use = 0;
    VAR_2->size = VAR_1;
    VAR_2->alloc = VAR_0;
    VAR_2->content = (xmlChar *) FUNC_2(VAR_2->size * sizeof(xmlChar));
    if (VAR_2->content == ((void*)0)) {
 FUNC_3("creating buffer");
 FUNC_0(VAR_2);
        return(((void*)0));
    }
    VAR_2->content[0] = 0;
    VAR_2->contentIO = ((void*)0);
    return(VAR_2);
}
