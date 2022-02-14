
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int jack_detecting; int regmap; int jack; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wm5100_priv *VAR_4)
{
 FUNC_0(VAR_4->dev, "Headphone detected\n");
 VAR_4->jack_detecting = 0;
 FUNC_2(VAR_4->jack, VAR_0,
       VAR_0);


 FUNC_1(VAR_4->regmap, VAR_3,
      VAR_1,
      7 << VAR_2);
}
