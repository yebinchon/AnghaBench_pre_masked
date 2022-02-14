
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size_log2; TYPE_1__* control; int area; int buckets; } ;
typedef TYPE_2__ dshash_table ;
struct TYPE_4__ {scalar_t__ size_log2; int buckets; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(dshash_table *VAR_0)
{
 if (VAR_0->size_log2 != VAR_0->control->size_log2)
 {
  VAR_0->buckets = FUNC_0(VAR_0->area,
             VAR_0->control->buckets);
  VAR_0->size_log2 = VAR_0->control->size_log2;
 }
}
