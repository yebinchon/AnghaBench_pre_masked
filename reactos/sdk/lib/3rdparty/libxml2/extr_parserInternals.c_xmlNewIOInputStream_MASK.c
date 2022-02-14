
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputPtr ;
typedef TYPE_2__* xmlParserInputBufferPtr ;
typedef int xmlParserCtxtPtr ;
typedef scalar_t__ xmlCharEncoding ;
struct TYPE_8__ {int buffer; } ;
struct TYPE_7__ {TYPE_2__* buf; int * filename; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,scalar_t__) ;

xmlParserInputPtr
FUNC_4(xmlParserCtxtPtr VAR_3, xmlParserInputBufferPtr VAR_4,
             xmlCharEncoding VAR_5) {
    xmlParserInputPtr VAR_6;

    if (VAR_4 == ((void*)0)) return(((void*)0));
    if (VAR_2)
 FUNC_1(VAR_1, "new input from I/O\n");
    VAR_6 = FUNC_2(VAR_3);
    if (VAR_6 == ((void*)0)) {
 return(((void*)0));
    }
    VAR_6->filename = ((void*)0);
    VAR_6->buf = VAR_4;
    FUNC_0(VAR_6->buf->buffer, VAR_6);

    if (VAR_5 != VAR_0) {
        FUNC_3(VAR_3, VAR_5);
    }

    return(VAR_6);
}
