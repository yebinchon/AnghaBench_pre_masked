
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_riptide {scalar_t__ irq; int res_port; int fw_entry; struct snd_riptide* cif; int hwport; } ;
struct cmdif {scalar_t__ irq; int res_port; int fw_entry; struct cmdif* cif; int hwport; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,struct snd_riptide*) ;
 int FUNC_3 (struct snd_riptide*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct snd_riptide *VAR_0)
{
 struct cmdif *VAR_1;

 if (!VAR_0)
  return 0;

 if ((VAR_1 = VAR_0->cif)) {
  FUNC_0(VAR_1->hwport);
  FUNC_6(100);
  FUNC_1(VAR_1->hwport);
  FUNC_3(VAR_0->cif);
 }
 if (VAR_0->irq >= 0)
  FUNC_2(VAR_0->irq, VAR_0);
 FUNC_5(VAR_0->fw_entry);
 FUNC_4(VAR_0->res_port);
 FUNC_3(VAR_0);
 return 0;
}
