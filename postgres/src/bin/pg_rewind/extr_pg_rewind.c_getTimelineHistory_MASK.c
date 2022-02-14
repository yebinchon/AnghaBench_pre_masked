
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int TimeLineID ;
struct TYPE_10__ {int tli; int begin; int end; } ;
typedef TYPE_2__ TimeLineHistoryEntry ;
struct TYPE_9__ {int ThisTimeLineID; } ;
struct TYPE_11__ {TYPE_1__ checkPointCopy; } ;
typedef TYPE_3__ ControlFileData ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_2__* FUNC_7 (char*,int,int*) ;
 char* FUNC_8 (int ,char*,int *) ;
 int VAR_6 ;

__attribute__((used)) static TimeLineHistoryEntry *
FUNC_9(ControlFileData *VAR_7, int *VAR_8)
{
 TimeLineHistoryEntry *VAR_9;
 TimeLineID VAR_10;

 VAR_10 = VAR_7->checkPointCopy.ThisTimeLineID;





 if (VAR_10 == 1)
 {
  VAR_9 = (TimeLineHistoryEntry *) FUNC_6(sizeof(TimeLineHistoryEntry));
  VAR_9->tli = VAR_10;
  VAR_9->begin = VAR_9->end = VAR_2;
  *VAR_8 = 1;
 }
 else
 {
  char VAR_11[VAR_3];
  char *VAR_12;

  FUNC_1(VAR_11, VAR_10);


  if (VAR_7 == &VAR_0)
   VAR_12 = FUNC_2(VAR_11, ((void*)0));
  else if (VAR_7 == &VAR_1)
   VAR_12 = FUNC_8(VAR_4, VAR_11, ((void*)0));
  else
   FUNC_3("invalid control file");

  VAR_9 = FUNC_7(VAR_12, VAR_10, VAR_8);
  FUNC_4(VAR_12);
 }

 if (VAR_5)
 {
  int VAR_13;

  if (VAR_7 == &VAR_0)
   FUNC_5("Source timeline history:");
  else if (VAR_7 == &VAR_1)
   FUNC_5("Target timeline history:");
  else
   FUNC_0(0);




  for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
  {
   TimeLineHistoryEntry *VAR_14;

   VAR_14 = &VAR_9[VAR_13];
   FUNC_5("%d: %X/%X - %X/%X", VAR_14->tli,
       (uint32) (VAR_14->begin >> 32), (uint32) (VAR_14->begin),
       (uint32) (VAR_14->end >> 32), (uint32) (VAR_14->end));
  }
 }

 return VAR_9;
}
