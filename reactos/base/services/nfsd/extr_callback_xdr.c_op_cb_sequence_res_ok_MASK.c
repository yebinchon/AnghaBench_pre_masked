
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_sequence_res_ok {int target_highest_slotid; int highest_slotid; int slotid; int sequenceid; int sessionid; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_3(XDR *VAR_1, struct cb_sequence_res_ok *VAR_2)
{
    bool_t VAR_3;

    VAR_3 = FUNC_1(VAR_1, VAR_2->sessionid, VAR_0);
    if (!VAR_3) { FUNC_0("sequence_res.sessionid"); goto out; }

    VAR_3 = FUNC_2(VAR_1, &VAR_2->sequenceid);
    if (!VAR_3) { FUNC_0("sequence_res.sequenceid"); goto out; }

    VAR_3 = FUNC_2(VAR_1, &VAR_2->slotid);
    if (!VAR_3) { FUNC_0("sequence_res.slotid"); goto out; }

    VAR_3 = FUNC_2(VAR_1, &VAR_2->highest_slotid);
    if (!VAR_3) { FUNC_0("sequence_res.highest_slotid"); goto out; }

    VAR_3 = FUNC_2(VAR_1, &VAR_2->target_highest_slotid);
    if (!VAR_3) { FUNC_0("sequence_res.target_highest_slotid"); goto out; }
out:
    return VAR_3;
}
