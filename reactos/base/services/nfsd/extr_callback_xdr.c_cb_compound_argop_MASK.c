
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_argop {int args; int opnum; } ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,char*,int ,int ) ;

__attribute__((used)) static bool_t FUNC_2(XDR *VAR_2, struct cb_argop *VAR_3)
{
    bool_t VAR_4;

    VAR_4 = FUNC_1(VAR_2, &VAR_3->opnum, (char*)&VAR_3->args,
        VAR_1, VAR_0);
    if (!VAR_4) { FUNC_0("cmb:argop.args"); goto out; }
out:
    return VAR_4;
}
