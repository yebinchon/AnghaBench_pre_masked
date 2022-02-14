
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int stateid_arg ;
struct TYPE_8__ {scalar_t__ out_len; scalar_t__ len; int buffer; int offset; } ;
typedef TYPE_2__ readwrite_upcall_args ;
struct TYPE_7__ {TYPE_2__ rw; } ;
struct TYPE_9__ {int state_ref; TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_3(nfs41_upcall *VAR_0)
{
    readwrite_upcall_args *VAR_1 = &VAR_0->args.rw;
    stateid_arg VAR_2;
    uint32_t VAR_3 = 0;
    int VAR_4;

    FUNC_0(VAR_0->state_ref, &VAR_2);
    VAR_4 = FUNC_1(VAR_0, &VAR_2);
out:
    VAR_1->out_len += VAR_3;
    return VAR_4;
}
