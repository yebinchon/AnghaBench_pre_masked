
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
struct cb_resop {int dummy; } ;
struct cb_compound_res {int resarray_count; int resarray; int tag; int status; } ;
typedef scalar_t__ bool_t ;
struct TYPE_6__ {scalar_t__ x_op; } ;
typedef TYPE_1__ XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct cb_compound_res*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char**,int *,int ,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;

bool_t FUNC_5(XDR *VAR_4, struct cb_compound_res *VAR_5)
{
    bool_t VAR_6;

    if (VAR_5 == ((void*)0))
        return VAR_1;

    VAR_6 = FUNC_4(VAR_4, &VAR_5->status);
    if (!VAR_6) { FUNC_0("compound_res.status"); goto out; }

    VAR_6 = FUNC_1(VAR_4, &VAR_5->tag);
    if (!VAR_6) { FUNC_0("compound_res.tag"); goto out; }

    VAR_6 = FUNC_3(VAR_4, (char**)&VAR_5->resarray,
        &VAR_5->resarray_count, VAR_0,
        sizeof(struct cb_resop), (xdrproc_t)VAR_3);
    if (!VAR_6) { FUNC_0("compound_res.resarray"); goto out; }
out:
    if (VAR_4->x_op == VAR_2)
        FUNC_2(VAR_5);
    return VAR_6;
}
