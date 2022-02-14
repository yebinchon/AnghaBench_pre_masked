
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sec_flavor; char* oid; scalar_t__ qop; int type; int oid_len; } ;
typedef TYPE_1__ nfs41_secinfo_info ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char**,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_3(
    XDR *VAR_4,
    nfs41_secinfo_info *VAR_5)
{
    if (!FUNC_2(VAR_4, &VAR_5->sec_flavor))
        return VAR_0;
    if (VAR_5->sec_flavor == VAR_2) {
        char *VAR_6 = VAR_5->oid;
        if (!FUNC_0(VAR_4, (char **)&VAR_6, &VAR_5->oid_len, VAR_1))
            return VAR_0;
        if (!FUNC_2(VAR_4, &VAR_5->qop))
            return VAR_0;
        if (!FUNC_1(VAR_4, (enum_t *)&VAR_5->type))
            return VAR_0;
    }
    return VAR_3;
}
