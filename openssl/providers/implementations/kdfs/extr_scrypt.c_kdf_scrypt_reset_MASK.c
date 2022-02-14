
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pass_len; int pass; int salt; } ;
typedef TYPE_1__ KDF_SCRYPT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    KDF_SCRYPT *VAR_1 = (KDF_SCRYPT *)VAR_0;

    FUNC_1(VAR_1->salt);
    FUNC_0(VAR_1->pass, VAR_1->pass_len);
    FUNC_2(VAR_1);
}
