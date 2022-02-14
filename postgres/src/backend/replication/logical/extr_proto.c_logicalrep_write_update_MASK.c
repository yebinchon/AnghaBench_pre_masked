
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {scalar_t__ relreplident; } ;
typedef int StringInfo ;
typedef TYPE_2__* Relation ;
typedef int * HeapTuple ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(StringInfo VAR_3, Relation VAR_4, HeapTuple VAR_5,
      HeapTuple VAR_6)
{
 FUNC_3(VAR_3, 'U');

 FUNC_0(VAR_4->rd_rel->relreplident == VAR_0 ||
     VAR_4->rd_rel->relreplident == VAR_1 ||
     VAR_4->rd_rel->relreplident == VAR_2);


 FUNC_4(VAR_3, FUNC_1(VAR_4));

 if (VAR_5 != ((void*)0))
 {
  if (VAR_4->rd_rel->relreplident == VAR_1)
   FUNC_3(VAR_3, 'O');
  else
   FUNC_3(VAR_3, 'K');
  FUNC_2(VAR_3, VAR_4, VAR_5);
 }

 FUNC_3(VAR_3, 'N');
 FUNC_2(VAR_3, VAR_4, VAR_6);
}
