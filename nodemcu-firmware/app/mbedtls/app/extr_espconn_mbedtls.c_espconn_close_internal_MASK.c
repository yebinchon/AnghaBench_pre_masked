
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct espconn {int dummy; } ;
typedef scalar_t__ sint8 ;
typedef scalar_t__ sint16 ;
typedef int netconn_event ;
struct TYPE_5__ {int write_flag; scalar_t__ err; scalar_t__ cntr; int * ptrbuf; } ;
struct TYPE_6__ {struct espconn* pespconn; struct espconn* preverse; TYPE_1__ pcommon; scalar_t__ hs_status; } ;
typedef TYPE_2__ espconn_msg ;


 int FUNC_0 (struct espconn*) ;
 int FUNC_1 (struct espconn*,scalar_t__) ;
 scalar_t__ VAR_0 ;


 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, netconn_event VAR_2)
{
 espconn_msg *VAR_3 = VAR_1;
    struct espconn *VAR_4 = ((void*)0);
    sint8 VAR_5 = 0;
    sint16 VAR_6 = 0;
    FUNC_3(VAR_3);

 VAR_4 = VAR_3->preverse;
 VAR_5 = VAR_3->pcommon.err;
 VAR_6 = VAR_3->hs_status;
 if (VAR_4 != ((void*)0)) {

  VAR_3->pcommon.write_flag = 0;
  VAR_3->pcommon.ptrbuf = ((void*)0);
  VAR_3->pcommon.cntr = 0;
  VAR_3->pcommon.err = 0;
  VAR_4 = VAR_3->preverse;
 } else {
  VAR_4 = VAR_3->pespconn;
  FUNC_4(VAR_3);
  VAR_3 = ((void*)0);
 }

 FUNC_2();
 switch (VAR_2){
  case 128:
   if (VAR_6 == VAR_0)
    FUNC_1(VAR_4, VAR_5);
   else
    FUNC_1(VAR_4, VAR_6);
   break;
  case 129:
   if (VAR_6 == VAR_0)
    FUNC_0(VAR_4);
   else
    FUNC_1(VAR_4, VAR_6);
   break;
  default:
   break;
 }
}
