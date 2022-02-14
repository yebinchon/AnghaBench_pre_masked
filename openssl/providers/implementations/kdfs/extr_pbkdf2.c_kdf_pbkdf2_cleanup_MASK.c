
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pass_len; int pass; int salt; int digest; } ;
typedef TYPE_1__ KDF_PBKDF2 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(KDF_PBKDF2 *VAR_0)
{
    FUNC_3(&VAR_0->digest);
    FUNC_1(VAR_0->salt);
    FUNC_0(VAR_0->pass, VAR_0->pass_len);
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));
}
