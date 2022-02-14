
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int output; int input; } ;
struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ ENCODE_DATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(EVP_TEST *VAR_0)
{
    ENCODE_DATA *VAR_1 = VAR_0->data;

    FUNC_0(VAR_1->input);
    FUNC_0(VAR_1->output);
    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
