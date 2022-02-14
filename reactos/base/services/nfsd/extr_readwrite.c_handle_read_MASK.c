
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int stateid_arg ;
struct TYPE_8__ {scalar_t__ out_len; int len; int buffer; int offset; } ;
typedef TYPE_2__ readwrite_upcall_args ;
struct TYPE_7__ {TYPE_2__ rw; } ;
struct TYPE_9__ {int state_ref; TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;
typedef scalar_t__ ULONG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_3(nfs41_upcall *VAR_2)
{
    readwrite_upcall_args *VAR_3 = &VAR_2->args.rw;
    stateid_arg VAR_4;
    ULONG VAR_5 = 0;
    int VAR_6 = VAR_1;

    FUNC_0(VAR_2->state_ref, &VAR_4);
    VAR_6 = FUNC_1(VAR_2, &VAR_4);

    VAR_3->out_len += VAR_5;
out:
    return VAR_6;
}
