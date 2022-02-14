
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; scalar_t__ arg; } ;
typedef TYPE_1__ nfs_argop4 ;
struct TYPE_5__ {int sa_cachethis; int sa_highest_slotid; int sa_slotid; int sa_sequenceid; scalar_t__ sa_sessionid; } ;
typedef TYPE_2__ nfs41_sequence_args ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    nfs41_sequence_args *VAR_5 = (nfs41_sequence_args*)VAR_4->arg;

    if (FUNC_0(VAR_4->op, VAR_2))
        return VAR_0;

    if (!FUNC_2(VAR_3, (char *)VAR_5->sa_sessionid, VAR_1))
        return VAR_0;

    if (!FUNC_3(VAR_3, &VAR_5->sa_sequenceid))
        return VAR_0;

    if (!FUNC_3(VAR_3, &VAR_5->sa_slotid))
        return VAR_0;

    if (!FUNC_3(VAR_3, &VAR_5->sa_highest_slotid))
        return VAR_0;

    return FUNC_1(VAR_3, &VAR_5->sa_cachethis);
}
