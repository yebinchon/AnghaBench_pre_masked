
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {int size; int len; int * buffer; } ;
typedef TYPE_1__ BUFFER ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,size_t,char const*,int ) ;

void FUNC_4(BUFFER *VAR_0, const char *VAR_1, va_list VAR_2)
{
    if(FUNC_2(!VAR_1 || !*VAR_1)) return;

    FUNC_0(VAR_0, 2);

    size_t VAR_3 = VAR_0->size - VAR_0->len - 1;

    VAR_0->len += FUNC_3(&VAR_0->buffer[VAR_0->len], VAR_3, VAR_1, VAR_2);

    FUNC_1(VAR_0);


}
