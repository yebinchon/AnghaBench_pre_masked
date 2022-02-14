
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct wm8985_priv {TYPE_1__* supplies; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_8__ {int supply; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,size_t,TYPE_1__*) ;
 int FUNC_3 (size_t,TYPE_1__*) ;
 int FUNC_4 (size_t,TYPE_1__*) ;
 struct wm8985_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,TYPE_1__,int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_4)
{
 size_t VAR_5;
 struct wm8985_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_4);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_6->supplies); VAR_5++)
  VAR_6->supplies[VAR_5].supply = VAR_3[VAR_5];

 VAR_7 = FUNC_2(VAR_4->dev, FUNC_0(VAR_6->supplies),
     VAR_6->supplies);
 if (VAR_7) {
  FUNC_1(VAR_4->dev, "Failed to request supplies: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_4(FUNC_0(VAR_6->supplies),
        VAR_6->supplies);
 if (VAR_7) {
  FUNC_1(VAR_4->dev, "Failed to enable supplies: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_8(VAR_4);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4->dev, "Failed to issue reset: %d\n", VAR_7);
  goto err_reg_enable;
 }


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); ++VAR_5)
  FUNC_6(VAR_4, VAR_2[VAR_5],
        0x100, 0x100);

 FUNC_6(VAR_4, VAR_1, VAR_0,
       VAR_0);

 FUNC_7(VAR_4);

 return 0;

err_reg_enable:
 FUNC_3(FUNC_0(VAR_6->supplies), VAR_6->supplies);
 return VAR_7;
}
