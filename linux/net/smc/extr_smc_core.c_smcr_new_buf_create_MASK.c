
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_link_group {struct smc_link* lnk; } ;
struct smc_link {int roce_pd; int smcibdev; } ;
struct smc_buf_desc {int len; void* cpu_addr; TYPE_1__* sgt; int pages; int order; } ;
struct TYPE_2__ {int sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct smc_buf_desc* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct smc_buf_desc*) ;
 struct smc_buf_desc* FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int ,void*,int) ;
 int FUNC_8 (struct smc_link_group*,int,struct smc_buf_desc*) ;
 int FUNC_9 (int ,struct smc_buf_desc*,int ) ;
 int FUNC_10 (int ,int,struct smc_buf_desc*) ;

__attribute__((used)) static struct smc_buf_desc *FUNC_11(struct smc_link_group *VAR_13,
      bool VAR_14, int VAR_15)
{
 struct smc_buf_desc *VAR_16;
 struct smc_link *VAR_17;
 int VAR_18;


 VAR_16 = FUNC_4(sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return FUNC_0(-VAR_3);

 VAR_16->order = FUNC_2(VAR_15);
 VAR_16->pages = FUNC_1(VAR_4 | VAR_11 |
          VAR_9 | VAR_8 |
          VAR_10 | VAR_12,
          VAR_16->order);
 if (!VAR_16->pages) {
  FUNC_3(VAR_16);
  return FUNC_0(-VAR_2);
 }
 VAR_16->cpu_addr = (void *)FUNC_5(VAR_16->pages);


 VAR_17 = &VAR_13->lnk[VAR_7];
 VAR_18 = FUNC_6(&VAR_16->sgt[VAR_7], 1,
       VAR_4);
 if (VAR_18) {
  FUNC_8(VAR_13, VAR_14, VAR_16);
  return FUNC_0(VAR_18);
 }
 FUNC_7(VAR_16->sgt[VAR_7].sgl,
     VAR_16->cpu_addr, VAR_15);


 VAR_18 = FUNC_9(VAR_17->smcibdev, VAR_16,
          VAR_14 ? VAR_0 : VAR_1);

 if (VAR_18 != 1) {
  FUNC_8(VAR_13, VAR_14, VAR_16);
  return FUNC_0(-VAR_2);
 }


 if (VAR_14) {
  VAR_18 = FUNC_10(VAR_17->roce_pd,
           VAR_6 |
           VAR_5,
           VAR_16);
  if (VAR_18) {
   FUNC_8(VAR_13, VAR_14, VAR_16);
   return FUNC_0(VAR_18);
  }
 }

 VAR_16->len = VAR_15;
 return VAR_16;
}
