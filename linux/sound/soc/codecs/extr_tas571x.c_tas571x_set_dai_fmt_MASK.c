
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas571x_private {unsigned int format; } ;
struct snd_soc_dai {int component; } ;


 struct tas571x_private* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0, unsigned int VAR_1)
{
 struct tas571x_private *VAR_2 = FUNC_0(VAR_0->component);

 VAR_2->format = VAR_1;

 return 0;
}
