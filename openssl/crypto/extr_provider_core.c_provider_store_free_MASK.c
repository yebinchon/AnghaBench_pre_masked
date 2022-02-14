
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct provider_store_st {int lock; int providers; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct provider_store_st*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    struct provider_store_st *VAR_2 = VAR_1;

    if (VAR_2 == ((void*)0))
        return;
    FUNC_2(VAR_2->providers, VAR_0);
    FUNC_0(VAR_2->lock);
    FUNC_1(VAR_2);
}
