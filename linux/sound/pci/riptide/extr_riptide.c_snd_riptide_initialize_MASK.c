
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_riptide {unsigned int device_id; scalar_t__ rmidi; struct cmdif* cif; scalar_t__ port; } ;
struct riptideport {int dummy; } ;
struct cmdif {struct riptideport* hwport; scalar_t__ is_reset; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmdif*) ;
 int FUNC_1 (struct riptideport*) ;
 struct cmdif* FUNC_2 (int,int ) ;
 int FUNC_3 (struct cmdif*,struct snd_riptide*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_riptide *VAR_3)
{
 struct cmdif *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (FUNC_4(!VAR_3))
  return -VAR_0;

 VAR_4 = VAR_3->cif;
 if (!VAR_4) {
  if ((VAR_4 = FUNC_2(sizeof(struct cmdif), VAR_2)) == ((void*)0))
   return -VAR_1;
  VAR_4->hwport = (struct riptideport *)VAR_3->port;
  FUNC_6(&VAR_4->lock);
  VAR_3->cif = VAR_4;
 }
 VAR_4->is_reset = 0;
 if ((VAR_6 = FUNC_3(VAR_4, VAR_3)) != 0)
  return VAR_6;
 VAR_5 = VAR_3->device_id;
 switch (VAR_5) {
 case 0x4310:
 case 0x4320:
 case 0x4330:
  FUNC_5("Modem enable?\n");
  FUNC_0(VAR_4);
  break;
 }
 FUNC_5("Enabling MPU IRQs\n");
 if (VAR_3->rmidi)
  FUNC_1(VAR_4->hwport);
 return VAR_6;
}
