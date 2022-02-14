
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int owner; int klocked; int locked; } ;



__attribute__((used)) static inline int FUNC_0(struct snd_seq_queue *VAR_0, int VAR_1)
{
 return (VAR_0->owner == VAR_1) || (!VAR_0->locked && !VAR_0->klocked);
}
