
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {struct TYPE_5__* keyname; int genctx; } ;
typedef TYPE_1__ KEYGEN_TEST_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(EVP_TEST *VAR_0)
{
    KEYGEN_TEST_DATA *VAR_1 = VAR_0->data;

    FUNC_0(VAR_1->genctx);
    FUNC_1(VAR_1->keyname);
    FUNC_1(VAR_0->data);
    VAR_0->data = ((void*)0);
}
