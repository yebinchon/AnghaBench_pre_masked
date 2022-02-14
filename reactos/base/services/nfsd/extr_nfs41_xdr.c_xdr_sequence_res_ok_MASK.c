
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sr_status_flags; int sr_target_highest_slotid; int sr_highest_slotid; int sr_slotid; int sr_sequenceid; scalar_t__ sr_sessionid; } ;
typedef TYPE_1__ nfs41_sequence_res_ok ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    nfs41_sequence_res_ok *VAR_3)
{
    if (!FUNC_0(VAR_2, (char *)VAR_3->sr_sessionid, VAR_1))
        return VAR_0;

    if (!FUNC_1(VAR_2, &VAR_3->sr_sequenceid))
        return VAR_0;

    if (!FUNC_1(VAR_2, &VAR_3->sr_slotid))
        return VAR_0;

    if (!FUNC_1(VAR_2, &VAR_3->sr_highest_slotid))
        return VAR_0;

    if (!FUNC_1(VAR_2, &VAR_3->sr_target_highest_slotid))
        return VAR_0;

    return FUNC_1(VAR_2, &VAR_3->sr_status_flags);
}
