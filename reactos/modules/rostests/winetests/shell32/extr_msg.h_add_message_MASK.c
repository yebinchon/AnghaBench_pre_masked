
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct msg_sequence {int size; size_t count; TYPE_1__* sequence; } ;
struct message {int id; int lParam; int wParam; int flags; int message; } ;
struct TYPE_5__ {int id; int lParam; int wParam; int flags; int message; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct msg_sequence **VAR_0, int VAR_1,
    const struct message *VAR_2)
{
    struct msg_sequence *VAR_3 = VAR_0[VAR_1];

    if (!VAR_3->sequence)
    {
        VAR_3->size = 10;
        VAR_3->sequence = FUNC_1(VAR_3->size * sizeof (struct message));
    }

    if (VAR_3->count == VAR_3->size)
    {
        VAR_3->size *= 2;
        VAR_3->sequence = FUNC_2(VAR_3->sequence, VAR_3->size * sizeof (struct message));
    }

    FUNC_0(VAR_3->sequence);

    VAR_3->sequence[VAR_3->count].message = VAR_2->message;
    VAR_3->sequence[VAR_3->count].flags = VAR_2->flags;
    VAR_3->sequence[VAR_3->count].wParam = VAR_2->wParam;
    VAR_3->sequence[VAR_3->count].lParam = VAR_2->lParam;
    VAR_3->sequence[VAR_3->count].id = VAR_2->id;

    VAR_3->count++;
}
