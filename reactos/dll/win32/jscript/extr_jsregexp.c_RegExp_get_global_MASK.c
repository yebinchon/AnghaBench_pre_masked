
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_4__ {TYPE_1__* jsregexp; } ;
struct TYPE_3__ {int flags; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_2, jsdisp_t *VAR_3, jsval_t *VAR_4)
{
    FUNC_0("\n");

    *VAR_4 = FUNC_1(!!(FUNC_2(VAR_3)->jsregexp->flags & VAR_0));
    return VAR_1;
}
