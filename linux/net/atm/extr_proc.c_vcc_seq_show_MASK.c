
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_state {int sk; } ;
struct seq_file {struct vcc_state* private; } ;
struct atm_vcc {int dummy; } ;


 void* VAR_0 ;
 struct atm_vcc* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char*,char*) ;
 int FUNC_2 (struct seq_file*,struct atm_vcc*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_1, sizeof(void *) == 4 ? "%-8s%s" : "%-16s%s",
   "Address ", "Itf VPI VCI   Fam Flags Reply "
   "Send buffer     Recv buffer      [refcnt]\n");
 } else {
  struct vcc_state *VAR_3 = VAR_1->private;
  struct atm_vcc *VAR_4 = FUNC_0(VAR_3->sk);

  FUNC_2(VAR_1, VAR_4);
 }
 return 0;
}
