
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ptr; } ;
typedef TYPE_1__ json_parse_ctx_t ;
typedef int WCHAR ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static WCHAR FUNC_1(json_parse_ctx_t *VAR_0)
{
    while(FUNC_0(*VAR_0->ptr))
        VAR_0->ptr++;
    return *VAR_0->ptr;
}
