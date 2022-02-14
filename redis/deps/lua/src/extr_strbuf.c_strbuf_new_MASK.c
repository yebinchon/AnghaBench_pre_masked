
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dynamic; } ;
typedef TYPE_1__ strbuf_t ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;

strbuf_t *FUNC_3(int VAR_0)
{
    strbuf_t *VAR_1;

    VAR_1 = FUNC_1(sizeof(strbuf_t));
    if (!VAR_1)
        FUNC_0("Out of memory");

    FUNC_2(VAR_1, VAR_0);


    VAR_1->dynamic = 1;

    return VAR_1;
}
