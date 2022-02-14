
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TimestampTz ;
typedef int TimeoutId ;
struct TYPE_3__ {int type; int fin_time; int delay_ms; int id; } ;
typedef TYPE_1__ EnableTimeoutParams ;


 int VAR_0 ;
 int FUNC_0 () ;


 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(const EnableTimeoutParams *VAR_1, int VAR_2)
{
 TimestampTz VAR_3;
 int VAR_4;


 FUNC_2();


 VAR_3 = FUNC_0();

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  TimeoutId VAR_5 = VAR_1[VAR_4].id;
  TimestampTz VAR_6;

  switch (VAR_1[VAR_4].type)
  {
   case 129:
    VAR_6 = FUNC_1(VAR_3,
                VAR_1[VAR_4].delay_ms);
    FUNC_4(VAR_5, VAR_3, VAR_6);
    break;

   case 128:
    FUNC_4(VAR_5, VAR_3, VAR_1[VAR_4].fin_time);
    break;

   default:
    FUNC_3(VAR_0, "unrecognized timeout type %d",
      (int) VAR_1[VAR_4].type);
    break;
  }
 }


 FUNC_5(VAR_3);
}
