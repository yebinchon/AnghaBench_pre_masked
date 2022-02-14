
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct cx2072x_priv {int en_aec_ref; } ;


 struct cx2072x_priv* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0)
{
 struct cx2072x_priv *VAR_1 =
  FUNC_0(VAR_0->component);

 VAR_1->en_aec_ref = 1;
 return 0;
}
