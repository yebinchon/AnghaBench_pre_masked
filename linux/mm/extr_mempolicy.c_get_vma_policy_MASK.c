
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mempolicy {int dummy; } ;


 struct mempolicy* FUNC_0 (struct vm_area_struct*,unsigned long) ;
 int VAR_0 ;
 struct mempolicy* FUNC_1 (int ) ;

__attribute__((used)) static struct mempolicy *FUNC_2(struct vm_area_struct *VAR_1,
      unsigned long VAR_2)
{
 struct mempolicy *VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_0);

 return VAR_3;
}
