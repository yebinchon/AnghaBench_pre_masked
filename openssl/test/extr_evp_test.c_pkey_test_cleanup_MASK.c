
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int ctx; int output; int input; } ;
typedef TYPE_1__ PKEY_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(EVP_TEST *VAR_0)
{
    PKEY_DATA *VAR_1 = VAR_0->data;

    FUNC_1(VAR_1->input);
    FUNC_1(VAR_1->output);
    FUNC_0(VAR_1->ctx);
}
