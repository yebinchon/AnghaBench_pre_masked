
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int srp_password; int srp_user; } ;
typedef int SSL ;
typedef TYPE_1__ CTX_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_3, int *VAR_4, void *VAR_5)
{
    CTX_DATA *VAR_6 = (CTX_DATA*)(VAR_5);
    if (FUNC_2(VAR_6->srp_user, FUNC_0(VAR_3)) != 0)
        return VAR_0;
    if (FUNC_1(VAR_3, VAR_6->srp_user,
                                    VAR_6->srp_password,
                                    "2048" ) < 0) {
        *VAR_4 = VAR_1;
        return VAR_0;
    }
    return VAR_2;
}
