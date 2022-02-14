
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nm256 {scalar_t__ irq; struct nm256* ac97_regs; int pci; int res_buffer; int res_cport; int buffer; int cport; TYPE_1__* streams; } ;
struct TYPE_2__ {scalar_t__ running; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__,struct nm256*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nm256*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nm256*) ;
 int FUNC_6 (struct nm256*) ;

__attribute__((used)) static int FUNC_7(struct nm256 *VAR_2)
{
 if (VAR_2->streams[VAR_1].running)
  FUNC_6(VAR_2);
 if (VAR_2->streams[VAR_0].running)
  FUNC_5(VAR_2);

 if (VAR_2->irq >= 0)
  FUNC_0(VAR_2->irq, VAR_2);

 FUNC_1(VAR_2->cport);
 FUNC_1(VAR_2->buffer);
 FUNC_4(VAR_2->res_cport);
 FUNC_4(VAR_2->res_buffer);

 FUNC_3(VAR_2->pci);
 FUNC_2(VAR_2->ac97_regs);
 FUNC_2(VAR_2);
 return 0;
}
