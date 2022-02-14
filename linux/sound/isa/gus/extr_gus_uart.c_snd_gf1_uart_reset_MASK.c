
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {scalar_t__ uart_enable; } ;


 int FUNC_0 (struct snd_gus_card*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct snd_gus_card * VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, 0x03);
 if (!VAR_1 && VAR_0->uart_enable) {
  FUNC_1(160);
  FUNC_0(VAR_0, 0x00);
 }
}
