
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm512x_priv {int supplies; int sclk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pcm512x_priv* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct device *VAR_0)
{
 struct pcm512x_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0);
 if (!FUNC_1(VAR_1->sclk))
  FUNC_2(VAR_1->sclk);
 FUNC_5(FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
}
