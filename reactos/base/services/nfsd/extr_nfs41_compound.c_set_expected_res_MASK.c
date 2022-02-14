
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
struct TYPE_7__ {size_t argarray_count; TYPE_4__* argarray; } ;
struct TYPE_9__ {size_t resarray_count; TYPE_2__* resarray; } ;
struct TYPE_11__ {TYPE_1__ args; TYPE_3__ res; } ;
typedef TYPE_5__ nfs41_compound ;
struct TYPE_10__ {int op; } ;
struct TYPE_8__ {int op; } ;



__attribute__((used)) static void FUNC_0(
    nfs41_compound *VAR_0)
{
    uint32_t VAR_1;
    VAR_0->res.resarray_count = VAR_0->args.argarray_count;
    for (VAR_1 = 0; VAR_1 < VAR_0->res.resarray_count; VAR_1++)
        VAR_0->res.resarray[VAR_1].op = VAR_0->args.argarray[VAR_1].op;
}
