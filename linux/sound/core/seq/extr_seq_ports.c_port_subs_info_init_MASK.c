
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_port_subs_info {int * close; int * open; int list_mutex; int list_lock; scalar_t__ exclusive; scalar_t__ count; int list_head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct snd_seq_port_subs_info *VAR_0)
{
 FUNC_0(&VAR_0->list_head);
 VAR_0->count = 0;
 VAR_0->exclusive = 0;
 FUNC_2(&VAR_0->list_lock);
 FUNC_1(&VAR_0->list_mutex);
 VAR_0->open = ((void*)0);
 VAR_0->close = ((void*)0);
}
