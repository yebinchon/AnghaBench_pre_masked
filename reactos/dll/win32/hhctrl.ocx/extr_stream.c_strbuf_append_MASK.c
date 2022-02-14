
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__ size; scalar_t__ buf; } ;
typedef TYPE_1__ strbuf_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,char const*,int) ;

__attribute__((used)) static void FUNC_2(strbuf_t *VAR_0, const char *VAR_1, int VAR_2)
{
    if(VAR_0->len+VAR_2 > VAR_0->size) {
        VAR_0->size = VAR_0->len+VAR_2;
        VAR_0->buf = FUNC_0(VAR_0->buf, VAR_0->size);
    }

    FUNC_1(VAR_0->buf+VAR_0->len, VAR_1, VAR_2);
    VAR_0->len += VAR_2;
}
