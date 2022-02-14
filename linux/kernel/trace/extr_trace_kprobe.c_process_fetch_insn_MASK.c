
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct fetch_insn {int op; unsigned long immediate; int param; scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ comm; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned long FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct fetch_insn*,unsigned long,void*,void*) ;
 unsigned long FUNC_2 (struct pt_regs*,int ) ;
 unsigned long FUNC_3 (struct pt_regs*,int ) ;
 unsigned long FUNC_4 (struct pt_regs*,int ) ;
 unsigned long FUNC_5 (struct pt_regs*) ;

__attribute__((used)) static int
FUNC_6(struct fetch_insn *VAR_2, struct pt_regs *VAR_3, void *VAR_4,
     void *VAR_5)
{
 unsigned long VAR_6;

retry:

 switch (VAR_2->op) {
 case 131:
  VAR_6 = FUNC_4(VAR_3, VAR_2->param);
  break;
 case 129:
  VAR_6 = FUNC_3(VAR_3, VAR_2->param);
  break;
 case 128:
  VAR_6 = FUNC_0(VAR_3);
  break;
 case 130:
  VAR_6 = FUNC_5(VAR_3);
  break;
 case 132:
  VAR_6 = VAR_2->immediate;
  break;
 case 134:
  VAR_6 = (unsigned long)VAR_1->comm;
  break;
 case 133:
  VAR_6 = (unsigned long)VAR_2->data;
  break;





 case 136:
  VAR_2++;
  goto retry;
 default:
  return -VAR_0;
 }
 VAR_2++;

 return FUNC_1(VAR_2, VAR_6, VAR_4, VAR_5);
}
