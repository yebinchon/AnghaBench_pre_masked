
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tm_spr_regs {int dummy; } ;
typedef int pid_t ;
struct TYPE_3__ {int tm_tfiar; int tm_texasr; int tm_tfhar; } ;
struct TYPE_4__ {int flag; TYPE_1__ regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,struct tm_spr_regs*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(pid_t VAR_2)
{
 FUNC_0(FUNC_3(VAR_2));
 FUNC_0(FUNC_2(VAR_2, (struct tm_spr_regs *)&VAR_1->regs));

 FUNC_1("TFHAR: %lx TEXASR: %lx TFIAR: %lx\n", VAR_1->regs.tm_tfhar,
    VAR_1->regs.tm_texasr, VAR_1->regs.tm_tfiar);

 VAR_1->flag = 1;
 FUNC_0(FUNC_4(VAR_2));

 return VAR_0;
}
