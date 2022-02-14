
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* ptr; int* end; int nl; } ;
typedef TYPE_1__ parser_ctx_t ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static BOOL FUNC_2(parser_ctx_t *VAR_1)
{
    while(VAR_1->ptr < VAR_1->end && (FUNC_1(*VAR_1->ptr) || *VAR_1->ptr == 0xFEFF )) {
        if(FUNC_0(*VAR_1->ptr++))
            VAR_1->nl = VAR_0;
    }

    return VAR_1->ptr != VAR_1->end;
}
