
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int sda; } ;
struct srcu_node {int grplo; int grphi; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct srcu_struct *VAR_0, struct srcu_node *VAR_1,
      unsigned long VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_1->grplo; VAR_4 <= VAR_1->grphi; VAR_4++) {
  if (!(VAR_2 & (1 << (VAR_4 - VAR_1->grplo))))
   continue;
  FUNC_1(FUNC_0(VAR_0->sda, VAR_4), VAR_3);
 }
}
