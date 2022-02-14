
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_if_parms {scalar_t__ link; int if_id; } ;
struct TYPE_2__ {scalar_t__ link; int if_id; } ;
struct xfrm_if {TYPE_1__ p; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct xfrm_if *VAR_1, const struct xfrm_if_parms *VAR_2)
{
 if (VAR_1->p.link != VAR_2->link)
  return -VAR_0;

 VAR_1->p.if_id = VAR_2->if_id;

 return 0;
}
