
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* buf; } ;
typedef TYPE_1__ strbuf_t ;


 int FUNC_0 (char const) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(strbuf_t *VAR_0, strbuf_t *VAR_1)
{
    const char *VAR_2 = VAR_0->buf+1;

    FUNC_2(VAR_1);

    while(*VAR_2 != '>' && !FUNC_0(*VAR_2))
        VAR_2++;

    FUNC_1(VAR_1, VAR_0->buf+1, VAR_2-VAR_0->buf-1);
    FUNC_1(VAR_1, "", 1);
}
