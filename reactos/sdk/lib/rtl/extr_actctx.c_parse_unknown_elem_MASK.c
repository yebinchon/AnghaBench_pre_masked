
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* ptr; int len; } ;
typedef TYPE_1__ xmlstr_t ;
typedef int xmlbuf_t ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,TYPE_1__*,int*,int*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static BOOL FUNC_4(xmlbuf_t *VAR_2, const xmlstr_t *VAR_3)
{
    xmlstr_t VAR_4, VAR_5, VAR_6;
    BOOL VAR_7 = VAR_0, VAR_8, VAR_9 = VAR_1;

    while(FUNC_0(VAR_2, &VAR_4, &VAR_5, &VAR_8, &VAR_7));
    if(VAR_8 || VAR_7) return VAR_7;

    while(VAR_9 && (VAR_9 = FUNC_1(VAR_2, &VAR_6)))
    {
        if(*VAR_6.ptr == '/' && VAR_6.len - 1 == VAR_3->len &&
           !FUNC_3(VAR_6.ptr+1, VAR_3->ptr, VAR_3->len))
            break;
        else
            VAR_9 = FUNC_4(VAR_2, &VAR_6);
    }

    return VAR_9 && FUNC_2(VAR_2);
}
