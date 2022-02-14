
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pending_list {size_t num; TYPE_3__* objs; } ;
struct TYPE_4__ {int source_idx; int line_num; unsigned long offset; unsigned long load_offset; } ;
struct TYPE_5__ {TYPE_1__ line; } ;
struct TYPE_6__ {TYPE_2__ u; int tag; } ;


 int VAR_0 ;
 int FUNC_0 (struct pending_list*) ;

__attribute__((used)) static inline void FUNC_1(struct pending_list* VAR_1, int VAR_2,
                                    int VAR_3, unsigned long VAR_4,
                                    unsigned long VAR_5)
{
    FUNC_0(VAR_1);
    VAR_1->objs[VAR_1->num].tag = VAR_0;
    VAR_1->objs[VAR_1->num].u.line.source_idx = VAR_2;
    VAR_1->objs[VAR_1->num].u.line.line_num = VAR_3;
    VAR_1->objs[VAR_1->num].u.line.offset = VAR_4;
    VAR_1->objs[VAR_1->num].u.line.load_offset = VAR_5;
    VAR_1->num++;
}
