
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mt7620_gsw {scalar_t__ irq; } ;
struct fe_priv {TYPE_1__* soc; struct device_node* switch_np; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int compatible; } ;
struct TYPE_3__ {struct mt7620_gsw* swpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct mt7620_gsw*,struct device_node*) ;
 int FUNC_3 (struct device_node*,int ) ;
 struct platform_device* FUNC_4 (struct device_node*) ;
 struct mt7620_gsw* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (scalar_t__,int ,int ,char*,struct fe_priv*) ;

int FUNC_7(struct fe_priv *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->switch_np;
 struct platform_device *VAR_6 = FUNC_4(VAR_5);
 struct mt7620_gsw *VAR_7;

 if (!VAR_6)
  return -VAR_1;

 if (!FUNC_3(VAR_5, VAR_3->compatible))
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_6);
 VAR_4->soc->swpriv = VAR_7;

 if (VAR_7->irq) {
  FUNC_6(VAR_7->irq, VAR_2, 0,
       "gsw", VAR_4);
  FUNC_0(VAR_7->irq);
 }

 FUNC_2(VAR_7, VAR_5);

 if (VAR_7->irq)
  FUNC_1(VAR_7->irq);

 return 0;
}
