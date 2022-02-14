
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct page *VAR_3, struct vm_area_struct *VAR_4,
    unsigned long VAR_5, int VAR_6,
    int *VAR_7)
{
 FUNC_1(VAR_3);

 FUNC_0(VAR_0);
 if (VAR_6 == FUNC_3()) {
  FUNC_0(VAR_1);
  *VAR_7 |= VAR_2;
 }

 return FUNC_2(VAR_3, VAR_4, VAR_5);
}
