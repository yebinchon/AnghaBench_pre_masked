
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; char* start; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (void*,TYPE_1__*,int) ;

void FUNC_2(void *VAR_0, bstr *VAR_1, bstr VAR_2)
{
    if (!VAR_2.len)
        return;
    FUNC_1(VAR_0, VAR_1, VAR_2.len + 1);
    FUNC_0(VAR_1->start + VAR_1->len, VAR_2.start, VAR_2.len);
    VAR_1->len += VAR_2.len;
    VAR_1->start[VAR_1->len] = '\0';
}
