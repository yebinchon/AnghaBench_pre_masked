
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; int component; } ;





 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0, int VAR_1)
{
 switch (VAR_0->id) {
 case 128:
  FUNC_0(VAR_0->component, 130, VAR_1);
  FUNC_0(VAR_0->component, 129, VAR_1);
  break;
 case 130:
 case 129:
  FUNC_0(VAR_0->component, VAR_0->id, VAR_1);
  break;
 default:
  break;
 }

 return 0;
}
