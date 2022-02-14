
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int high_mask; int low_mask; int max_buckets; int sortstate; int index; } ;
typedef int Relation ;
typedef TYPE_1__ HSpool ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int,int,int ,int *,int) ;

HSpool *
FUNC_3(Relation VAR_1, Relation VAR_2, uint32 VAR_3)
{
 HSpool *VAR_4 = (HSpool *) FUNC_1(sizeof(HSpool));

 VAR_4->index = VAR_2;
 VAR_4->high_mask = (((uint32) 1) << FUNC_0(VAR_3 + 1)) - 1;
 VAR_4->low_mask = (VAR_4->high_mask >> 1);
 VAR_4->max_buckets = VAR_3 - 1;






 VAR_4->sortstate = FUNC_2(VAR_1,
               VAR_2,
               VAR_4->high_mask,
               VAR_4->low_mask,
               VAR_4->max_buckets,
               VAR_0,
               ((void*)0),
               0);

 return VAR_4;
}
