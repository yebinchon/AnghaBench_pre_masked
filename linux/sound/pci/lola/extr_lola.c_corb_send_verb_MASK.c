
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmds; } ;
struct TYPE_3__ {int wp; void** buf; } ;
struct lola {unsigned int last_cmd_nid; unsigned int last_verb; unsigned int last_data; unsigned int last_extdata; int reg_lock; TYPE_2__ rirb; TYPE_1__ corb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct lola*,int ,int ,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct lola *VAR_4, unsigned int VAR_5,
     unsigned int VAR_6, unsigned int VAR_7,
     unsigned int VAR_8)
{
 unsigned long VAR_9;
 int VAR_10 = -VAR_2;

 VAR_4->last_cmd_nid = VAR_5;
 VAR_4->last_verb = VAR_6;
 VAR_4->last_data = VAR_7;
 VAR_4->last_extdata = VAR_8;
 VAR_7 |= (VAR_5 << 20) | (VAR_6 << 8);

 FUNC_3(&VAR_4->reg_lock, VAR_9);
 if (VAR_4->rirb.cmds < VAR_3 - 1) {
  unsigned int VAR_11 = VAR_4->corb.wp + 1;
  VAR_11 %= VAR_3;
  VAR_4->corb.wp = VAR_11;
  VAR_4->corb.buf[VAR_11 * 2] = FUNC_0(VAR_7);
  VAR_4->corb.buf[VAR_11 * 2 + 1] = FUNC_0(VAR_8);
  FUNC_1(VAR_4, VAR_0, VAR_1, VAR_11);
  VAR_4->rirb.cmds++;
  FUNC_2();
  VAR_10 = 0;
 }
 FUNC_4(&VAR_4->reg_lock, VAR_9);
 return VAR_10;
}
