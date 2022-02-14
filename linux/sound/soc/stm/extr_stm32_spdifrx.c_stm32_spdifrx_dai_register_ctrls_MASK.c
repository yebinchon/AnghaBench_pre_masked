
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1,
           FUNC_0(VAR_1));
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_2->component,
           VAR_0,
           FUNC_0(VAR_0));
}
