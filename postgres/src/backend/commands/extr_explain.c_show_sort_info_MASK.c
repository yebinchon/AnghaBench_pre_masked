
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int Tuplesortstate ;
struct TYPE_13__ {long spaceUsed; int spaceType; int sortMethod; } ;
typedef TYPE_2__ TuplesortInstrumentation ;
struct TYPE_15__ {scalar_t__ format; int indent; int str; int analyze; } ;
struct TYPE_14__ {TYPE_1__* shared_info; int * tuplesortstate; scalar_t__ sort_Done; } ;
struct TYPE_12__ {int num_workers; TYPE_2__* sinstrument; } ;
typedef TYPE_3__ SortState ;
typedef TYPE_4__ ExplainState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int,TYPE_4__*) ;
 int FUNC_1 (char*,char*,int,TYPE_4__*) ;
 int FUNC_2 (char*,char*,long,TYPE_4__*) ;
 int FUNC_3 (char*,char const*,TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(SortState *VAR_2, ExplainState *VAR_3)
{
 if (!VAR_3->analyze)
  return;

 if (VAR_2->sort_Done && VAR_2->tuplesortstate != ((void*)0))
 {
  Tuplesortstate *VAR_4 = (Tuplesortstate *) VAR_2->tuplesortstate;
  TuplesortInstrumentation VAR_5;
  const char *VAR_6;
  const char *VAR_7;
  long VAR_8;

  FUNC_6(VAR_4, &VAR_5);
  VAR_6 = FUNC_7(VAR_5.sortMethod);
  VAR_7 = FUNC_8(VAR_5.spaceType);
  VAR_8 = VAR_5.spaceUsed;

  if (VAR_3->format == VAR_0)
  {
   FUNC_5(VAR_3->str, VAR_3->indent * 2);
   FUNC_4(VAR_3->str, "Sort Method: %s  %s: %ldkB\n",
        VAR_6, VAR_7, VAR_8);
  }
  else
  {
   FUNC_3("Sort Method", VAR_6, VAR_3);
   FUNC_2("Sort Space Used", "kB", VAR_8, VAR_3);
   FUNC_3("Sort Space Type", VAR_7, VAR_3);
  }
 }

 if (VAR_2->shared_info != ((void*)0))
 {
  int VAR_9;
  bool VAR_10 = 0;

  for (VAR_9 = 0; VAR_9 < VAR_2->shared_info->num_workers; VAR_9++)
  {
   TuplesortInstrumentation *VAR_11;
   const char *VAR_12;
   const char *VAR_13;
   long VAR_14;

   VAR_11 = &VAR_2->shared_info->sinstrument[VAR_9];
   if (VAR_11->sortMethod == VAR_1)
    continue;
   VAR_12 = FUNC_7(VAR_11->sortMethod);
   VAR_13 = FUNC_8(VAR_11->spaceType);
   VAR_14 = VAR_11->spaceUsed;

   if (VAR_3->format == VAR_0)
   {
    FUNC_5(VAR_3->str, VAR_3->indent * 2);
    FUNC_4(VAR_3->str,
         "Worker %d:  Sort Method: %s  %s: %ldkB\n",
         VAR_9, VAR_12, VAR_13, VAR_14);
   }
   else
   {
    if (!VAR_10)
    {
     FUNC_1("Workers", "Workers", 0, VAR_3);
     VAR_10 = 1;
    }
    FUNC_1("Worker", ((void*)0), 1, VAR_3);
    FUNC_2("Worker Number", ((void*)0), VAR_9, VAR_3);
    FUNC_3("Sort Method", VAR_12, VAR_3);
    FUNC_2("Sort Space Used", "kB", VAR_14, VAR_3);
    FUNC_3("Sort Space Type", VAR_13, VAR_3);
    FUNC_0("Worker", ((void*)0), 1, VAR_3);
   }
  }
  if (VAR_10)
   FUNC_0("Workers", "Workers", 0, VAR_3);
 }
}
