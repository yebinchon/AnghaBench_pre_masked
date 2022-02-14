
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; } ;
struct page {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (int ,struct vm_area_struct*,struct page*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static pte_t FUNC_7(struct vm_area_struct *VAR_0, struct page *VAR_1,
    int VAR_2)
{
 pte_t VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_2(FUNC_1(FUNC_4(VAR_1,
      VAR_0->vm_page_prot)));
 } else {
  VAR_3 = FUNC_3(FUNC_4(VAR_1,
        VAR_0->vm_page_prot));
 }
 VAR_3 = FUNC_6(VAR_3);
 VAR_3 = FUNC_5(VAR_3);
 VAR_3 = FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);

 return VAR_3;
}
