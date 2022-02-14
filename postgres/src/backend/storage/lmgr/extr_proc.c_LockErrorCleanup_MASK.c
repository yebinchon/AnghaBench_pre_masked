
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * next; } ;
struct TYPE_10__ {scalar_t__ waitStatus; TYPE_1__ links; } ;
struct TYPE_9__ {int hashcode; } ;
struct TYPE_8__ {int keep_indicator; int id; } ;
typedef int LWLock ;
typedef TYPE_2__ DisableTimeoutParams ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int * FUNC_5 (int ) ;
 TYPE_5__* VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_5__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (TYPE_2__*,int) ;
 TYPE_3__* VAR_5 ;

void
FUNC_9(void)
{
 LWLock *VAR_6;
 DisableTimeoutParams VAR_7[2];

 FUNC_2();

 FUNC_0();


 if (VAR_5 == ((void*)0))
 {
  FUNC_6();
  return;
 }
 VAR_7[0].id = VAR_0;
 VAR_7[0].keep_indicator = 0;
 VAR_7[1].id = VAR_1;
 VAR_7[1].keep_indicator = 1;
 FUNC_8(VAR_7, 2);


 VAR_6 = FUNC_5(VAR_5->hashcode);
 FUNC_3(VAR_6, VAR_2);

 if (VAR_3->links.next != ((void*)0))
 {

  FUNC_7(VAR_3, VAR_5->hashcode);
 }
 else
 {






  if (VAR_3->waitStatus == VAR_4)
   FUNC_1();
 }

 VAR_5 = ((void*)0);

 FUNC_4(VAR_6);

 FUNC_6();
}
