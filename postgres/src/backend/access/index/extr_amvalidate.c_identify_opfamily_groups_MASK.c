
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_13__ {int n_members; TYPE_1__** members; int ordered; } ;
struct TYPE_12__ {scalar_t__ amoplefttype; scalar_t__ amoprighttype; int amopstrategy; } ;
struct TYPE_11__ {scalar_t__ amproclefttype; scalar_t__ amprocrighttype; int amprocnum; } ;
struct TYPE_10__ {scalar_t__ lefttype; scalar_t__ righttype; int operatorset; int functionset; } ;
struct TYPE_9__ {int tuple; } ;
typedef TYPE_2__ OpFamilyOpFuncGroup ;
typedef int List ;
typedef TYPE_3__* Form_pg_amproc ;
typedef TYPE_4__* Form_pg_amop ;
typedef TYPE_5__ CatCList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;

List *
FUNC_4(CatCList *VAR_2, CatCList *VAR_3)
{
 List *VAR_4 = VAR_1;
 OpFamilyOpFuncGroup *VAR_5;
 Form_pg_amop VAR_6;
 Form_pg_amproc VAR_7;
 int VAR_8,
    VAR_9;


 if (!VAR_2->ordered || !VAR_3->ordered)
  FUNC_1(VAR_0, "cannot validate operator family without ordered data");






 VAR_5 = ((void*)0);
 VAR_8 = VAR_9 = 0;
 if (VAR_8 < VAR_2->n_members)
 {
  VAR_6 = (Form_pg_amop) FUNC_0(&VAR_2->members[VAR_8]->tuple);
  VAR_8++;
 }
 else
  VAR_6 = ((void*)0);
 if (VAR_9 < VAR_3->n_members)
 {
  VAR_7 = (Form_pg_amproc) FUNC_0(&VAR_3->members[VAR_9]->tuple);
  VAR_9++;
 }
 else
  VAR_7 = ((void*)0);

 while (VAR_6 || VAR_7)
 {
  if (VAR_6 && VAR_5 &&
   VAR_6->amoplefttype == VAR_5->lefttype &&
   VAR_6->amoprighttype == VAR_5->righttype)
  {



   if (VAR_6->amopstrategy > 0 && VAR_6->amopstrategy < 64)
    VAR_5->operatorset |= ((uint64) 1) << VAR_6->amopstrategy;

   if (VAR_8 < VAR_2->n_members)
   {
    VAR_6 = (Form_pg_amop) FUNC_0(&VAR_2->members[VAR_8]->tuple);
    VAR_8++;
   }
   else
    VAR_6 = ((void*)0);
   continue;
  }

  if (VAR_7 && VAR_5 &&
   VAR_7->amproclefttype == VAR_5->lefttype &&
   VAR_7->amprocrighttype == VAR_5->righttype)
  {



   if (VAR_7->amprocnum > 0 && VAR_7->amprocnum < 64)
    VAR_5->functionset |= ((uint64) 1) << VAR_7->amprocnum;

   if (VAR_9 < VAR_3->n_members)
   {
    VAR_7 = (Form_pg_amproc) FUNC_0(&VAR_3->members[VAR_9]->tuple);
    VAR_9++;
   }
   else
    VAR_7 = ((void*)0);
   continue;
  }


  VAR_5 = (OpFamilyOpFuncGroup *) FUNC_3(sizeof(OpFamilyOpFuncGroup));
  if (VAR_6 &&
   (!VAR_7 ||
    (VAR_6->amoplefttype < VAR_7->amproclefttype ||
     (VAR_6->amoplefttype == VAR_7->amproclefttype &&
      VAR_6->amoprighttype < VAR_7->amprocrighttype))))
  {
   VAR_5->lefttype = VAR_6->amoplefttype;
   VAR_5->righttype = VAR_6->amoprighttype;
  }
  else
  {
   VAR_5->lefttype = VAR_7->amproclefttype;
   VAR_5->righttype = VAR_7->amprocrighttype;
  }
  VAR_5->operatorset = VAR_5->functionset = 0;
  VAR_4 = FUNC_2(VAR_4, VAR_5);
 }

 return VAR_4;
}
