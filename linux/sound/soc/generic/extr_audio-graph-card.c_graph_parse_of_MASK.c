
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dummy; } ;
struct link_info {int cpu; } ;
struct asoc_simple_priv {int dummy; } ;
typedef int li ;


 int FUNC_0 (struct snd_soc_card*,int *) ;
 int FUNC_1 (struct snd_soc_card*,int *) ;
 int FUNC_2 (struct snd_soc_card*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct asoc_simple_priv*,struct link_info*,int ,int ) ;
 int FUNC_4 (struct link_info*,int ,int) ;
 struct snd_soc_card* FUNC_5 (struct asoc_simple_priv*) ;

__attribute__((used)) static int FUNC_6(struct asoc_simple_priv *VAR_2)
{
 struct snd_soc_card *VAR_3 = FUNC_5(VAR_2);
 struct link_info VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3, ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 for (VAR_4.cpu = 1; VAR_4.cpu >= 0; VAR_4.cpu--) {
  VAR_5 = FUNC_3(VAR_2, &VAR_4,
       VAR_0,
       VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return FUNC_0(VAR_3, ((void*)0));
}
