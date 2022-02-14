
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; scalar_t__ buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef int jsstr_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_3(strbuf_t *VAR_2, jsstr_t *VAR_3)
{
    if(!FUNC_2(VAR_2, VAR_2->len+FUNC_1(VAR_3)))
        return VAR_0;

    FUNC_0(VAR_3, VAR_2->buf+VAR_2->len);
    VAR_2->len += FUNC_1(VAR_3);
    return VAR_1;
}
