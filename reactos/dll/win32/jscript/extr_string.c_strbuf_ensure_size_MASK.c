
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int size; int * buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef int WCHAR ;
typedef unsigned int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (unsigned int) ;
 int * FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static BOOL FUNC_2(strbuf_t *VAR_2, unsigned VAR_3)
{
    WCHAR *VAR_4;
    DWORD VAR_5;

    if(VAR_3 <= VAR_2->size)
        return VAR_1;

    VAR_5 = VAR_2->size ? VAR_2->size<<1 : 16;
    if(VAR_5 < VAR_3)
        VAR_5 = VAR_3;
    if(VAR_2->buf)
        VAR_4 = FUNC_1(VAR_2->buf, VAR_5*sizeof(WCHAR));
    else
        VAR_4 = FUNC_0(VAR_5*sizeof(WCHAR));
    if(!VAR_4)
        return VAR_0;

    VAR_2->buf = VAR_4;
    VAR_2->size = VAR_5;
    return VAR_1;
}
