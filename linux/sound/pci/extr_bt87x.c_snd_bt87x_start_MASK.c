
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct snd_bt87x {int reg_control; int line_bytes; int lines; int interrupt_mask; int reg_lock; TYPE_1__ dma_risc; scalar_t__ current_line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_bt87x*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_bt87x *VAR_7)
{
 FUNC_1(&VAR_7->reg_lock);
 VAR_7->current_line = 0;
 VAR_7->reg_control |= VAR_1 | VAR_2 | VAR_0;
 FUNC_0(VAR_7, VAR_6, VAR_7->dma_risc.addr);
 FUNC_0(VAR_7, VAR_5,
    VAR_7->line_bytes | (VAR_7->lines << 16));
 FUNC_0(VAR_7, VAR_4, VAR_7->interrupt_mask);
 FUNC_0(VAR_7, VAR_3, VAR_7->reg_control);
 FUNC_2(&VAR_7->reg_lock);
 return 0;
}
