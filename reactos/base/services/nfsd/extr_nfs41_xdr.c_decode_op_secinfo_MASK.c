
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_4__ {int op; scalar_t__ res; } ;
typedef TYPE_1__ nfs_resop4 ;
struct TYPE_5__ {scalar_t__ status; int count; int * secinfo; } ;
typedef TYPE_2__ nfs41_secinfo_noname_res ;
typedef int nfs41_secinfo_info ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char**,int *,int ,int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_3(
    XDR *VAR_6,
    nfs_resop4 *VAR_7)
{
    nfs41_secinfo_noname_res *VAR_8 = (nfs41_secinfo_noname_res *)VAR_7->res;
    nfs41_secinfo_info *VAR_9 = VAR_8->secinfo;

    if (FUNC_0(VAR_7->op, VAR_3))
        return VAR_0;

    if (!FUNC_2(VAR_6, &VAR_8->status))
        return VAR_0;

    if (VAR_8->status == VAR_2)
        return FUNC_1(VAR_6, (char**)&VAR_9, &VAR_8->count,
            VAR_1, sizeof(nfs41_secinfo_info), (xdrproc_t)VAR_5);

    return VAR_4;
}
