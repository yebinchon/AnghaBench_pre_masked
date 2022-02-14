
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* output; struct TYPE_6__* osin; int input; int ctx; } ;
struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ DIGESTSIGN_DATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(EVP_TEST *VAR_1)
{
    DIGESTSIGN_DATA *VAR_2 = VAR_1->data;

    FUNC_0(VAR_2->ctx);
    FUNC_2(VAR_2->input, VAR_0);
    FUNC_1(VAR_2->osin);
    FUNC_1(VAR_2->output);
    FUNC_1(VAR_2);
    VAR_1->data = ((void*)0);
}
