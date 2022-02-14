
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int chip_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct vx_core*,int,unsigned int) ;

void FUNC_1(struct vx_core *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 if (VAR_1->chip_status & VAR_0)
  return;

 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
  FUNC_0(VAR_1, VAR_3, VAR_2 & (1 << VAR_3));
}
