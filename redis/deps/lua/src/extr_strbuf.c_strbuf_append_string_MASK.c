
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; char* buf; } ;
typedef TYPE_1__ strbuf_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(strbuf_t *VAR_0, const char *VAR_1)
{
    int VAR_2, VAR_3;

    VAR_2 = FUNC_0(VAR_0);

    for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++) {
        if (VAR_2 < 1) {
            FUNC_1(VAR_0, VAR_0->length + 1);
            VAR_2 = FUNC_0(VAR_0);
        }

        VAR_0->buf[VAR_0->length] = VAR_1[VAR_3];
        VAR_0->length++;
        VAR_2--;
    }
}
