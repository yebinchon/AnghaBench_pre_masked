
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int (* readcallback ) (int ,char*,int) ;int compressed; int * buffer; int * raw; int rawconsumed; void* error; int * encoder; int context; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 unsigned int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int ,char*,int,unsigned int) ;
 int VAR_6 ;
 int FUNC_11 (void*,int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,char*,int) ;

int
FUNC_14(xmlParserInputBufferPtr VAR_7, int VAR_8) {
    char *VAR_9 = ((void*)0);
    int VAR_10 = 0;
    int VAR_11 = 0;

    if ((VAR_7 == ((void*)0)) || (VAR_7->error)) return(-1);
    if ((VAR_8 <= VAR_0) && (VAR_8 != 4))
        VAR_8 = VAR_0;

    if (FUNC_4(VAR_7->buffer) <= 0) {
 FUNC_11(VAR_2, ((void*)0));
 VAR_7->error = VAR_2;
 return(-1);
    }

    if (FUNC_7(VAR_7->buffer, VAR_8 + 1) < 0) {
        FUNC_12("growing input buffer");
        VAR_7->error = VAR_1;
        return(-1);
    }
    VAR_9 = (char *)FUNC_6(VAR_7->buffer);




    if (VAR_7->readcallback != ((void*)0)) {
 VAR_10 = VAR_7->readcallback(VAR_7->context, &VAR_9[0], VAR_8);
 if (VAR_10 <= 0)
     VAR_7->readcallback = VAR_5;
    } else {
 FUNC_11(VAR_4, ((void*)0));
 VAR_7->error = VAR_4;
 return(-1);
    }
    if (VAR_10 < 0) {
 return(-1);
    }




    if (VAR_7->compressed == -1) {




    }

    VAR_8 = VAR_10;
    if (VAR_7->encoder != ((void*)0)) {
        unsigned int VAR_12;




        if (VAR_7->raw == ((void*)0)) {
     VAR_7->raw = FUNC_5();
 }
 VAR_10 = FUNC_2(VAR_7->raw, (const xmlChar *) VAR_9, VAR_8);
 if (VAR_10 != 0)
     return(-1);




 VAR_12 = FUNC_8(VAR_7->raw);
 VAR_11 = FUNC_9(VAR_7, 1);
 if (VAR_11 < 0) {
     FUNC_11(VAR_3, ((void*)0));
     VAR_7->error = VAR_3;
     return(-1);
 }
 VAR_7->rawconsumed += (VAR_12 - FUNC_8(VAR_7->raw));
    } else {
 VAR_11 = VAR_8;
        FUNC_3(VAR_7->buffer, VAR_11);
    }





    return(VAR_11);
}
