
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int phys_addr; int phys_size; } ;
struct TYPE_6__ {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (int ) ;

int FUNC_4( void )
{
  FUNC_2(&VAR_3);
  FUNC_3(VAR_1);
  FUNC_2(&VAR_3);

  FUNC_0("Formatting: size 0x%x, addr 0x%x\n", VAR_3.cfg.phys_size, VAR_3.cfg.phys_addr);
  VAR_2 = 0;
  int VAR_4 = FUNC_1(&VAR_3);
  VAR_2 = -1;

  return VAR_4 < 0 ? 0 : FUNC_3(VAR_0);
}
