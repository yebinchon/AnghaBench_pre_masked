
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int nestLevel; int atCommit; int backend; int relnode; struct TYPE_11__* next; } ;
typedef TYPE_1__ SMgrRelation ;
typedef TYPE_1__ PendingRelDelete ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 TYPE_1__ FUNC_6 (int ,int ) ;

void
FUNC_7(bool VAR_1)
{
 int VAR_2 = FUNC_0();
 PendingRelDelete *VAR_3;
 PendingRelDelete *VAR_4;
 PendingRelDelete *VAR_5;
 int VAR_6 = 0,
    VAR_7 = 0,
    VAR_8 = 0;
 SMgrRelation *VAR_9 = ((void*)0);

 VAR_4 = ((void*)0);
 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_5)
 {
  VAR_5 = VAR_3->next;
  if (VAR_3->nestLevel < VAR_2)
  {

   VAR_4 = VAR_3;
  }
  else
  {

   if (VAR_4)
    VAR_4->next = VAR_5;
   else
    VAR_0 = VAR_5;

   if (VAR_3->atCommit == VAR_1)
   {
    SMgrRelation VAR_10;

    VAR_10 = FUNC_6(VAR_3->relnode, VAR_3->backend);


    if (VAR_8 == 0)
    {
     VAR_8 = 8;
     VAR_9 = FUNC_1(sizeof(SMgrRelation) * VAR_8);
    }
    else if (VAR_8 <= VAR_6)
    {
     VAR_8 *= 2;
     VAR_9 = FUNC_3(VAR_9, sizeof(SMgrRelation) * VAR_8);
    }

    VAR_9[VAR_6++] = VAR_10;
   }

   FUNC_2(VAR_3);

  }
 }

 if (VAR_6 > 0)
 {
  FUNC_5(VAR_9, VAR_6, 0);

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   FUNC_4(VAR_9[VAR_7]);

  FUNC_2(VAR_9);
 }
}
