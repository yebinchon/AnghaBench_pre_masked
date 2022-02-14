
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_resop {int xdr_ok; int res; int opnum; } ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,char*,int ,int ) ;

__attribute__((used)) static bool_t FUNC_2(XDR *VAR_2, struct cb_resop *VAR_3)
{

    VAR_3->xdr_ok = FUNC_1(VAR_2, &VAR_3->opnum, (char*)&VAR_3->res,
        VAR_1, VAR_0);
    if (!VAR_3->xdr_ok) { FUNC_0("resop.res"); goto out; }
out:
    return VAR_3->xdr_ok;
}
