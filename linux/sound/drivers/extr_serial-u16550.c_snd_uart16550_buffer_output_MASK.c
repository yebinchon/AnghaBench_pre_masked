
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {unsigned short buff_out; scalar_t__ buff_in_count; int fifo_count; scalar_t__ base; int * tx_buff; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct snd_uart16550 *VAR_2)
{
 unsigned short VAR_3 = VAR_2->buff_out;
 if (VAR_2->buff_in_count > 0) {
  FUNC_0(VAR_2->tx_buff[VAR_3], VAR_2->base + VAR_1);
  VAR_2->fifo_count++;
  VAR_3++;
  VAR_3 &= VAR_0;
  VAR_2->buff_out = VAR_3;
  VAR_2->buff_in_count--;
 }
}
