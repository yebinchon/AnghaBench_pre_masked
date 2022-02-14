
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int as_nplans; TYPE_3__** appendplans; } ;
struct TYPE_12__ {int ms_nplans; TYPE_3__** mergeplans; } ;
struct TYPE_11__ {int * chgParam; struct TYPE_11__* lefttree; } ;
struct TYPE_10__ {int ss_currentRelation; } ;
struct TYPE_9__ {TYPE_3__* subplan; } ;
typedef TYPE_1__ SubqueryScanState ;
typedef TYPE_2__ ScanState ;
typedef TYPE_3__ PlanState ;
typedef int Oid ;
typedef TYPE_4__ MergeAppendState ;
typedef TYPE_5__ AppendState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static ScanState *
FUNC_2(PlanState *VAR_0, Oid VAR_1,
     bool *VAR_2)
{
 ScanState *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0))
  return ((void*)0);
 switch (FUNC_1(VAR_0))
 {



  case 130:
  case 131:
  case 135:
  case 136:
  case 139:
  case 128:
  case 137:
  case 138:
   {
    ScanState *VAR_4 = (ScanState *) VAR_0;

    if (FUNC_0(VAR_4->ss_currentRelation) == VAR_1)
     VAR_3 = VAR_4;
    break;
   }





  case 140:
   {
    AppendState *VAR_5 = (AppendState *) VAR_0;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_5->as_nplans; VAR_6++)
    {
     ScanState *VAR_7 = FUNC_2(VAR_5->appendplans[VAR_6],
              VAR_1,
              VAR_2);

     if (!VAR_7)
      continue;
     if (VAR_3)
      return ((void*)0);
     VAR_3 = VAR_7;
    }
    break;
   }




  case 133:
   {
    MergeAppendState *VAR_8 = (MergeAppendState *) VAR_0;
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_8->ms_nplans; VAR_9++)
    {
     ScanState *VAR_10 = FUNC_2(VAR_8->mergeplans[VAR_9],
              VAR_1,
              VAR_2);

     if (!VAR_10)
      continue;
     if (VAR_3)
      return ((void*)0);
     VAR_3 = VAR_10;
    }
    break;
   }





  case 132:
  case 134:
   VAR_3 = FUNC_2(VAR_0->lefttree,
           VAR_1,
           VAR_2);
   break;




  case 129:
   VAR_3 = FUNC_2(((SubqueryScanState *) VAR_0)->subplan,
           VAR_1,
           VAR_2);
   break;

  default:

   break;
 }





 if (VAR_3 && VAR_0->chgParam != ((void*)0))
  *VAR_2 = 1;

 return VAR_3;
}
