
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct block_flags_stat_t {int from; int step; TYPE_2__* as; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_6__ {TYPE_1__* block; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_3__ RFlagItem ;



__attribute__((used)) static bool FUNC_0(RFlagItem *VAR_0, void *VAR_1) {
 struct block_flags_stat_t *VAR_2 = (struct block_flags_stat_t *)VAR_1;
 int VAR_3 = (VAR_0->offset - VAR_2->from) / VAR_2->step;
 VAR_2->as->block[VAR_3].flags++;
 return 1;
}
