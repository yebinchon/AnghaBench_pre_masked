
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fetched_digest; int output; int input; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ DIGEST_DATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(EVP_TEST *VAR_1)
{
    DIGEST_DATA *VAR_2 = VAR_1->data;

    FUNC_2(VAR_2->input, VAR_0);
    FUNC_1(VAR_2->output);
    FUNC_0(VAR_2->fetched_digest);
}
