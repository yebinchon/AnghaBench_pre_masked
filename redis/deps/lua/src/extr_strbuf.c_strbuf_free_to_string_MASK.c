
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* buf; int length; scalar_t__ dynamic; } ;
typedef TYPE_1__ strbuf_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

char *FUNC_3(strbuf_t *VAR_0, int *VAR_1)
{
    char *VAR_2;

    FUNC_0(VAR_0);

    FUNC_2(VAR_0);

    VAR_2 = VAR_0->buf;
    if (VAR_1)
        *VAR_1 = VAR_0->length;

    if (VAR_0->dynamic)
        FUNC_1(VAR_0);

    return VAR_2;
}
