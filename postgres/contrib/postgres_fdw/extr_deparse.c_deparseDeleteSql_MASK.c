
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* trigdesc; } ;
struct TYPE_6__ {scalar_t__ trig_delete_after_row; } ;
typedef int StringInfo ;
typedef TYPE_2__* Relation ;
typedef int RangeTblEntry ;
typedef int List ;
typedef int Index ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int *,int ,TYPE_2__*,int,int ,int *,int **) ;

void
FUNC_3(StringInfo VAR_1, RangeTblEntry *VAR_2,
     Index VAR_3, Relation VAR_4,
     List *VAR_5,
     List **VAR_6)
{
 FUNC_0(VAR_1, "DELETE FROM ");
 FUNC_1(VAR_1, VAR_4);
 FUNC_0(VAR_1, " WHERE ctid = $1");

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_4->trigdesc && VAR_4->trigdesc->trig_delete_after_row,
       VAR_0, VAR_5, VAR_6);
}
