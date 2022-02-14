
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t buf_size; size_t buf_len; int * buf; } ;
typedef TYPE_1__ stringify_ctx_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (size_t) ;
 int * FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;

__attribute__((used)) static BOOL FUNC_3(stringify_ctx_t *VAR_2, const WCHAR *VAR_3, size_t VAR_4)
{
    if(!VAR_2->buf_size) {
        VAR_2->buf = FUNC_0(VAR_4*2*sizeof(WCHAR));
        if(!VAR_2->buf)
            return VAR_0;
        VAR_2->buf_size = VAR_4*2;
    }else if(VAR_2->buf_len + VAR_4 > VAR_2->buf_size) {
        WCHAR *VAR_5;
        size_t VAR_6;

        VAR_6 = VAR_2->buf_size * 2 + VAR_4;
        VAR_5 = FUNC_1(VAR_2->buf, VAR_6*sizeof(WCHAR));
        if(!VAR_5)
            return VAR_0;
        VAR_2->buf = VAR_5;
        VAR_2->buf_size = VAR_6;
    }

    if(VAR_4)
        FUNC_2(VAR_2->buf + VAR_2->buf_len, VAR_3, VAR_4*sizeof(WCHAR));
    VAR_2->buf_len += VAR_4;
    return VAR_1;
}
