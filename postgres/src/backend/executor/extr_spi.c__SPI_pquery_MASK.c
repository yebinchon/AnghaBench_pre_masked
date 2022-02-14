
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_15__ {int processed; } ;
struct TYPE_14__ {int operation; TYPE_3__* dest; TYPE_2__* plannedstmt; TYPE_1__* estate; } ;
struct TYPE_13__ {scalar_t__ mydest; } ;
struct TYPE_12__ {scalar_t__ hasReturning; } ;
struct TYPE_11__ {int es_processed; } ;
typedef TYPE_4__ QueryDesc ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 TYPE_6__* VAR_14 ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(QueryDesc *VAR_15, bool VAR_16, uint64 VAR_17)
{
 int VAR_18 = VAR_15->operation;
 int VAR_19;
 int VAR_20;

 switch (VAR_18)
 {
  case 129:
   if (VAR_15->dest->mydest != VAR_0)
   {

    VAR_20 = VAR_12;
   }
   else
    VAR_20 = VAR_9;
   break;
  case 130:
   if (VAR_15->plannedstmt->hasReturning)
    VAR_20 = VAR_8;
   else
    VAR_20 = VAR_7;
   break;
  case 131:
   if (VAR_15->plannedstmt->hasReturning)
    VAR_20 = VAR_6;
   else
    VAR_20 = VAR_5;
   break;
  case 128:
   if (VAR_15->plannedstmt->hasReturning)
    VAR_20 = VAR_11;
   else
    VAR_20 = VAR_10;
   break;
  default:
   return VAR_4;
 }







 if (VAR_16)
  VAR_19 = 0;
 else
  VAR_19 = VAR_2;

 FUNC_3(VAR_15, VAR_19);

 FUNC_2(VAR_15, VAR_3, VAR_17, 1);

 VAR_14->processed = VAR_15->estate->es_processed;

 if ((VAR_20 == VAR_9 || VAR_15->plannedstmt->hasReturning) &&
  VAR_15->dest->mydest == VAR_0)
 {
  if (FUNC_6())
   FUNC_7(VAR_1, "consistency check on SPI tuple count failed");
 }

 FUNC_1(VAR_15);
 FUNC_0(VAR_15);







 return VAR_20;
}
