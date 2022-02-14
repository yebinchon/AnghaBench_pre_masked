
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_10__ {TYPE_2__* resarray; int resarray_count; } ;
struct TYPE_9__ {TYPE_1__* argarray; int argarray_count; } ;
struct TYPE_11__ {TYPE_4__ res; TYPE_3__ args; } ;
typedef TYPE_5__ nfs41_compound ;
struct TYPE_8__ {size_t op; void* res; } ;
struct TYPE_7__ {size_t op; void* arg; } ;



void FUNC_0(
    nfs41_compound *VAR_0,
    uint32_t VAR_1,
    void *VAR_2,
    void *VAR_3)
{
    const uint32_t VAR_4 = VAR_0->args.argarray_count++;
    const uint32_t VAR_5 = VAR_0->res.resarray_count++;
    VAR_0->args.argarray[VAR_4].op = VAR_1;
    VAR_0->args.argarray[VAR_4].arg = VAR_2;
    VAR_0->res.resarray[VAR_5].op = VAR_1;
    VAR_0->res.resarray[VAR_5].res = VAR_3;
}
