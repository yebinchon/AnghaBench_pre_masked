
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int action_queue; int count; scalar_t__ active; int sync_queue; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_3(void)
{
 if (!VAR_5.active) {



            FUNC_1(VAR_5.sync_queue);
     FUNC_2(0,VAR_3);
     goto exit;
 } else VAR_5.active=0;
 VAR_5.count--;
 FUNC_0();

 if (VAR_4<2)
       {
  FUNC_2(0,VAR_3);
  *VAR_0=*VAR_1=127;
       }
 FUNC_1(VAR_5.action_queue);

 exit:
 FUNC_2(1,VAR_2);
}
