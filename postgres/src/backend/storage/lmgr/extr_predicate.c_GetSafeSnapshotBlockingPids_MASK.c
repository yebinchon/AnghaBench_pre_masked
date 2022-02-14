
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int inLink; TYPE_1__* sxactOut; } ;
struct TYPE_9__ {int pid; int possibleUnsafeConflicts; } ;
struct TYPE_8__ {int pid; } ;
typedef TYPE_2__ SERIALIZABLEXACT ;
typedef TYPE_3__* RWConflict ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(int VAR_4, int *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 SERIALIZABLEXACT *VAR_8;

 FUNC_1(VAR_2, VAR_0);


 for (VAR_8 = FUNC_0(); VAR_8 != ((void*)0); VAR_8 = FUNC_3(VAR_8))
 {
  if (VAR_8->pid == VAR_4)
   break;
 }


 if (VAR_8 != ((void*)0) && FUNC_5(VAR_8))
 {
  RWConflict VAR_9;


  VAR_9 = (RWConflict)
   FUNC_4(&VAR_8->possibleUnsafeConflicts,
       &VAR_8->possibleUnsafeConflicts,
       FUNC_6(VAR_1, VAR_3));

  while (VAR_9 != ((void*)0) && VAR_7 < VAR_6)
  {
   VAR_5[VAR_7++] = VAR_9->sxactOut->pid;
   VAR_9 = (RWConflict)
    FUNC_4(&VAR_8->possibleUnsafeConflicts,
        &VAR_9->inLink,
        FUNC_6(VAR_1, VAR_3));
  }
 }

 FUNC_2(VAR_2);

 return VAR_7;
}
