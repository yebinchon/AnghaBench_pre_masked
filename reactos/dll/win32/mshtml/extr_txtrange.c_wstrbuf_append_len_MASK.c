
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int size; scalar_t__* buf; } ;
typedef TYPE_1__ wstrbuf_t ;
typedef int WCHAR ;
typedef int LPCWSTR ;


 scalar_t__* FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_2(wstrbuf_t *VAR_0, LPCWSTR VAR_1, int VAR_2)
{
    if(VAR_0->len+VAR_2 >= VAR_0->size) {
        VAR_0->size = 2*VAR_0->size+VAR_2;
        VAR_0->buf = FUNC_0(VAR_0->buf, VAR_0->size * sizeof(WCHAR));
    }

    FUNC_1(VAR_0->buf+VAR_0->len, VAR_1, VAR_2*sizeof(WCHAR));
    VAR_0->len += VAR_2;
    VAR_0->buf[VAR_0->len] = 0;
}
