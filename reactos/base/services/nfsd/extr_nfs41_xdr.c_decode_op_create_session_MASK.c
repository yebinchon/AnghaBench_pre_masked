
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int op; scalar_t__ res; } ;
typedef TYPE_1__ nfs_resop4 ;
struct TYPE_5__ {scalar_t__ csr_sequence; scalar_t__ csr_flags; int csr_back_chan_attrs; int csr_fore_chan_attrs; scalar_t__ csr_sessionid; } ;
typedef TYPE_2__ nfs41_create_session_res ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_5,
    nfs_resop4 *VAR_6)
{
    uint32_t VAR_7;
    nfs41_create_session_res *VAR_8 = (nfs41_create_session_res*)VAR_6->res;

    if (FUNC_0(VAR_6->op, VAR_3))
        return VAR_0;

    if (!FUNC_3(VAR_5, &VAR_7))
        return VAR_0;

    if (VAR_7 != VAR_1)
        return VAR_4;

    if (!FUNC_2(VAR_5, (char *)VAR_8->csr_sessionid, VAR_2))
        return VAR_0;


    if (!FUNC_3(VAR_5, &VAR_8->csr_sequence))
        return VAR_0;


    if (!FUNC_3(VAR_5, &VAR_8->csr_flags))
        return VAR_0;


    if (!FUNC_1(VAR_5, VAR_8->csr_fore_chan_attrs))
        return VAR_0;


    return FUNC_1(VAR_5, VAR_8->csr_back_chan_attrs);
}
