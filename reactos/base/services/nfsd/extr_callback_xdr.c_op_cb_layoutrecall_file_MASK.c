
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_recall_file {int stateid; int length; int offset; int fh; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(XDR *VAR_0, struct cb_recall_file *VAR_1)
{
    bool_t VAR_2;

    VAR_2 = FUNC_1(VAR_0, &VAR_1->fh);
    if (!VAR_2) { FUNC_0("layoutrecall_file.fh"); goto out; }

    VAR_2 = FUNC_3(VAR_0, &VAR_1->offset);
    if (!VAR_2) { FUNC_0("layoutrecall_file.offset"); goto out; }

    VAR_2 = FUNC_3(VAR_0, &VAR_1->length);
    if (!VAR_2) { FUNC_0("layoutrecall_file.length"); goto out; }

    VAR_2 = FUNC_2(VAR_0, &VAR_1->stateid);
    if (!VAR_2) { FUNC_0("layoutrecall_file.stateid"); goto out; }
out:
    return VAR_2;
}
