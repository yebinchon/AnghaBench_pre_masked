
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int output_len; int output; int ctx; int input; } ;
struct TYPE_4__ {char* err; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ DIGESTSIGN_DATA ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(EVP_TEST *VAR_1)
{
    DIGESTSIGN_DATA *VAR_2 = VAR_1->data;

    if (!FUNC_1(VAR_2->input, VAR_0, VAR_2->ctx)) {
        VAR_1->err = "DIGESTUPDATE_ERROR";
        return 1;
    }

    if (FUNC_0(VAR_2->ctx, VAR_2->output,
                              VAR_2->output_len) <= 0)
        VAR_1->err = "VERIFY_ERROR";
    return 1;
}
