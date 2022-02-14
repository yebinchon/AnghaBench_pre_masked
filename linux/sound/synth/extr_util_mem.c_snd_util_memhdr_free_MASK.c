
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; } ;
struct snd_util_memhdr {struct list_head block; } ;


 struct snd_util_memhdr* FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct snd_util_memhdr*) ;
 int FUNC_2 (struct list_head*) ;

void FUNC_3(struct snd_util_memhdr *VAR_0)
{
 struct list_head *VAR_1;

 if (!VAR_0)
  return;

 while ((VAR_1 = VAR_0->block.next) != &VAR_0->block) {
  FUNC_2(VAR_1);
  FUNC_1(FUNC_0(VAR_1));
 }
 FUNC_1(VAR_0);
}
