
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {scalar_t__ room; } ;


 scalar_t__ FUNC_0 (struct snd_seq_pool*) ;

__attribute__((used)) static inline int FUNC_1(struct snd_seq_pool *VAR_0)
{
 return FUNC_0(VAR_0) >= VAR_0->room;
}
