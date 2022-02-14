
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int xmlSAXHandlerV1 ;
typedef TYPE_1__* xmlSAXHandlerPtr ;
typedef int xmlSAXHandler ;
typedef int * xmlParserInputPtr ;
typedef int * xmlParserInputBufferPtr ;
typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int * xmlInputReadCallback ;
typedef int (* xmlInputCloseCallback ) (void*) ;
typedef int xmlCharEncoding ;
struct TYPE_15__ {void* userData; TYPE_1__* sax; } ;
struct TYPE_14__ {scalar_t__ initialized; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int * FUNC_8 (TYPE_2__*,int *,int ) ;
 TYPE_2__* FUNC_9 () ;
 int * FUNC_10 (int *,int (*) (void*),void*,int ) ;

xmlParserCtxtPtr
FUNC_11(xmlSAXHandlerPtr VAR_2, void *VAR_3,
 xmlInputReadCallback VAR_4, xmlInputCloseCallback VAR_5,
 void *VAR_6, xmlCharEncoding VAR_7) {
    xmlParserCtxtPtr VAR_8;
    xmlParserInputPtr VAR_9;
    xmlParserInputBufferPtr VAR_10;

    if (VAR_4 == ((void*)0)) return(((void*)0));

    VAR_10 = FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7);
    if (VAR_10 == ((void*)0)) {
        if (VAR_5 != ((void*)0))
            VAR_5(VAR_6);
        return (((void*)0));
    }

    VAR_8 = FUNC_9();
    if (VAR_8 == ((void*)0)) {
 FUNC_6(VAR_10);
 return(((void*)0));
    }
    if (VAR_2 != ((void*)0)) {



     FUNC_4(VAR_8->sax);
 VAR_8->sax = (xmlSAXHandlerPtr) FUNC_7(sizeof(xmlSAXHandler));
 if (VAR_8->sax == ((void*)0)) {
     FUNC_3(VAR_8, ((void*)0));
     FUNC_5(VAR_8);
     return(((void*)0));
 }
 FUNC_2(VAR_8->sax, 0, sizeof(xmlSAXHandler));
 if (VAR_2->initialized == VAR_0)
     FUNC_1(VAR_8->sax, VAR_2, sizeof(xmlSAXHandler));
 else
     FUNC_1(VAR_8->sax, VAR_2, sizeof(xmlSAXHandlerV1));
 if (VAR_3 != ((void*)0))
     VAR_8->userData = VAR_3;
    }

    VAR_9 = FUNC_8(VAR_8, VAR_10, VAR_7);
    if (VAR_9 == ((void*)0)) {
 FUNC_5(VAR_8);
 return(((void*)0));
    }
    FUNC_0(VAR_8, VAR_9);

    return(VAR_8);
}
