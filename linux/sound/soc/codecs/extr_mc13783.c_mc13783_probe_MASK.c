
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct mc13783_priv {scalar_t__ adc_ssi_port; scalar_t__ dac_ssi_port; int mc13xxx; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct mc13783_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_8)
{
 struct mc13783_priv *VAR_9 = FUNC_3(VAR_8);

 FUNC_4(VAR_8,
      FUNC_0(VAR_8->dev->parent, ((void*)0)));


 FUNC_2(VAR_9->mc13xxx, VAR_3, 0x25893);
 FUNC_2(VAR_9->mc13xxx, VAR_4, 0x00d35A);
 FUNC_2(VAR_9->mc13xxx, VAR_5, 0x420000);
 FUNC_2(VAR_9->mc13xxx, VAR_7, 0x013060);
 FUNC_2(VAR_9->mc13xxx, VAR_1, 0x180027);
 FUNC_2(VAR_9->mc13xxx, VAR_2, 0x0e0004);

 if (VAR_9->adc_ssi_port == VAR_6)
  FUNC_1(VAR_9->mc13xxx, VAR_1,
    VAR_0, 0);
 else
  FUNC_1(VAR_9->mc13xxx, VAR_1,
    VAR_0, VAR_0);

 if (VAR_9->dac_ssi_port == VAR_6)
  FUNC_1(VAR_9->mc13xxx, VAR_2,
    VAR_0, 0);
 else
  FUNC_1(VAR_9->mc13xxx, VAR_2,
    VAR_0, VAR_0);

 return 0;
}
