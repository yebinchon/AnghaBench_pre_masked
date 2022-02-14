
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* GetForeignRowMarkType ) (TYPE_1__*,int) ;} ;
struct TYPE_6__ {scalar_t__ rtekind; scalar_t__ relkind; int relid; } ;
typedef int RowMarkType ;
typedef TYPE_1__ RangeTblEntry ;
typedef int LockClauseStrength ;
typedef TYPE_2__ FdwRoutine ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;





 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

RowMarkType
FUNC_3(RangeTblEntry *VAR_9, LockClauseStrength VAR_10)
{
 if (VAR_9->rtekind != VAR_8)
 {

  return VAR_2;
 }
 else if (VAR_9->relkind == VAR_1)
 {

  FdwRoutine *VAR_11 = FUNC_0(VAR_9->relid);

  if (VAR_11->GetForeignRowMarkType != ((void*)0))
   return VAR_11->GetForeignRowMarkType(VAR_9, VAR_10);

  return VAR_2;
 }
 else
 {

  switch (VAR_10)
  {
   case 128:





    return VAR_6;
    break;
   case 132:
    return VAR_4;
    break;
   case 130:
    return VAR_7;
    break;
   case 131:
    return VAR_5;
    break;
   case 129:
    return VAR_3;
    break;
  }
  FUNC_1(VAR_0, "unrecognized LockClauseStrength %d", (int) VAR_10);
  return VAR_3;
 }
}
