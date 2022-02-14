
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwConfidence; scalar_t__ dwRevokedReason; } ;
typedef int HWND ;
typedef TYPE_1__ CRYPT_PROVIDER_CERT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(HWND VAR_9, const CRYPT_PROVIDER_CERT *VAR_10)
{

    FUNC_0(VAR_9, VAR_3, 0, -1);

    if (!(VAR_10->dwConfidence & VAR_0))
        FUNC_1(VAR_9, VAR_4);
    else if (!(VAR_10->dwConfidence & VAR_1))
        FUNC_1(VAR_9, VAR_5);
    else if (!(VAR_10->dwConfidence & VAR_2))
        FUNC_1(VAR_9, VAR_6);
    else if (VAR_10->dwRevokedReason)
        FUNC_1(VAR_9, VAR_7);
    else
        FUNC_1(VAR_9, VAR_8);
}
