
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* av_workItems; } ;
struct TYPE_3__ {int avw_used; int avw_active; int avw_blockNumber; int avw_relation; int avw_database; int avw_type; } ;
typedef int Oid ;
typedef int BlockNumber ;
typedef int AutoVacuumWorkItemType ;
typedef TYPE_1__ AutoVacuumWorkItem ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

bool
FUNC_2(AutoVacuumWorkItemType VAR_5, Oid VAR_6,
       BlockNumber VAR_7)
{
 int VAR_8;
 bool VAR_9 = 0;

 FUNC_0(VAR_1, VAR_2);




 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
 {
  AutoVacuumWorkItem *VAR_10 = &VAR_0->av_workItems[VAR_8];

  if (VAR_10->avw_used)
   continue;

  VAR_10->avw_used = 1;
  VAR_10->avw_active = 0;
  VAR_10->avw_type = VAR_5;
  VAR_10->avw_database = VAR_3;
  VAR_10->avw_relation = VAR_6;
  VAR_10->avw_blockNumber = VAR_7;
  VAR_9 = 1;


  break;
 }

 FUNC_1(VAR_1);

 return VAR_9;
}
