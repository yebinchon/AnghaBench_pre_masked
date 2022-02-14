
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gsw_mt753x {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (struct device_node*,char*,int*) ;
 int FUNC_1 (struct gsw_mt753x*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gsw_mt753x *VAR_6)
{
 u32 VAR_7 = 0;
 struct device_node *VAR_8 = VAR_6->dev->of_node;


 FUNC_1(VAR_6, VAR_1[0], VAR_0[0]);

 FUNC_0(VAR_8, "mediatek,mdio_master_pinmux", &VAR_7);


 if (VAR_7 > 0 && VAR_7 <= 2) {
  VAR_7--;
  FUNC_1(VAR_6, VAR_3[VAR_7],
        VAR_2[VAR_7]);
  FUNC_1(VAR_6, VAR_5[VAR_7],
        VAR_4[VAR_7]);
 }

 return 0;
}
