
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_state {int sk; } ;
struct seq_file {struct vcc_state* private; } ;
struct atm_vcc {int dummy; } ;


 void* VAR_0 ;
 struct atm_vcc* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,struct atm_vcc*) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 static char VAR_3[] =
  "Itf VPI VCI   AAL RX(PCR,Class) TX(PCR,Class)\n";

 if (VAR_2 == VAR_0)
  FUNC_2(VAR_1, VAR_3);
 else {
  struct vcc_state *VAR_4 = VAR_1->private;
  struct atm_vcc *VAR_5 = FUNC_0(VAR_4->sk);

  FUNC_1(VAR_1, VAR_5);
 }
 return 0;
}
