
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* co_ownerid; int co_ownerid_len; int * co_verifier; } ;
typedef TYPE_1__ client_owner4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char**,int *,int ) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_3,
    client_owner4 *VAR_4)
{
    unsigned char *VAR_5 = VAR_4->co_ownerid;
    if (!FUNC_1(VAR_3, (char *)&VAR_4->co_verifier[0], VAR_2))
        return VAR_0;

    return FUNC_0(VAR_3, (char **)&VAR_5, &VAR_4->co_ownerid_len, VAR_1);
}
