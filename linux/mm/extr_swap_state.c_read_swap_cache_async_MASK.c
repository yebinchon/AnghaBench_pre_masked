
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 struct page* FUNC_0 (int ,int ,struct vm_area_struct*,unsigned long,int*) ;
 int FUNC_1 (struct page*,int) ;

struct page *FUNC_2(swp_entry_t VAR_0, gfp_t VAR_1,
  struct vm_area_struct *VAR_2, unsigned long VAR_3, bool VAR_4)
{
 bool VAR_5;
 struct page *VAR_6 = FUNC_0(VAR_0, VAR_1,
   VAR_2, VAR_3, &VAR_5);

 if (VAR_5)
  FUNC_1(VAR_6, VAR_4);

 return VAR_6;
}
