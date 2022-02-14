
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlChar ;
typedef TYPE_1__* xmlBufferPtr ;
typedef int xmlBuffer ;
struct TYPE_3__ {size_t use; size_t size; int * content; int alloc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;

xmlBufferPtr
FUNC_2(void *VAR_1, size_t VAR_2) {
    xmlBufferPtr VAR_3;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == 0))
        return(((void*)0));

    VAR_3 = (xmlBufferPtr) FUNC_0(sizeof(xmlBuffer));
    if (VAR_3 == ((void*)0)) {
 FUNC_1("creating buffer");
        return(((void*)0));
    }
    VAR_3->use = VAR_2;
    VAR_3->size = VAR_2;
    VAR_3->alloc = VAR_0;
    VAR_3->content = (xmlChar *) VAR_1;
    return(VAR_3);
}
