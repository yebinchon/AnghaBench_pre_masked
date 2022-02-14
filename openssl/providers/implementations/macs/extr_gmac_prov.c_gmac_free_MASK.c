
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmac_data_st {int cipher; int ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gmac_data_st*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct gmac_data_st *VAR_1 = VAR_0;

    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_1->ctx);
        FUNC_2(&VAR_1->cipher);
        FUNC_1(VAR_1);
    }
}
