
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu10k1x {int emu_lock; scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct emu10k1x *VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4,
       unsigned int VAR_5)
{
 unsigned int VAR_6;
 unsigned long VAR_7;

 VAR_6 = (VAR_3 << 16) | VAR_4;

 FUNC_1(&VAR_2->emu_lock, VAR_7);
 FUNC_0(VAR_6, VAR_2->port + VAR_1);
 FUNC_0(VAR_5, VAR_2->port + VAR_0);
 FUNC_2(&VAR_2->emu_lock, VAR_7);
}
