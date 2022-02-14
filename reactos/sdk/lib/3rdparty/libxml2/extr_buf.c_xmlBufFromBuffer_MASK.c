
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlBufferPtr ;
typedef TYPE_2__* xmlBufPtr ;
typedef int xmlBuf ;
struct TYPE_6__ {int contentIO; int content; int alloc; TYPE_1__* buffer; scalar_t__ error; int compat_size; int compat_use; int size; int use; } ;
struct TYPE_5__ {int contentIO; int content; int alloc; int size; int use; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int) ;

xmlBufPtr
FUNC_2(xmlBufferPtr VAR_0) {
    xmlBufPtr VAR_1;

    if (VAR_0 == ((void*)0))
        return(((void*)0));

    VAR_1 = (xmlBufPtr) FUNC_1(sizeof(xmlBuf));
    if (VAR_1 == ((void*)0)) {
 FUNC_0(((void*)0), "creating buffer");
        return(((void*)0));
    }
    VAR_1->use = VAR_0->use;
    VAR_1->size = VAR_0->size;
    VAR_1->compat_use = VAR_0->use;
    VAR_1->compat_size = VAR_0->size;
    VAR_1->error = 0;
    VAR_1->buffer = VAR_0;
    VAR_1->alloc = VAR_0->alloc;
    VAR_1->content = VAR_0->content;
    VAR_1->contentIO = VAR_0->contentIO;

    return(VAR_1);
}
