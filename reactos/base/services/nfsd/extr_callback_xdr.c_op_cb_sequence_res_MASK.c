
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct cb_sequence_res {int ok; int status; } ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,char*,int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool_t FUNC_2(XDR *VAR_2, struct cb_sequence_res *VAR_3)
{
    bool_t VAR_4;

    VAR_4 = FUNC_1(VAR_2, &VAR_3->status, (char*)&VAR_3->ok,
        VAR_0, (xdrproc_t)VAR_1);
    if (!VAR_4) { FUNC_0("seq:argop.args"); goto out; }
out:
    return VAR_4;
}
