
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct km_event {int event; TYPE_1__ data; } ;







 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xfrm_policy*,int,struct km_event const*) ;
 int FUNC_1 (struct xfrm_policy*,struct km_event const*) ;
 int FUNC_2 (struct km_event const*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct xfrm_policy *VAR_1, int VAR_2, const struct km_event *VAR_3)
{
 if (VAR_1 && VAR_1->type != VAR_0)
  return 0;

 switch (VAR_3->event) {
 case 129:
  return FUNC_1(VAR_1, VAR_3);
 case 132:
 case 130:
 case 128:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 131:
  if (VAR_3->data.type != VAR_0)
   break;
  return FUNC_2(VAR_3);
 default:
  FUNC_3("pfkey: Unknown policy event %d\n", VAR_3->event);
  break;
 }

 return 0;
}
