
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pg_tm {int dummy; } ;
typedef int int32 ;
typedef int fsec_t ;
typedef int TimestampTz ;
struct TYPE_4__ {int time; } ;
typedef TYPE_1__ TimeTzADT ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int*,struct pg_tm*,int *,int *,int *) ;
 int FUNC_7 (struct pg_tm*,int ,int,TYPE_1__*) ;

TimeTzADT *
FUNC_8(int32 VAR_2)
{
 TimeTzADT *VAR_3;
 TimestampTz VAR_4;
 struct pg_tm VAR_5,
      *VAR_6 = &VAR_5;
 fsec_t VAR_7;
 int VAR_8;

 VAR_4 = FUNC_1();

 if (FUNC_6(VAR_4, &VAR_8, VAR_6, &VAR_7, ((void*)0), ((void*)0)) != 0)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("timestamp out of range")));

 VAR_3 = (TimeTzADT *) FUNC_5(sizeof(TimeTzADT));
 FUNC_7(VAR_6, VAR_7, VAR_8, VAR_3);
 FUNC_0(&(VAR_3->time), VAR_2);
 return VAR_3;
}
