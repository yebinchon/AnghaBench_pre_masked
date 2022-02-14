
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int uint32_t ;
struct TYPE_4__ {int op; scalar_t__ arg; } ;
typedef TYPE_1__ nfs_argop4 ;
struct TYPE_5__ {int csa_cb_program; int csa_back_chan_attrs; int csa_fore_chan_attrs; int csa_flags; int csa_sequence; int csa_clientid; int * csa_cb_secparams; } ;
typedef TYPE_2__ nfs41_create_session_args ;
typedef int nfs41_callback_secparms ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char**,int*,int,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    nfs41_create_session_args *VAR_5 = (nfs41_create_session_args*)VAR_4->arg;
    nfs41_callback_secparms *VAR_6 = VAR_5->csa_cb_secparams;
    uint32_t VAR_7 = 2;

    if (FUNC_0(VAR_4->op, VAR_1))
        return VAR_0;


    if (!FUNC_3(VAR_3, &VAR_5->csa_clientid))
        return VAR_0;


    if (!FUNC_4(VAR_3, &VAR_5->csa_sequence))
        return VAR_0;


    if (!FUNC_4(VAR_3, &VAR_5->csa_flags))
        return VAR_0;


    if (!FUNC_2(VAR_3, &VAR_5->csa_fore_chan_attrs))
        return VAR_0;


    if (!FUNC_2(VAR_3, &VAR_5->csa_back_chan_attrs))
        return VAR_0;


    if (!FUNC_4(VAR_3, &VAR_5->csa_cb_program))
        return VAR_0;

    return FUNC_1(VAR_3, (char **)&VAR_6, &VAR_7,
        3, sizeof(nfs41_callback_secparms), (xdrproc_t) VAR_2);
}
