
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VirtualTransactionId ;
typedef scalar_t__ TimestampTz ;
struct TYPE_7__ {scalar_t__ fin_time; int type; int id; } ;
struct TYPE_6__ {int locktag_type; } ;
typedef TYPE_1__ LOCKTAG ;
typedef TYPE_2__ EnableTimeoutParams ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int) ;

void
FUNC_8(LOCKTAG VAR_6)
{
 TimestampTz VAR_7;

 FUNC_0(VAR_1);

 VAR_7 = FUNC_3();

 if (FUNC_1() >= VAR_7)
 {



  VirtualTransactionId *VAR_8;

  VAR_8 = FUNC_2(&VAR_6, VAR_0, ((void*)0));
  FUNC_5(VAR_8,
              VAR_3);
 }
 else
 {



  EnableTimeoutParams VAR_9[1];

  VAR_9[0].id = VAR_4;
  VAR_9[0].type = VAR_5;
  VAR_9[0].fin_time = VAR_7;
  FUNC_7(VAR_9, 1);
 }


 FUNC_4(VAR_2 | VAR_6.locktag_type);







 FUNC_6(0);
}
