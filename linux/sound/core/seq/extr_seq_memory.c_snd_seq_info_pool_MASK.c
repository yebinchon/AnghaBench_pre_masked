
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int event_alloc_failures; int event_alloc_success; int max_used; int counter; int total_elements; } ;
struct snd_info_buffer {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_info_buffer*,char*,char*,int ) ;

void FUNC_2(struct snd_info_buffer *VAR_0,
         struct snd_seq_pool *VAR_1, char *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;
 FUNC_1(VAR_0, "%sPool size          : %d\n", VAR_2, VAR_1->total_elements);
 FUNC_1(VAR_0, "%sCells in use       : %d\n", VAR_2, FUNC_0(&VAR_1->counter));
 FUNC_1(VAR_0, "%sPeak cells in use  : %d\n", VAR_2, VAR_1->max_used);
 FUNC_1(VAR_0, "%sAlloc success      : %d\n", VAR_2, VAR_1->event_alloc_success);
 FUNC_1(VAR_0, "%sAlloc failures     : %d\n", VAR_2, VAR_1->event_alloc_failures);
}
