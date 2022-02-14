
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* delegation; int attrset; int rflags; int cinfo; int stateid; } ;
typedef TYPE_1__ nfs41_op_open_res_ok ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_7__ {int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_9(
    XDR *VAR_2,
    nfs41_op_open_res_ok *VAR_3)
{
    if (!FUNC_7(VAR_2, VAR_3->stateid))
        return VAR_0;

    if (!FUNC_5(VAR_2, &VAR_3->cinfo))
        return VAR_0;

    if (!FUNC_8(VAR_2, &VAR_3->rflags))
        return VAR_0;

    if (!FUNC_4(VAR_2, &VAR_3->attrset))
        return VAR_0;

    if (!FUNC_6(VAR_2, (enum_t*)&VAR_3->delegation->type))
        return VAR_0;

    switch (VAR_3->delegation->type)
    {
    case 131:
        return VAR_1;
    case 130:
        return FUNC_0(VAR_2, VAR_3->delegation);
    case 129:
        return FUNC_1(VAR_2, VAR_3->delegation);
    case 128:
        return FUNC_2(VAR_2, VAR_3->delegation);
    default:
        FUNC_3("decode_open_res_ok: delegation type %d not "
            "supported.\n", VAR_3->delegation->type);
        return VAR_0;
    }
}
