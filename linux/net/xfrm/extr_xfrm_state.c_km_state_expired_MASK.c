
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct TYPE_2__ {int hard; } ;
struct km_event {int event; int portid; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfrm_state*,struct km_event*) ;

void FUNC_1(struct xfrm_state *VAR_1, int VAR_2, u32 VAR_3)
{
 struct km_event VAR_4;

 VAR_4.data.hard = VAR_2;
 VAR_4.portid = VAR_3;
 VAR_4.event = VAR_0;
 FUNC_0(VAR_1, &VAR_4);
}
