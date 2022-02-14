
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_flags; int xpt_remote; } ;
struct sockaddr {int dummy; } ;
struct ib_event {int event; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct svc_xprt*) ;
 int FUNC_2 (struct ib_event*,struct sockaddr*) ;

__attribute__((used)) static void FUNC_3(struct ib_event *VAR_1, void *VAR_2)
{
 struct svc_xprt *VAR_3 = VAR_2;

 FUNC_2(VAR_1, (struct sockaddr *)&VAR_3->xpt_remote);
 switch (VAR_1->event) {

 case 134:
 case 136:
 case 128:
 case 130:
  break;


 case 133:
 case 131:
 case 129:
 case 132:
 case 135:
 default:
  FUNC_0(VAR_0, &VAR_3->xpt_flags);
  FUNC_1(VAR_3);
  break;
 }
}
