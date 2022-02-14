
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {int cow_page; int memcg; int page; int address; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_fault*) ;
 int FUNC_2 (int ,struct vm_area_struct*,int ) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (int ,int ,int ,struct vm_area_struct*) ;
 int FUNC_5 (struct vm_fault*) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int *,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_11(struct vm_fault *VAR_7)
{
 struct vm_area_struct *VAR_8 = VAR_7->vma;
 vm_fault_t VAR_9;

 if (FUNC_9(FUNC_3(VAR_8)))
  return VAR_5;

 VAR_7->cow_page = FUNC_2(VAR_0, VAR_8, VAR_7->address);
 if (!VAR_7->cow_page)
  return VAR_5;

 if (FUNC_7(VAR_7->cow_page, VAR_8->vm_mm, VAR_1,
    &VAR_7->memcg, 0)) {
  FUNC_8(VAR_7->cow_page);
  return VAR_5;
 }

 VAR_9 = FUNC_1(VAR_7);
 if (FUNC_9(VAR_9 & (VAR_3 | VAR_4 | VAR_6)))
  goto uncharge_out;
 if (VAR_9 & VAR_2)
  return VAR_9;

 FUNC_4(VAR_7->cow_page, VAR_7->page, VAR_7->address, VAR_8);
 FUNC_0(VAR_7->cow_page);

 VAR_9 |= FUNC_5(VAR_7);
 FUNC_10(VAR_7->page);
 FUNC_8(VAR_7->page);
 if (FUNC_9(VAR_9 & (VAR_3 | VAR_4 | VAR_6)))
  goto uncharge_out;
 return VAR_9;
uncharge_out:
 FUNC_6(VAR_7->cow_page, VAR_7->memcg, 0);
 FUNC_8(VAR_7->cow_page);
 return VAR_9;
}
