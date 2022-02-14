
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* buffer; size_t len; } ;
typedef TYPE_1__ BUFFER ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

const char *FUNC_2(BUFFER *VAR_0)
{
    FUNC_0(VAR_0, 1);
    VAR_0->buffer[VAR_0->len] = '\0';

    FUNC_1(VAR_0);

    return(VAR_0->buffer);
}
