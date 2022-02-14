
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
typedef int xmlCharEncoding ;
struct TYPE_4__ {int closecallback; int readcallback; int * context; } ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;

xmlParserInputBufferPtr
FUNC_2(FILE *VAR_3, xmlCharEncoding VAR_4) {
    xmlParserInputBufferPtr VAR_5;

    if (VAR_2 == 0)
 FUNC_1();

    if (VAR_3 == ((void*)0)) return(((void*)0));

    VAR_5 = FUNC_0(VAR_4);
    if (VAR_5 != ((void*)0)) {
        VAR_5->context = VAR_3;
 VAR_5->readcallback = VAR_1;
 VAR_5->closecallback = VAR_0;
    }

    return(VAR_5);
}
