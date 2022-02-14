
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai_link {TYPE_1__* platforms; } ;
struct resource {scalar_t__ start; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int const*) ;
 int FUNC_1 (struct device_node*,int ,struct resource*) ;
 int FUNC_2 (struct device_node*,char*) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int * FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (struct device_node*,char const*,int ) ;
 int FUNC_7 (char*,int ,char*,unsigned long long,struct device_node*) ;

int FUNC_8(struct device_node *VAR_2,
        const char *VAR_3,
        struct snd_soc_dai_link *VAR_4,
        unsigned int *VAR_5,
        unsigned int *VAR_6)
{
 struct resource VAR_7;
 struct device_node *VAR_8, *VAR_9;
 const __be32 *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_6(VAR_2, VAR_3, 0);
 if (!VAR_8)
  return -VAR_1;

 if (!FUNC_2(VAR_8, "fsl,ssi-dma-channel")) {
  FUNC_5(VAR_8);
  return -VAR_1;
 }
 VAR_11 = FUNC_1(VAR_8, 0, &VAR_7);
 if (VAR_11) {
  FUNC_5(VAR_8);
  return VAR_11;
 }
 FUNC_7((char *)VAR_4->platforms->name, VAR_0, "%llx.%pOFn",
   (unsigned long long) VAR_7.start, VAR_8);

 VAR_10 = FUNC_4(VAR_8, "cell-index", ((void*)0));
 if (!VAR_10) {
  FUNC_5(VAR_8);
  return -VAR_1;
 }
 *VAR_5 = FUNC_0(VAR_10);

 VAR_9 = FUNC_3(VAR_8);
 VAR_10 = FUNC_4(VAR_9, "cell-index", ((void*)0));
 if (!VAR_10) {
  FUNC_5(VAR_9);
  FUNC_5(VAR_8);
  return -VAR_1;
 }
 *VAR_6 = FUNC_0(VAR_10);

 FUNC_5(VAR_9);
 FUNC_5(VAR_8);

 return 0;
}
