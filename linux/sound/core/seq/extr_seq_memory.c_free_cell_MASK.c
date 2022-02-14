
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int counter; struct snd_seq_event_cell* free; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct snd_seq_pool *VAR_0,
        struct snd_seq_event_cell *VAR_1)
{
 VAR_1->next = VAR_0->free;
 VAR_0->free = VAR_1;
 FUNC_0(&VAR_0->counter);
}
