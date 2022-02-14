
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spoctl; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct daio_mgr_ctrl_blk {TYPE_2__ dirty; int spoctl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 struct daio_mgr_ctrl_blk *VAR_7 = VAR_4;

 if (VAR_5 < 4) {

  switch ((VAR_6 & 0x7)) {
  case 0:
   FUNC_0(&VAR_7->spoctl, VAR_3 << (VAR_5*8), 3);
   break;
  case 1:
   FUNC_0(&VAR_7->spoctl, VAR_3 << (VAR_5*8), 0);
   break;
  case 2:
   FUNC_0(&VAR_7->spoctl, VAR_3 << (VAR_5*8), 1);
   break;
  case 4:
   FUNC_0(&VAR_7->spoctl, VAR_3 << (VAR_5*8), 2);
   break;
  default:
   break;
  }
  FUNC_0(&VAR_7->spoctl, VAR_0 << (VAR_5*8),
     (VAR_6 >> 4) & 0x1);
  FUNC_0(&VAR_7->spoctl, VAR_2 << (VAR_5*8),
     (VAR_6 >> 4) & 0x1);
  FUNC_0(&VAR_7->spoctl, VAR_1 << (VAR_5*8),
     ((VAR_6 >> 3) & 0x1) ? 2 : 2);

  VAR_7->dirty.bf.spoctl |= (0x1 << VAR_5);
 } else {


 }
 return 0;
}
