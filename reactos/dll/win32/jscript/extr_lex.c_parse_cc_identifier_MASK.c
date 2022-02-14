
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; char* end; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static BOOL FUNC_3(parser_ctx_t *VAR_4, const WCHAR **VAR_5, unsigned *VAR_6)
{
    if(*VAR_4->ptr != '@') {
        FUNC_2(VAR_4, VAR_1);
        return VAR_0;
    }

    if(!FUNC_1(*++VAR_4->ptr)) {
        FUNC_2(VAR_4, VAR_2);
        return VAR_0;
    }

    *VAR_5 = VAR_4->ptr;
    while(++VAR_4->ptr < VAR_4->end && FUNC_0(*VAR_4->ptr));
    *VAR_6 = VAR_4->ptr - *VAR_5;
    return VAR_3;
}
