
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int oid; int args; } ;
typedef int Oid ;
typedef int List ;
typedef int FuncLookupError ;
typedef TYPE_1__* FuncCandidateList ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int,int ,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int const*,int ,int) ;

__attribute__((used)) static Oid
FUNC_3(List *VAR_4, int VAR_5, const Oid *VAR_6,
        bool VAR_7, FuncLookupError *VAR_8)
{
 FuncCandidateList VAR_9;


 FUNC_0(VAR_6 != ((void*)0) || VAR_5 == 0);


 *VAR_8 = VAR_1;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_3, 0, 0,
          VAR_7);




 if (VAR_5 < 0)
 {
  if (VAR_9)
  {

   if (VAR_9->next)
   {
    *VAR_8 = VAR_0;
    return VAR_2;
   }

   return VAR_9->oid;
  }
  else
   return VAR_2;
 }





 while (VAR_9)
 {

  if (VAR_5 == 0 ||
   FUNC_2(VAR_6, VAR_9->args, VAR_5 * sizeof(Oid)) == 0)
   return VAR_9->oid;
  VAR_9 = VAR_9->next;
 }

 return VAR_2;
}
