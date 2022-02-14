
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ const* ptr; } ;
typedef TYPE_1__ json_parse_ctx_t ;
typedef scalar_t__ WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static BOOL FUNC_1(json_parse_ctx_t *VAR_2, const WCHAR *VAR_3)
{
    unsigned VAR_4;
    for(VAR_4=0; VAR_3[VAR_4]; VAR_4++) {
        if(!VAR_2->ptr[VAR_4] || VAR_3[VAR_4] != VAR_2->ptr[VAR_4])
            return VAR_0;
    }
    if(FUNC_0(VAR_2->ptr[VAR_4]))
        return VAR_0;
    VAR_2->ptr += VAR_4;
    return VAR_1;
}
