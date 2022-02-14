
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlChar ;
typedef TYPE_1__* xmlBufPtr ;
typedef int xmlBuf ;
struct TYPE_3__ {size_t compat_use; size_t compat_size; size_t use; size_t size; int * buffer; scalar_t__ error; int * content; int alloc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int) ;

xmlBufPtr
FUNC_2(void *VAR_2, size_t VAR_3) {
    xmlBufPtr VAR_4;

    if (VAR_2 == ((void*)0))
        return(((void*)0));

    VAR_4 = (xmlBufPtr) FUNC_1(sizeof(xmlBuf));
    if (VAR_4 == ((void*)0)) {
 FUNC_0(((void*)0), "creating buffer");
        return(((void*)0));
    }
    if (VAR_3 < VAR_0) {
        VAR_4->compat_use = VAR_3;
        VAR_4->compat_size = VAR_3;
    } else {
        VAR_4->compat_use = VAR_0;
        VAR_4->compat_size = VAR_0;
    }
    VAR_4->use = VAR_3;
    VAR_4->size = VAR_3;
    VAR_4->alloc = VAR_1;
    VAR_4->content = (xmlChar *) VAR_2;
    VAR_4->error = 0;
    VAR_4->buffer = ((void*)0);
    return(VAR_4);
}
