
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_galaxy {scalar_t__ config_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct snd_galaxy *VAR_2, u32 VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_2->config_port + VAR_0);
 int VAR_5;

 FUNC_1(VAR_4 | 0x80, VAR_2->config_port + VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_1(VAR_3, VAR_2->config_port + VAR_5);
  VAR_3 >>= 8;
 }
 FUNC_1(VAR_4 & 0x7f, VAR_2->config_port + VAR_0);
 FUNC_2(10);
}
