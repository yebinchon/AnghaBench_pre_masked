
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ukm_len; int ukm; int secret_len; int secret; int digest; } ;
typedef TYPE_1__ KDF_X942 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    KDF_X942 *VAR_1 = (KDF_X942 *)VAR_0;

    FUNC_2(&VAR_1->digest);
    FUNC_0(VAR_1->secret, VAR_1->secret_len);
    FUNC_0(VAR_1->ukm, VAR_1->ukm_len);
    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
