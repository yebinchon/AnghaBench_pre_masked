
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_getattr_args {int attr_request; int fh; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_3(XDR *VAR_0, struct cb_getattr_args *VAR_1)
{
    bool_t VAR_2;

    VAR_2 = FUNC_1(VAR_0, &VAR_1->fh);
    if (!VAR_2) { FUNC_0("getattr.fh"); goto out; }

    VAR_2 = FUNC_2(VAR_0, &VAR_1->attr_request);
    if (!VAR_2) { FUNC_0("getattr.attr_request"); goto out; }
out:
    return VAR_2;
}
