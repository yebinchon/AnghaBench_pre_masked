
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blake2_mac_data_st {int key; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct blake2_mac_data_st*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct blake2_mac_data_st *VAR_1 = VAR_0;

    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_1->key, sizeof(VAR_1->key));
        FUNC_1(VAR_1);
    }
}
