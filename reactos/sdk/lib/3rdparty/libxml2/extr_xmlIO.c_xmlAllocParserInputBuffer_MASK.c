
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
typedef int xmlParserInputBuffer ;
typedef int xmlCharEncoding ;
struct TYPE_5__ {int compressed; scalar_t__ rawconsumed; int * context; int * closecallback; int * readcallback; int * raw; int * encoder; int * buffer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,size_t) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

xmlParserInputBufferPtr
FUNC_7(xmlCharEncoding VAR_2) {
    xmlParserInputBufferPtr VAR_3;

    VAR_3 = (xmlParserInputBufferPtr) FUNC_6(sizeof(xmlParserInputBuffer));
    if (VAR_3 == ((void*)0)) {
 FUNC_5("creating input buffer");
 return(((void*)0));
    }
    FUNC_0(VAR_3, 0, (size_t) sizeof(xmlParserInputBuffer));
    VAR_3->buffer = FUNC_1(2 * VAR_1);
    if (VAR_3->buffer == ((void*)0)) {
        FUNC_3(VAR_3);
 return(((void*)0));
    }
    FUNC_2(VAR_3->buffer, VAR_0);
    VAR_3->encoder = FUNC_4(VAR_2);
    if (VAR_3->encoder != ((void*)0))
        VAR_3->raw = FUNC_1(2 * VAR_1);
    else
        VAR_3->raw = ((void*)0);
    VAR_3->readcallback = ((void*)0);
    VAR_3->closecallback = ((void*)0);
    VAR_3->context = ((void*)0);
    VAR_3->compressed = -1;
    VAR_3->rawconsumed = 0;

    return(VAR_3);
}
