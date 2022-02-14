
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_vendor_value_elem {int token; int value; } ;
struct skl_module_res {int ibs; int obs; int is_pages; int cpc; int dma_buffer_size; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,struct snd_soc_tplg_vendor_value_elem*,struct skl_module_res*,int,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
  struct snd_soc_tplg_vendor_value_elem *VAR_2,
  struct skl_module_res *VAR_3,
  int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 0;

 if (!VAR_3)
  return -VAR_0;

 switch (VAR_2->token) {
 case 134:
  VAR_3->dma_buffer_size = VAR_2->value;
  break;

 case 136:
  VAR_3->cpc = VAR_2->value;
  break;

 case 129:
  VAR_3->is_pages = VAR_2->value;
  break;

 case 128:
  VAR_3->obs = VAR_2->value;
  break;

 case 131:
  VAR_3->ibs = VAR_2->value;
  break;

 case 132:
 case 133:
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  break;

 case 135:
 case 130:

  break;

 default:
  FUNC_0(VAR_1, "Not a res type token: %d", VAR_2->token);
  return -VAR_0;

 }
 VAR_7++;

 return VAR_7;
}
