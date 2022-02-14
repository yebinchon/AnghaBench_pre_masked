
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputPtr ;
typedef TYPE_2__* xmlParserInputBufferPtr ;
typedef int * xmlParserCtxtPtr ;
struct TYPE_9__ {int buffer; } ;
struct TYPE_8__ {TYPE_2__* buf; int * filename; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 () ;
 TYPE_2__* FUNC_6 (char const*,int,int ) ;

xmlParserCtxtPtr
FUNC_7(const char *VAR_1, int VAR_2) {
    xmlParserCtxtPtr VAR_3;
    xmlParserInputPtr VAR_4;
    xmlParserInputBufferPtr VAR_5;

    if (VAR_1 == ((void*)0))
 return(((void*)0));
    if (VAR_2 <= 0)
 return(((void*)0));

    VAR_3 = FUNC_5();
    if (VAR_3 == ((void*)0))
 return(((void*)0));


    VAR_5 = FUNC_6(VAR_1, VAR_2, VAR_0);
    if (VAR_5 == ((void*)0)) {
 FUNC_2(VAR_3);
 return(((void*)0));
    }

    VAR_4 = FUNC_4(VAR_3);
    if (VAR_4 == ((void*)0)) {
 FUNC_3(VAR_5);
 FUNC_2(VAR_3);
 return(((void*)0));
    }

    VAR_4->filename = ((void*)0);
    VAR_4->buf = VAR_5;
    FUNC_1(VAR_4->buf->buffer, VAR_4);

    FUNC_0(VAR_3, VAR_4);
    return(VAR_3);
}
