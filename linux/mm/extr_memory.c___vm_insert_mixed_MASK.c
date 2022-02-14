
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_page_prot; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;
typedef int pfn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,struct page*,int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 struct page* FUNC_8 (int ) ;
 int FUNC_9 (struct vm_area_struct*,int *,int ) ;
 int FUNC_10 (struct vm_area_struct*,int ) ;

__attribute__((used)) static vm_fault_t FUNC_11(struct vm_area_struct *VAR_6,
  unsigned long VAR_7, pfn_t VAR_8, bool VAR_9)
{
 pgprot_t VAR_10 = VAR_6->vm_page_prot;
 int VAR_11;

 FUNC_0(!FUNC_10(VAR_6, VAR_8));

 if (VAR_7 < VAR_6->vm_start || VAR_7 >= VAR_6->vm_end)
  return VAR_5;

 FUNC_9(VAR_6, &VAR_10, VAR_8);

 if (!FUNC_4(FUNC_6(VAR_8), VAR_10))
  return VAR_5;
 if (!FUNC_1(VAR_0) &&
     !FUNC_5(VAR_8) && FUNC_7(VAR_8)) {
  struct page *VAR_12;






  VAR_12 = FUNC_8(FUNC_6(VAR_8));
  VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_12, VAR_10);
 } else {
  return FUNC_3(VAR_6, VAR_7, VAR_8, VAR_10, VAR_9);
 }

 if (VAR_11 == -VAR_2)
  return VAR_4;
 if (VAR_11 < 0 && VAR_11 != -VAR_1)
  return VAR_5;

 return VAR_3;
}
