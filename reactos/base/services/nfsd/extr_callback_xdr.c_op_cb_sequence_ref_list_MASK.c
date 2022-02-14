
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct cb_sequence_ref_list {int call_count; int calls; int sessionid; } ;
struct cb_sequence_ref {int dummy; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,char**,int *,int,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static bool_t FUNC_3(XDR *VAR_2, struct cb_sequence_ref_list *VAR_3)
{
    bool_t VAR_4;

    VAR_4 = FUNC_2(VAR_2, VAR_3->sessionid, VAR_0);
    if (!VAR_4) { FUNC_0("sequence_ref_list.sessionid"); goto out; }

    VAR_4 = FUNC_1(VAR_2, (char**)&VAR_3->calls, &VAR_3->call_count,
        64, sizeof(struct cb_sequence_ref), (xdrproc_t)VAR_1);
    if (!VAR_4) { FUNC_0("sequence_ref_list.calls"); goto out; }
out:
    return VAR_4;
}
