
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
typedef int xmlCharEncoding ;
typedef int xmlChar ;
struct TYPE_5__ {int buffer; int * closecallback; int readcallback; void* context; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

xmlParserInputBufferPtr
FUNC_3(const char *VAR_1, int VAR_2, xmlCharEncoding VAR_3) {
    xmlParserInputBufferPtr VAR_4;
    int VAR_5;

    if (VAR_2 < 0) return(((void*)0));
    if (VAR_1 == ((void*)0)) return(((void*)0));

    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 != ((void*)0)) {
        VAR_4->context = (void *) VAR_1;
 VAR_4->readcallback = VAR_0;
 VAR_4->closecallback = ((void*)0);
 VAR_5 = FUNC_1(VAR_4->buffer, (const xmlChar *) VAR_1, VAR_2);
 if (VAR_5 != 0) {
     FUNC_2(VAR_4);
     return(((void*)0));
 }
    }

    return(VAR_4);
}
