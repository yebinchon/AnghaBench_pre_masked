
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; int vm_start; } ;
struct resv_map {int refs; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {int dummy; } ;


 int VAR_0 ;
 struct hstate* FUNC_0 (struct vm_area_struct*) ;
 long FUNC_1 (struct hugepage_subpool*,unsigned long) ;
 int FUNC_2 (struct hstate*,long) ;
 int FUNC_3 (struct vm_area_struct*,int ) ;
 int FUNC_4 (int *,int ) ;
 unsigned long FUNC_5 (struct resv_map*,unsigned long,unsigned long) ;
 int VAR_1 ;
 struct hugepage_subpool* FUNC_6 (struct vm_area_struct*) ;
 unsigned long FUNC_7 (struct hstate*,struct vm_area_struct*,int ) ;
 struct resv_map* FUNC_8 (struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_9(struct vm_area_struct *VAR_2)
{
 struct hstate *VAR_3 = FUNC_0(VAR_2);
 struct resv_map *VAR_4 = FUNC_8(VAR_2);
 struct hugepage_subpool *VAR_5 = FUNC_6(VAR_2);
 unsigned long VAR_6, VAR_7, VAR_8;
 long VAR_9;

 if (!VAR_4 || !FUNC_3(VAR_2, VAR_0))
  return;

 VAR_7 = FUNC_7(VAR_3, VAR_2, VAR_2->vm_start);
 VAR_8 = FUNC_7(VAR_3, VAR_2, VAR_2->vm_end);

 VAR_6 = (VAR_8 - VAR_7) - FUNC_5(VAR_4, VAR_7, VAR_8);

 FUNC_4(&VAR_4->refs, VAR_1);

 if (VAR_6) {




  VAR_9 = FUNC_1(VAR_5, VAR_6);
  FUNC_2(VAR_3, -VAR_9);
 }
}
