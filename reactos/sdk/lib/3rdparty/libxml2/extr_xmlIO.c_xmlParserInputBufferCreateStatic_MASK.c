
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
typedef int xmlParserInputBuffer ;
typedef int xmlCharEncoding ;
struct TYPE_5__ {int compressed; int * closecallback; int * readcallback; void* context; int * raw; int * encoder; int * buffer; } ;


 int FUNC_0 (TYPE_1__*,int ,size_t) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (void*,size_t) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

xmlParserInputBufferPtr
FUNC_7(const char *VAR_1, int VAR_2,
                                 xmlCharEncoding VAR_3) {
    xmlParserInputBufferPtr VAR_4;

    if (VAR_2 < 0) return(((void*)0));
    if (VAR_1 == ((void*)0)) return(((void*)0));

    VAR_4 = (xmlParserInputBufferPtr) FUNC_6(sizeof(xmlParserInputBuffer));
    if (VAR_4 == ((void*)0)) {
 FUNC_5("creating input buffer");
 return(((void*)0));
    }
    FUNC_0(VAR_4, 0, (size_t) sizeof(xmlParserInputBuffer));
    VAR_4->buffer = FUNC_2((void *)VAR_1, (size_t) VAR_2);
    if (VAR_4->buffer == ((void*)0)) {
        FUNC_3(VAR_4);
 return(((void*)0));
    }
    VAR_4->encoder = FUNC_4(VAR_3);
    if (VAR_4->encoder != ((void*)0))
        VAR_4->raw = FUNC_1(2 * VAR_0);
    else
        VAR_4->raw = ((void*)0);
    VAR_4->compressed = -1;
    VAR_4->context = (void *) VAR_1;
    VAR_4->readcallback = ((void*)0);
    VAR_4->closecallback = ((void*)0);

    return(VAR_4);
}
