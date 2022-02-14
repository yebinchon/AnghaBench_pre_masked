
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct xfrm_state {TYPE_1__ km; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfrm_state*,int,int) ;

int FUNC_1(struct xfrm_state *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, 1, 0);
 if (!VAR_2)
  VAR_1->km.state = VAR_0;

 return VAR_2;
}
