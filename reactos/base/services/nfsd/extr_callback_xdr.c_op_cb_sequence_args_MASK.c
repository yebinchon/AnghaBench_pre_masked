
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct cb_sequence_ref_list {int dummy; } ;
struct cb_sequence_args {int ref_list_count; int ref_lists; int cachethis; int highest_slotid; int slotid; int sequenceid; int sessionid; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,char**,int *,int,int,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_5(XDR *VAR_2, struct cb_sequence_args *VAR_3)
{
    bool_t VAR_4;

    VAR_4 = FUNC_3(VAR_2, VAR_3->sessionid, VAR_0);
    if (!VAR_4) { FUNC_0("sequence_args.sessionid"); goto out; }

    VAR_4 = FUNC_4(VAR_2, &VAR_3->sequenceid);
    if (!VAR_4) { FUNC_0("sequence_args.sequenceid"); goto out; }

    VAR_4 = FUNC_4(VAR_2, &VAR_3->slotid);
    if (!VAR_4) { FUNC_0("sequence_args.slotid"); goto out; }

    VAR_4 = FUNC_4(VAR_2, &VAR_3->highest_slotid);
    if (!VAR_4) { FUNC_0("sequence_args.highest_slotid"); goto out; }

    VAR_4 = FUNC_2(VAR_2, &VAR_3->cachethis);
    if (!VAR_4) { FUNC_0("sequence_args.cachethis"); goto out; }

    VAR_4 = FUNC_1(VAR_2, (char**)&VAR_3->ref_lists,
        &VAR_3->ref_list_count, 64, sizeof(struct cb_sequence_ref_list),
        (xdrproc_t)VAR_1);
    if (!VAR_4) { FUNC_0("sequence_args.ref_lists"); goto out; }
out:
    return VAR_4;
}
