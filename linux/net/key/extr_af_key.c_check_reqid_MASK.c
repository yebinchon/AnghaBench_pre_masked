
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xfrm_policy {int xfrm_nr; TYPE_1__* xfrm_vec; } ;
struct TYPE_2__ {scalar_t__ reqid; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct xfrm_policy *VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = *(u32*)VAR_4;

 for (VAR_5=0; VAR_5<VAR_1->xfrm_nr; VAR_5++) {
  if (VAR_1->xfrm_vec[VAR_5].reqid == VAR_6)
   return -VAR_0;
 }
 return 0;
}
