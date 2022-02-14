
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct msdc_host {int dummy; } ;
struct msdc_dma {scalar_t__ bd_addr; scalar_t__ gpd_addr; struct gpd* bd; struct gpd* gpd; } ;
struct gpd {int bdp; void* next; void* ptr; } ;
struct bd {int bdp; void* next; void* ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpd*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct msdc_host *VAR_1, struct msdc_dma *VAR_2)
{
 struct gpd *VAR_3 = VAR_2->gpd;
 struct bd *VAR_4 = VAR_2->bd;
 int VAR_5;





 FUNC_0(VAR_3, 0, sizeof(struct gpd) * 2);

 VAR_3->bdp = 1;
 VAR_3->ptr = (void *)VAR_2->bd_addr;
 VAR_3->next = (void *)((u32)VAR_2->gpd_addr + sizeof(struct gpd));

 FUNC_0(VAR_4, 0, sizeof(struct bd) * VAR_0);
 for (VAR_5 = 0; VAR_5 < (VAR_0 - 1); VAR_5++)
  VAR_4[VAR_5].next = (void *)(VAR_2->bd_addr + sizeof(*VAR_4) * (VAR_5 + 1));
}
