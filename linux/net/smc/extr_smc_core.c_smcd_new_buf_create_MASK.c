
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smcd_cdc_msg {int dummy; } ;
struct smc_link_group {int dummy; } ;
struct smc_buf_desc {int len; void* cpu_addr; int pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smc_buf_desc* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct smc_buf_desc*) ;
 void* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct smc_link_group*,int,struct smc_buf_desc*) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static struct smc_buf_desc *FUNC_6(struct smc_link_group *VAR_7,
      bool VAR_8, int VAR_9)
{
 struct smc_buf_desc *VAR_10;
 int VAR_11;

 if (FUNC_3(VAR_9) > VAR_3)
  return FUNC_0(-VAR_0);


 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);
 if (VAR_8) {
  VAR_11 = FUNC_4(VAR_7, VAR_9, VAR_10);
  if (VAR_11) {
   FUNC_1(VAR_10);
   return FUNC_0(-VAR_0);
  }
  VAR_10->pages = FUNC_5(VAR_10->cpu_addr);

  VAR_10->len = VAR_9 - sizeof(struct smcd_cdc_msg);
 } else {
  VAR_10->cpu_addr = FUNC_2(VAR_9, VAR_2 |
          VAR_6 | VAR_5 |
          VAR_4);
  if (!VAR_10->cpu_addr) {
   FUNC_1(VAR_10);
   return FUNC_0(-VAR_0);
  }
  VAR_10->len = VAR_9;
 }
 return VAR_10;
}
