
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev_addr; int irq; } ;
struct fe_priv {TYPE_1__* soc; int dev; } ;
struct TYPE_2__ {int tx_int; int rx_int; scalar_t__ (* fwd_config ) (struct fe_priv*) ;int (* set_mac ) (struct fe_priv*,int ) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,struct net_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct fe_priv*,int ) ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_4 ;
 int FUNC_4 (int,size_t) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct fe_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct fe_priv*,int ) ;
 scalar_t__ FUNC_9 (struct fe_priv*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5)
{
 struct fe_priv *VAR_6 = FUNC_7(VAR_5);
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_6->dev, VAR_5->irq, VAR_3, 0,
          FUNC_0(VAR_6->dev), VAR_5);
 if (VAR_8)
  return VAR_8;

 if (VAR_6->soc->set_mac)
  VAR_6->soc->set_mac(VAR_6, VAR_5->dev_addr);
 else
  FUNC_2(VAR_6, VAR_5->dev_addr);


 FUNC_4(0, VAR_0);

 FUNC_3(VAR_6->soc->tx_int | VAR_6->soc->rx_int);


 if (VAR_4[VAR_1])
  for (VAR_7 = 0; VAR_7 < 16; VAR_7 += 2)
   FUNC_5(((VAR_7 + 1) << 16) + VAR_7,
          VAR_4[VAR_1] +
          (VAR_7 * 2));

 if (VAR_6->soc->fwd_config(VAR_6))
  FUNC_6(VAR_5, "unable to get clock\n");

 if (VAR_4[VAR_2]) {
  FUNC_4(1, VAR_2);
  FUNC_4(0, VAR_2);
 }

 return 0;
}
