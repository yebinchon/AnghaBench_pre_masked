
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_sequence {int size; size_t count; struct message* sequence; } ;
struct message {int dummy; } ;


 int FUNC_0 (struct message*) ;
 struct message* FUNC_1 (int) ;
 struct message* FUNC_2 (struct message*,int) ;

__attribute__((used)) static void FUNC_3(struct msg_sequence **VAR_0, int VAR_1,
    const struct message *VAR_2)
{
    struct msg_sequence *VAR_3 = VAR_0[VAR_1];

    if (!VAR_3->sequence)
    {
        VAR_3->size = 10;
        VAR_3->sequence = FUNC_1(VAR_3->size * sizeof (*VAR_3->sequence));
    }

    if (VAR_3->count == VAR_3->size)
    {
        VAR_3->size *= 2;
        VAR_3->sequence = FUNC_2(VAR_3->sequence, VAR_3->size * sizeof (*VAR_3->sequence));
    }

    FUNC_0(VAR_3->sequence);

    VAR_3->sequence[VAR_3->count] = *VAR_2;
    VAR_3->count++;
}
