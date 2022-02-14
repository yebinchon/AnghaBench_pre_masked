
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int xmlSchemaValidityWarningFunc ;
typedef int xmlSchemaValidityErrorFunc ;
typedef int xmlSchemaValidCtxtPtr ;
typedef void* xmlSAXHandlerPtr ;
typedef int * xmlParserInputPtr ;
typedef int * xmlParserInputBufferPtr ;
typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_7__ {void* sax; int * myDoc; void* userData; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (char const*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,char const*) ;
 int FUNC_13 (int ,int *,int ,void*,void*) ;

__attribute__((used)) static void
FUNC_14(const char *VAR_12) {
    xmlSAXHandlerPtr VAR_13;
    const char *VAR_14 = "user_data";
    xmlParserInputBufferPtr VAR_15 = ((void*)0);
    xmlParserInputPtr VAR_16;
    xmlParserCtxtPtr VAR_17 = ((void*)0);
    xmlSAXHandlerPtr VAR_18 = ((void*)0);

    VAR_2 = 0;

    if (VAR_6) {
        VAR_13 = VAR_5;




    } else {
        VAR_13 = VAR_3;
    }




    VAR_15 = FUNC_8(VAR_12, VAR_1);
    if (VAR_15 == ((void*)0)) {
        goto error;
    }
    {



 VAR_17 = FUNC_6();
 if (VAR_17 == ((void*)0)) {
     FUNC_4(VAR_15);
     goto error;
 }
 VAR_18 = VAR_17->sax;
 VAR_17->sax = VAR_13;
 VAR_17->userData = (void *) VAR_14;
 VAR_16 = FUNC_5(VAR_17, VAR_15, VAR_1);
 if (VAR_16 == ((void*)0)) {
     FUNC_4(VAR_15);
     goto error;
 }
 FUNC_1(VAR_17, VAR_16);


 FUNC_7(VAR_17);

 if (VAR_17->myDoc != ((void*)0)) {
     FUNC_0(VAR_10, "SAX generated a doc !\n");
     FUNC_2(VAR_17->myDoc);
     VAR_17->myDoc = ((void*)0);
 }
    }

error:
    if (VAR_17 != ((void*)0)) {
        VAR_17->sax = VAR_18;
        FUNC_3(VAR_17);
    }
}
