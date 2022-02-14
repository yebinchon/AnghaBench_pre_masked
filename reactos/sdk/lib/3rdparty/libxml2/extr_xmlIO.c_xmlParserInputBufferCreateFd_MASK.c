
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
typedef int xmlCharEncoding ;
typedef scalar_t__ ptrdiff_t ;
struct TYPE_4__ {int closecallback; int readcallback; void* context; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

xmlParserInputBufferPtr
FUNC_1(int VAR_2, xmlCharEncoding VAR_3) {
    xmlParserInputBufferPtr VAR_4;

    if (VAR_2 < 0) return(((void*)0));

    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 != ((void*)0)) {
        VAR_4->context = (void *) (ptrdiff_t) VAR_2;
 VAR_4->readcallback = VAR_1;
 VAR_4->closecallback = VAR_0;
    }

    return(VAR_4);
}
