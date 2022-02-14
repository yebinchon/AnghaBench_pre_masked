
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int * mac; } ;
typedef TYPE_1__ MAC_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(EVP_TEST *VAR_0)
{
    MAC_DATA *VAR_1 = VAR_0->data;

    if (VAR_1->mac != ((void*)0))
        return FUNC_0(VAR_0);
    return FUNC_1(VAR_0);
}
