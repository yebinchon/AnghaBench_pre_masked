
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_galaxy {int config; scalar_t__ config_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_galaxy*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_galaxy *VAR_2, u32 VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_1; VAR_4; VAR_4--) {
  u8 VAR_5 = FUNC_1(VAR_2->config_port + VAR_4 - 1);
  VAR_2->config = (VAR_2->config << 8) | VAR_5;
 }
 VAR_3 |= VAR_2->config & VAR_0;
 FUNC_0(VAR_2, VAR_3);
}
