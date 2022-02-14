
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline BOOL FUNC_0(script_ctx_t *VAR_3)
{
    return VAR_3->state == VAR_2
        || VAR_3->state == VAR_0
        || VAR_3->state == VAR_1;
}
