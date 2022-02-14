
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_sequence_ref {int slotid; int sequenceid; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(XDR *VAR_0, struct cb_sequence_ref *VAR_1)
{
    bool_t VAR_2;

    VAR_2 = FUNC_1(VAR_0, &VAR_1->sequenceid);
    if (!VAR_2) { FUNC_0("sequence_ref.sequenceid"); goto out; }

    VAR_2 = FUNC_1(VAR_0, &VAR_1->slotid);
    if (!VAR_2) { FUNC_0("sequence_ref.slotid"); goto out; }
out:
    return VAR_2;
}
