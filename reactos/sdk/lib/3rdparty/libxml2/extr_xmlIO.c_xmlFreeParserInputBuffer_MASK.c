
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
struct TYPE_4__ {int * buffer; int context; int (* closecallback ) (int ) ;int * encoder; int * raw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(xmlParserInputBufferPtr VAR_0) {
    if (VAR_0 == ((void*)0)) return;

    if (VAR_0->raw) {
        FUNC_1(VAR_0->raw);
 VAR_0->raw = ((void*)0);
    }
    if (VAR_0->encoder != ((void*)0)) {
        FUNC_2(VAR_0->encoder);
    }
    if (VAR_0->closecallback != ((void*)0)) {
 VAR_0->closecallback(VAR_0->context);
    }
    if (VAR_0->buffer != ((void*)0)) {
        FUNC_1(VAR_0->buffer);
 VAR_0->buffer = ((void*)0);
    }

    FUNC_3(VAR_0);
}
