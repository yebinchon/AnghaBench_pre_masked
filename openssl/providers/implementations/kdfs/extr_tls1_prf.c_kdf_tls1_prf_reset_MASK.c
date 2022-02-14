
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seedlen; int seed; int seclen; int sec; int P_sha1; int P_hash; } ;
typedef TYPE_1__ TLS1_PRF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    TLS1_PRF *VAR_1 = (TLS1_PRF *)VAR_0;

    FUNC_0(VAR_1->P_hash);
    FUNC_0(VAR_1->P_sha1);
    FUNC_2(VAR_1->sec, VAR_1->seclen);
    FUNC_1(VAR_1->seed, VAR_1->seedlen);
    FUNC_3(VAR_1, 0, sizeof(*VAR_1));
}
