
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
typedef unsigned long kvm_pfn_t ;
struct TYPE_3__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,unsigned long,int ,int*) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long*) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_3,
          unsigned long VAR_4, bool *VAR_5,
          bool VAR_6, bool *VAR_7,
          kvm_pfn_t *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_3, VAR_4, &VAR_9);
 if (VAR_10) {




  bool VAR_11 = 0;
  VAR_10 = FUNC_0(VAR_2, VAR_2->mm, VAR_4,
         (VAR_6 ? VAR_1 : 0),
         &VAR_11);
  if (VAR_11)
   return -VAR_0;
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_1(VAR_3, VAR_4, &VAR_9);
  if (VAR_10)
   return VAR_10;

 }

 if (VAR_7)
  *VAR_7 = 1;
 FUNC_2(VAR_9);

 *VAR_8 = VAR_9;
 return 0;
}
