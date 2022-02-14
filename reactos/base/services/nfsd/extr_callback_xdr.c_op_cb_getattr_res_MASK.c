
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cb_getattr_res {scalar_t__ status; int info; } ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ fattr4 ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static bool_t FUNC_4(XDR *VAR_1, struct cb_getattr_res *VAR_2)
{
    bool_t VAR_3;

    VAR_3 = FUNC_2(VAR_1, &VAR_2->status);
    if (!VAR_3) { FUNC_0("getattr.status"); goto out; }

    if (VAR_2->status == VAR_0) {
        fattr4 VAR_4 = { 0 };

        VAR_3 = FUNC_1(&VAR_2->info, &VAR_4);
        if (!VAR_3) { goto out; }

        VAR_3 = FUNC_3(VAR_1, &VAR_4);
        if (!VAR_3) { FUNC_0("getattr.obj_attributes"); goto out; }
    }
out:
    return VAR_3;
}
