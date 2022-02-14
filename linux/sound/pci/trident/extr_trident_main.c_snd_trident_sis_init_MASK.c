
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {int spdif_bits; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct snd_trident*) ;
 int FUNC_3 (struct snd_trident*) ;

__attribute__((used)) static int FUNC_4(struct snd_trident *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_2(VAR_1)) < 0)
  return VAR_2;

 FUNC_3(VAR_1);


 FUNC_1(VAR_1->spdif_bits, FUNC_0(VAR_1, VAR_0));

 return 0;
}
