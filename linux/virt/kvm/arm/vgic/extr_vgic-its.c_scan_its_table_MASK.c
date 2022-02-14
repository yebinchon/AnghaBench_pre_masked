
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vgic_its {TYPE_1__* dev; } ;
struct kvm {int dummy; } ;
typedef size_t gpa_t ;
typedef int (* entry_fn_t ) (struct vgic_its*,int,char*,void*) ;
struct TYPE_2__ {struct kvm* kvm; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,size_t,char*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct vgic_its *VAR_1, gpa_t VAR_2, int VAR_3, u32 VAR_4,
     int VAR_5, entry_fn_t VAR_6, void *VAR_7)
{
 struct kvm *VAR_8 = VAR_1->dev->kvm;
 unsigned long VAR_9 = VAR_3;
 int VAR_10 = VAR_5;
 gpa_t VAR_11 = VAR_2;
 char VAR_12[VAR_0];
 int VAR_13;

 FUNC_1(VAR_12, 0, VAR_4);

 while (VAR_9 > 0) {
  int VAR_14;
  size_t VAR_15;

  VAR_13 = FUNC_0(VAR_8, VAR_11, VAR_12, VAR_4);
  if (VAR_13)
   return VAR_13;

  VAR_14 = VAR_6(VAR_1, VAR_10, VAR_12, VAR_7);
  if (VAR_14 <= 0)
   return VAR_14;

  VAR_15 = VAR_14 * VAR_4;
  VAR_10 += VAR_14;
  VAR_11 += VAR_15;
  VAR_9 -= VAR_15;
 }
 return 1;
}
