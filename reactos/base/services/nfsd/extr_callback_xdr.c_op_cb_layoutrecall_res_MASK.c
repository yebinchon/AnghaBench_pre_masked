
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_layoutrecall_res {int status; } ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(XDR *VAR_0, struct cb_layoutrecall_res *VAR_1)
{
    bool_t VAR_2;

    VAR_2 = FUNC_1(VAR_0, &VAR_1->status);
    if (!VAR_2) { FUNC_0("layoutrecall_res.status"); goto out; }
out:
    return VAR_2;
}
