
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_its {scalar_t__ cwriter; scalar_t__ creadr; int cbaser; int enabled; } ;
struct kvm {int dummy; } ;
typedef scalar_t__ gpa_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct kvm*,scalar_t__,int *,scalar_t__) ;
 int FUNC_3 (struct kvm*,struct vgic_its*,int *) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_1, struct vgic_its *VAR_2)
{
 gpa_t VAR_3;
 u64 VAR_4[4];


 if (!VAR_2->enabled)
  return;

 VAR_3 = FUNC_0(VAR_2->cbaser);

 while (VAR_2->cwriter != VAR_2->creadr) {
  int VAR_5 = FUNC_2(VAR_1, VAR_3 + VAR_2->creadr,
           VAR_4, VAR_0);







  if (!VAR_5)
   FUNC_3(VAR_1, VAR_2, VAR_4);

  VAR_2->creadr += VAR_0;
  if (VAR_2->creadr == FUNC_1(VAR_2->cbaser))
   VAR_2->creadr = 0;
 }
}
