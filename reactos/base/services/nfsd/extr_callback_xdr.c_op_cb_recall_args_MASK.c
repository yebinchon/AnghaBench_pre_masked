
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_recall_args {int fh; int truncate; int stateid; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(XDR *VAR_0, struct cb_recall_args *VAR_1)
{
    bool_t VAR_2;

    VAR_2 = FUNC_2(VAR_0, &VAR_1->stateid);
    if (!VAR_2) { FUNC_0("recall.stateid"); goto out; }

    VAR_2 = FUNC_3(VAR_0, &VAR_1->truncate);
    if (!VAR_2) { FUNC_0("recall.truncate"); goto out; }

    VAR_2 = FUNC_1(VAR_0, &VAR_1->fh);
    if (!VAR_2) { FUNC_0("recall.fh"); goto out; }
out:
    return VAR_2;
}
