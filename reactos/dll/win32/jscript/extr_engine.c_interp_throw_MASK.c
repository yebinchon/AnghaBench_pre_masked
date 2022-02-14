
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; } ;
struct TYPE_6__ {TYPE_1__ ei; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_1)
{
    FUNC_0("\n");

    FUNC_1(VAR_1->ei.val);
    VAR_1->ei.val = FUNC_2(VAR_1);
    return VAR_0;
}
