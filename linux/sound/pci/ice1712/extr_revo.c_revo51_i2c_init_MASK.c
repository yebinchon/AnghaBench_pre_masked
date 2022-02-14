
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pt2258 {int i2c_dev; TYPE_2__* i2c_bus; int card; } ;
struct snd_ice1712 {TYPE_2__* i2c; int card; struct revo51_spec* spec; } ;
struct revo51_spec {struct snd_pt2258* pt2258; int dev; } ;
struct TYPE_4__ {int * bit; } ;
struct TYPE_5__ {TYPE_1__ hw_ops; struct snd_ice1712* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct revo51_spec* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int *,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,char*,int,int *) ;
 int FUNC_3 (struct snd_pt2258*) ;

__attribute__((used)) static int FUNC_4(struct snd_ice1712 *VAR_3,
      struct snd_pt2258 *VAR_4)
{
 struct revo51_spec *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_3->spec = VAR_5;


 VAR_6 = FUNC_1(VAR_3->card, "ICE1724 GPIO6", ((void*)0), &VAR_3->i2c);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3->i2c->private_data = VAR_3;
 VAR_3->i2c->hw_ops.bit = &VAR_2;


 VAR_6 = FUNC_2(VAR_3->i2c, "PT2258", 0x40, &VAR_5->dev);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->card = VAR_3->card;
 VAR_4->i2c_bus = VAR_3->i2c;
 VAR_4->i2c_dev = VAR_5->dev;
 VAR_5->pt2258 = VAR_4;

 FUNC_3(VAR_4);

 return 0;
}
