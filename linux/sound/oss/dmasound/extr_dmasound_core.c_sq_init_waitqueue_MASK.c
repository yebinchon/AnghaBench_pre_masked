
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sound_queue {scalar_t__ busy; int sync_queue; int open_queue; int action_queue; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct sound_queue *VAR_0)
{
 FUNC_0(&VAR_0->action_queue);
 FUNC_0(&VAR_0->open_queue);
 FUNC_0(&VAR_0->sync_queue);
 VAR_0->busy = 0;
}
