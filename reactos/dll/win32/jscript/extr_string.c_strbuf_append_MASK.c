
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; scalar_t__ buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int const*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_2(strbuf_t *VAR_2, const WCHAR *VAR_3, DWORD VAR_4)
{
    if(!VAR_4)
        return VAR_1;

    if(!FUNC_1(VAR_2, VAR_2->len+VAR_4))
        return VAR_0;

    FUNC_0(VAR_2->buf+VAR_2->len, VAR_3, VAR_4*sizeof(WCHAR));
    VAR_2->len += VAR_4;
    return VAR_1;
}
