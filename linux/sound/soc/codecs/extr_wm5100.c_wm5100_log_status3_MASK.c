
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct wm5100_priv *VAR_4, int VAR_5)
{
 if (VAR_5 & VAR_3)
  FUNC_0(VAR_4->dev, "Speaker shutdown warning\n");
 if (VAR_5 & VAR_2)
  FUNC_0(VAR_4->dev, "Speaker shutdown\n");
 if (VAR_5 & VAR_1)
  FUNC_0(VAR_4->dev, "SYSCLK underclocked\n");
 if (VAR_5 & VAR_0)
  FUNC_0(VAR_4->dev, "ASYNCCLK underclocked\n");
}
