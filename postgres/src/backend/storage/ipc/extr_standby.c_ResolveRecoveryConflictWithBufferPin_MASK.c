
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ TimestampTz ;
struct TYPE_3__ {int delay_ms; int type; int id; scalar_t__ fin_time; } ;
typedef TYPE_1__ EnableTimeoutParams ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

void
FUNC_8(void)
{
 TimestampTz VAR_8;

 FUNC_0(VAR_1);

 VAR_8 = FUNC_2();

 if (VAR_8 == 0)
 {




  FUNC_6(VAR_4, VAR_0);
 }
 else if (FUNC_1() >= VAR_8)
 {



  FUNC_4(VAR_3);
 }
 else
 {




  EnableTimeoutParams VAR_9[2];

  VAR_9[0].id = VAR_5;
  VAR_9[0].type = VAR_7;
  VAR_9[0].fin_time = VAR_8;
  VAR_9[1].id = VAR_4;
  VAR_9[1].type = VAR_6;
  VAR_9[1].delay_ms = VAR_0;
  FUNC_7(VAR_9, 2);
 }


 FUNC_3(VAR_2);







 FUNC_5(0);
}
