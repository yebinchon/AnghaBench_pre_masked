
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ affinity; } ;
struct record {int affinity_mask; TYPE_1__ opts; } ;
struct mmap {int affinity_mask; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int,int *) ;

__attribute__((used)) static void FUNC_4(struct record *VAR_1, struct mmap *VAR_2)
{
 if (VAR_1->opts.affinity != VAR_0 &&
     !FUNC_0(&VAR_1->affinity_mask, &VAR_2->affinity_mask)) {
  FUNC_2(&VAR_1->affinity_mask);
  FUNC_1(&VAR_1->affinity_mask, &VAR_1->affinity_mask, &VAR_2->affinity_mask);
  FUNC_3(0, sizeof(VAR_1->affinity_mask), &VAR_1->affinity_mask);
 }
}
