
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputBufferPtr ;
struct TYPE_4__ {int buffer; int * readcallback; scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

int
FUNC_2(xmlParserInputBufferPtr VAR_1, int VAR_2) {
    if ((VAR_1 == ((void*)0)) || (VAR_1->error)) return(-1);
    if (VAR_1->readcallback != ((void*)0))
 return(FUNC_1(VAR_1, VAR_2));
    else if (FUNC_0(VAR_1->buffer) == VAR_0)
 return(0);
    else
        return(-1);
}
