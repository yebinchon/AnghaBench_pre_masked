
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xmlChar ;
typedef TYPE_1__* xmlBufPtr ;
typedef int xmlBuf ;
struct TYPE_5__ {int size; int * contentIO; scalar_t__* content; int alloc; void* compat_size; int * buffer; scalar_t__ error; scalar_t__ use; scalar_t__ compat_use; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

xmlBufPtr
FUNC_4(void) {
    xmlBufPtr VAR_2;

    VAR_2 = (xmlBufPtr) FUNC_2(sizeof(xmlBuf));
    if (VAR_2 == ((void*)0)) {
 FUNC_0(((void*)0), "creating buffer");
        return(((void*)0));
    }
    VAR_2->compat_use = 0;
    VAR_2->use = 0;
    VAR_2->error = 0;
    VAR_2->buffer = ((void*)0);
    VAR_2->size = VAR_1;
    VAR_2->compat_size = VAR_1;
    VAR_2->alloc = VAR_0;
    VAR_2->content = (xmlChar *) FUNC_3(VAR_2->size * sizeof(xmlChar));
    if (VAR_2->content == ((void*)0)) {
 FUNC_0(VAR_2, "creating buffer");
 FUNC_1(VAR_2);
        return(((void*)0));
    }
    VAR_2->content[0] = 0;
    VAR_2->contentIO = ((void*)0);
    return(VAR_2);
}
