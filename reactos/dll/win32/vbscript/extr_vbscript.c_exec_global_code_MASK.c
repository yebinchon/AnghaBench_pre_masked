
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int main_code; int pending_exec; } ;
typedef TYPE_1__ vbscode_t ;
struct TYPE_7__ {int site; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *,int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_1, vbscode_t *VAR_2)
{
    HRESULT VAR_3;

    VAR_2->pending_exec = VAR_0;

    FUNC_0(VAR_1->site);
    VAR_3 = FUNC_2(VAR_1, &VAR_2->main_code, ((void*)0), ((void*)0), ((void*)0));
    FUNC_1(VAR_1->site);

    return VAR_3;
}
