
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct call_sequence {int size; size_t count; TYPE_1__* sequence; } ;
struct call_entry {int attributes; int attr_count; int ret; int arg3W; int arg2W; int arg1W; int column; int line; int id; } ;
struct TYPE_5__ {int attributes; int attr_count; int ret; int arg3W; int arg2W; int arg1W; int column; int line; int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct call_sequence **VAR_0, int VAR_1,
    const struct call_entry *VAR_2)
{
    struct call_sequence *VAR_3 = VAR_0[VAR_1];

    if (!VAR_3->sequence)
    {
        VAR_3->size = 10;
        VAR_3->sequence = FUNC_1(VAR_3->size * sizeof (struct call_entry));
    }

    if (VAR_3->count == VAR_3->size)
    {
        VAR_3->size *= 2;
        VAR_3->sequence = FUNC_2(VAR_3->sequence, VAR_3->size * sizeof (struct call_entry));
    }

    FUNC_0(VAR_3->sequence);

    VAR_3->sequence[VAR_3->count].id = VAR_2->id;
    VAR_3->sequence[VAR_3->count].line = VAR_2->line;
    VAR_3->sequence[VAR_3->count].column = VAR_2->column;
    VAR_3->sequence[VAR_3->count].arg1W = VAR_2->arg1W;
    VAR_3->sequence[VAR_3->count].arg2W = VAR_2->arg2W;
    VAR_3->sequence[VAR_3->count].arg3W = VAR_2->arg3W;
    VAR_3->sequence[VAR_3->count].ret = VAR_2->ret;
    VAR_3->sequence[VAR_3->count].attr_count = VAR_2->attr_count;
    VAR_3->sequence[VAR_3->count].attributes = VAR_2->attributes;

    VAR_3->count++;
}
