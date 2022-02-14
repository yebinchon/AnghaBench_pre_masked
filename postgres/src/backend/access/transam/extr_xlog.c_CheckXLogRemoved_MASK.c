
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ XLogSegNo ;
typedef int TimeLineID ;
struct TYPE_2__ {scalar_t__ lastRemovedSegNo; int info_lck; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_6(XLogSegNo VAR_5, TimeLineID VAR_6)
{
 int VAR_7 = VAR_3;
 XLogSegNo VAR_8;

 FUNC_0(&VAR_2->info_lck);
 VAR_8 = VAR_2->lastRemovedSegNo;
 FUNC_1(&VAR_2->info_lck);

 if (VAR_5 <= VAR_8)
 {
  char VAR_9[VAR_1];

  FUNC_2(VAR_9, VAR_6, VAR_5, VAR_4);
  VAR_3 = VAR_7;
  FUNC_3(VAR_0,
    (FUNC_4(),
     FUNC_5("requested WAL segment %s has already been removed",
      VAR_9)));
 }
 VAR_3 = VAR_7;
}
