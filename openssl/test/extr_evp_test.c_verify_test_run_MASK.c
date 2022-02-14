
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* err; TYPE_1__* data; } ;
struct TYPE_4__ {int input_len; int input; int output_len; int output; int ctx; } ;
typedef TYPE_1__ PKEY_DATA ;
typedef TYPE_2__ EVP_TEST ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(EVP_TEST *VAR_0)
{
    PKEY_DATA *VAR_1 = VAR_0->data;

    if (FUNC_0(VAR_1->ctx, VAR_1->output, VAR_1->output_len,
                        VAR_1->input, VAR_1->input_len) <= 0)
        VAR_0->err = "VERIFY_ERROR";
    return 1;
}
