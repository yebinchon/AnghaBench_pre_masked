
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct davinci_mcasp {int auxclk_fs_ratio; TYPE_1__* dev; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct davinci_mcasp *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev->of_node;
 int VAR_2;
 u32 VAR_3;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_0(VAR_1, "auxclk-fs-ratio", &VAR_3);
 if (VAR_2 >= 0)
  VAR_0->auxclk_fs_ratio = VAR_3;

 return 0;
}
