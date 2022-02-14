
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int output; int input; int salt; int custom; int iv; int key; int alg; int controls; int mac_name; int mac; } ;
typedef TYPE_1__ MAC_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(EVP_TEST *VAR_1)
{
    MAC_DATA *VAR_2 = VAR_1->data;

    FUNC_0(VAR_2->mac);
    FUNC_1(VAR_2->mac_name);
    FUNC_2(VAR_2->controls, VAR_0);
    FUNC_1(VAR_2->alg);
    FUNC_1(VAR_2->key);
    FUNC_1(VAR_2->iv);
    FUNC_1(VAR_2->custom);
    FUNC_1(VAR_2->salt);
    FUNC_1(VAR_2->input);
    FUNC_1(VAR_2->output);
}
