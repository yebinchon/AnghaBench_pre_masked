
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int key; int salt; int pass; } ;
typedef TYPE_1__ PBE_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(EVP_TEST *VAR_0)
{
    PBE_DATA *VAR_1 = VAR_0->data;

    FUNC_0(VAR_1->pass);
    FUNC_0(VAR_1->salt);
    FUNC_0(VAR_1->key);
}
