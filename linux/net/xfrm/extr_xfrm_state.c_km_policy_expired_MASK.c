
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_policy {int dummy; } ;
struct TYPE_2__ {int hard; } ;
struct km_event {int event; int portid; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfrm_policy*,int,struct km_event*) ;

void FUNC_1(struct xfrm_policy *VAR_1, int VAR_2, int VAR_3, u32 VAR_4)
{
 struct km_event VAR_5;

 VAR_5.data.hard = VAR_3;
 VAR_5.portid = VAR_4;
 VAR_5.event = VAR_0;
 FUNC_0(VAR_1, VAR_2, &VAR_5);
}
