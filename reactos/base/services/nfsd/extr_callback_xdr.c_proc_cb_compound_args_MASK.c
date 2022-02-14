
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct cb_compound_args {int argarray_count; int argarray; int callback_ident; int minorversion; int tag; } ;
struct cb_argop {int dummy; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,char**,int *,int ,int,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;

bool_t FUNC_4(XDR *VAR_2, struct cb_compound_args *VAR_3)
{
    bool_t VAR_4;

    VAR_4 = FUNC_1(VAR_2, &VAR_3->tag);
    if (!VAR_4) { FUNC_0("compound.tag"); goto out; }

    VAR_4 = FUNC_3(VAR_2, &VAR_3->minorversion);
    if (!VAR_4) { FUNC_0("compound.minorversion"); goto out; }


    VAR_4 = FUNC_3(VAR_2, &VAR_3->callback_ident);
    if (!VAR_4) { FUNC_0("compound.callback_ident"); goto out; }

    VAR_4 = FUNC_2(VAR_2, (char**)&VAR_3->argarray,
        &VAR_3->argarray_count, VAR_0,
        sizeof(struct cb_argop), (xdrproc_t)VAR_1);
    if (!VAR_4) { FUNC_0("compound.argarray"); goto out; }
out:
    return VAR_4;
}
