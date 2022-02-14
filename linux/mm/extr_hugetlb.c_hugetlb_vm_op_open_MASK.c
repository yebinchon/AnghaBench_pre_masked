
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct resv_map {int refs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,int ) ;
 int FUNC_1 (int *) ;
 struct resv_map* FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_3(struct vm_area_struct *VAR_1)
{
 struct resv_map *VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 && FUNC_0(VAR_1, VAR_0))
  FUNC_1(&VAR_2->refs);
}
