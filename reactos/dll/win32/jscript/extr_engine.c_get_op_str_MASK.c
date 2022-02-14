
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* call_ctx; } ;
typedef TYPE_5__ script_ctx_t ;
typedef int jsstr_t ;
struct TYPE_13__ {size_t ip; TYPE_4__* bytecode; } ;
typedef TYPE_6__ call_frame_t ;
struct TYPE_11__ {TYPE_3__* instrs; } ;
struct TYPE_9__ {TYPE_1__* arg; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_8__ {int * str; } ;



__attribute__((used)) static inline jsstr_t *FUNC_0(script_ctx_t *VAR_0, int VAR_1)
{
    call_frame_t *VAR_2 = VAR_0->call_ctx;
    return VAR_2->bytecode->instrs[VAR_2->ip].u.arg[VAR_1].str;
}
