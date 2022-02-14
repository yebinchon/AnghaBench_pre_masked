
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uart_cmd; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 int FUNC_0 (struct snd_gus_card*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_gus_card * VAR_0)
{
 FUNC_0(VAR_0, VAR_0->gf1.uart_cmd &= ~0x20);
}
