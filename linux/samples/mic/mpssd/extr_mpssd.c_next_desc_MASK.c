
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_desc {int next; int flags; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned FUNC_1(struct vring_desc *VAR_1)
{
 unsigned int VAR_2;

 if (!(FUNC_0(VAR_1->flags) & VAR_0))
  return -1U;
 VAR_2 = FUNC_0(VAR_1->next);
 return VAR_2;
}
