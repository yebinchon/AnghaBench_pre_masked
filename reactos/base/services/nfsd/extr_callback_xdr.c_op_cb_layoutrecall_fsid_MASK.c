
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cb_recall_file_args {int fsid; } ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(XDR *VAR_0, union cb_recall_file_args *VAR_1)
{
    bool_t VAR_2;

    VAR_2 = FUNC_1(VAR_0, &VAR_1->fsid);
    if (!VAR_2) { FUNC_0("layoutrecall_fsid.fsid"); goto out; }
out:
    return VAR_2;
}
