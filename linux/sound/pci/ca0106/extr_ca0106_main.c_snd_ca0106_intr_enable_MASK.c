
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca0106 {int emu_lock; scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_ca0106 *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_2(&VAR_1->emu_lock, VAR_3);
 VAR_4 = FUNC_0(VAR_1->port + VAR_0) | VAR_2;
 FUNC_1(VAR_4, VAR_1->port + VAR_0);
 FUNC_3(&VAR_1->emu_lock, VAR_3);
}
