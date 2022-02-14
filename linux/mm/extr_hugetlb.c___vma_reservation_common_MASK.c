
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct resv_map {int dummy; } ;
struct hstate {int dummy; } ;
typedef int pgoff_t ;
typedef enum vma_resv_mode { ____Placeholder_vma_resv_mode } vma_resv_mode ;


 int FUNC_0 () ;
 int VAR_0 ;




 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,int ) ;
 int FUNC_2 (struct resv_map*,int ,int ) ;
 long FUNC_3 (struct resv_map*,int ,int ) ;
 long FUNC_4 (struct resv_map*,int ,int ) ;
 long FUNC_5 (struct resv_map*,int ,int ) ;
 int FUNC_6 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 struct resv_map* FUNC_7 (struct vm_area_struct*) ;

__attribute__((used)) static long FUNC_8(struct hstate *VAR_2,
    struct vm_area_struct *VAR_3, unsigned long VAR_4,
    enum vma_resv_mode VAR_5)
{
 struct resv_map *VAR_6;
 pgoff_t VAR_7;
 long VAR_8;

 VAR_6 = FUNC_7(VAR_3);
 if (!VAR_6)
  return 1;

 VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4);
 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_7 + 1);
  break;
 case 130:
  VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_7 + 1);
  break;
 case 129:
  FUNC_2(VAR_6, VAR_7, VAR_7 + 1);
  VAR_8 = 0;
  break;
 case 131:
  if (VAR_3->vm_flags & VAR_1)
   VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_7 + 1);
  else {
   FUNC_2(VAR_6, VAR_7, VAR_7 + 1);
   VAR_8 = FUNC_5(VAR_6, VAR_7, VAR_7 + 1);
  }
  break;
 default:
  FUNC_0();
 }

 if (VAR_3->vm_flags & VAR_1)
  return VAR_8;
 else if (FUNC_1(VAR_3, VAR_0) && VAR_8 >= 0) {
  if (VAR_8)
   return 0;
  else
   return 1;
 }
 else
  return VAR_8 < 0 ? VAR_8 : 0;
}
