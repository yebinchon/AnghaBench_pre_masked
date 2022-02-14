
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca0106 {int emu_lock; scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

unsigned int FUNC_4(struct snd_ca0106 * VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_6 = (VAR_3 << 16) | VAR_4;

 FUNC_2(&VAR_2->emu_lock, VAR_5);
 FUNC_1(VAR_6, VAR_2->port + VAR_1);
 VAR_7 = FUNC_0(VAR_2->port + VAR_0);
 FUNC_3(&VAR_2->emu_lock, VAR_5);
 return VAR_7;
}
