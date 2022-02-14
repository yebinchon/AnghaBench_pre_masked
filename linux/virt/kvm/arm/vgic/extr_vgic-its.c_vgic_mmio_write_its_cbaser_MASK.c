
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its {int cmd_lock; scalar_t__ creadr; scalar_t__ cwriter; int cbaser; scalar_t__ enabled; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,unsigned int,unsigned long) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_0, struct vgic_its *VAR_1,
           gpa_t VAR_2, unsigned int VAR_3,
           unsigned long VAR_4)
{

 if (VAR_1->enabled)
  return;

 FUNC_0(&VAR_1->cmd_lock);
 VAR_1->cbaser = FUNC_2(VAR_1->cbaser, VAR_2 & 7, VAR_3, VAR_4);
 VAR_1->cbaser = FUNC_3(VAR_1->cbaser);
 VAR_1->creadr = 0;




 VAR_1->cwriter = VAR_1->creadr;
 FUNC_1(&VAR_1->cmd_lock);
}
