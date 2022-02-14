
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info_sector {void* boot_sign; void* next_cluster; void* free_clusters; void* signature; void* magic; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct info_sector*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct info_sector *VAR_0)
{
    FUNC_1(VAR_0, 0, sizeof (struct info_sector));
    VAR_0->magic = FUNC_0(0x41615252);
    VAR_0->signature = FUNC_0(0x61417272);
    VAR_0->free_clusters = FUNC_0(-1);
    VAR_0->next_cluster = FUNC_0(2);
    VAR_0->boot_sign = FUNC_0(0xaa550000);
}
