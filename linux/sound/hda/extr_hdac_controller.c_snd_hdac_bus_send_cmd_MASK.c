
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * buf; } ;
struct TYPE_3__ {int * cmds; } ;
struct hdac_bus {unsigned int* last_cmd; int reg_lock; TYPE_2__ corb; TYPE_1__ rirb; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct hdac_bus*,int ) ;
 int FUNC_3 (struct hdac_bus*,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct hdac_bus *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_6);
 unsigned int VAR_8, VAR_9;

 FUNC_4(&VAR_5->reg_lock);

 VAR_5->last_cmd[FUNC_0(VAR_6)] = VAR_6;


 VAR_8 = FUNC_2(VAR_5, VAR_2);
 if (VAR_8 == 0xffff) {

  FUNC_5(&VAR_5->reg_lock);
  return -VAR_4;
 }
 VAR_8++;
 VAR_8 %= VAR_0;

 VAR_9 = FUNC_2(VAR_5, VAR_1);
 if (VAR_8 == VAR_9) {

  FUNC_5(&VAR_5->reg_lock);
  return -VAR_3;
 }

 VAR_5->rirb.cmds[VAR_7]++;
 VAR_5->corb.buf[VAR_8] = FUNC_1(VAR_6);
 FUNC_3(VAR_5, VAR_2, VAR_8);

 FUNC_5(&VAR_5->reg_lock);

 return 0;
}
