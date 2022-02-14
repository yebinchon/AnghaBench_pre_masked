
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int args; } ;
typedef int Oid ;
typedef TYPE_1__* FuncCandidateList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *,int ,int ) ;

int
FUNC_1(int VAR_1,
     Oid *VAR_2,
     FuncCandidateList VAR_3,
     FuncCandidateList *VAR_4)
{
 FuncCandidateList VAR_5;
 FuncCandidateList VAR_6;
 int VAR_7 = 0;

 *VAR_4 = ((void*)0);

 for (VAR_5 = VAR_3;
   VAR_5 != ((void*)0);
   VAR_5 = VAR_6)
 {
  VAR_6 = VAR_5->next;
  if (FUNC_0(VAR_1, VAR_2, VAR_5->args,
       VAR_0))
  {
   VAR_5->next = *VAR_4;
   *VAR_4 = VAR_5;
   VAR_7++;
  }
 }

 return VAR_7;
}
