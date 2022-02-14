
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int args; int type; } ;
struct cb_layoutrecall_args {TYPE_1__ recall; int changed; int iomode; int type; } ;
typedef int enum_t ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,char*,int ,int ) ;

__attribute__((used)) static bool_t FUNC_4(XDR *VAR_2, struct cb_layoutrecall_args *VAR_3)
{
    bool_t VAR_4;

    VAR_4 = FUNC_2(VAR_2, (enum_t*)&VAR_3->type);
    if (!VAR_4) { FUNC_0("layoutrecall_args.type"); goto out; }

    VAR_4 = FUNC_2(VAR_2, (enum_t*)&VAR_3->iomode);
    if (!VAR_4) { FUNC_0("layoutrecall_args.iomode"); goto out; }

    VAR_4 = FUNC_1(VAR_2, &VAR_3->changed);
    if (!VAR_4) { FUNC_0("layoutrecall_args.changed"); goto out; }

    VAR_4 = FUNC_3(VAR_2, (enum_t*)&VAR_3->recall.type,
        (char*)&VAR_3->recall.args, VAR_1, VAR_0);
    if (!VAR_4) { FUNC_0("layoutrecall_args.recall"); goto out; }
out:
    return VAR_4;
}
