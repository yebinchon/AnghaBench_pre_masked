
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct ag71xx {int* fifodata; TYPE_2__* pdev; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct ag71xx*,int ,int) ;
 int FUNC_1 (struct ag71xx*,int ,int) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;

__attribute__((used)) static void FUNC_3(struct ag71xx *VAR_16)
{
 struct device_node *VAR_17 = VAR_16->pdev->dev.of_node;
 u32 VAR_18 = VAR_11;


 if (FUNC_2(VAR_17, "flow-control"))
  VAR_18 |= VAR_13 | VAR_12;
 FUNC_1(VAR_16, VAR_5, VAR_18);

 FUNC_0(VAR_16, VAR_6,
    VAR_15 | VAR_14);


 FUNC_1(VAR_16, VAR_7, 0);


 FUNC_1(VAR_16, VAR_0, VAR_8);
 FUNC_1(VAR_16, VAR_1, VAR_16->fifodata[0]);
 FUNC_1(VAR_16, VAR_2, VAR_16->fifodata[1]);
 FUNC_1(VAR_16, VAR_3, VAR_9);
 FUNC_1(VAR_16, VAR_4, VAR_10);
}
