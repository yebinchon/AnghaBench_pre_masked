
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {scalar_t__ device; int card; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char const*,struct snd_trident*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct snd_trident *VAR_2)
{
 const char *VAR_3 = "trident";

 if (VAR_2->device == VAR_0)
  VAR_3 = "sis7018";
 FUNC_0(VAR_2->card, VAR_3, VAR_2, VAR_1);
}
