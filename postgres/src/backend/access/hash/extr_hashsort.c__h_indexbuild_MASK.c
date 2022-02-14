
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ int64 ;
struct TYPE_3__ {int index; int low_mask; int high_mask; int max_buckets; int sortstate; } ;
typedef int Relation ;
typedef int * IndexTuple ;
typedef TYPE_1__ HSpool ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int * FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

void
FUNC_7(HSpool *VAR_1, Relation VAR_2)
{
 IndexTuple VAR_3;
 int64 VAR_4 = 0;




 FUNC_6(VAR_1->sortstate);

 while ((VAR_3 = FUNC_5(VAR_1->sortstate, 1)) != ((void*)0))
 {
  FUNC_1(VAR_1->index, VAR_3, VAR_2);

  FUNC_4(VAR_0,
          ++VAR_4);
 }
}
