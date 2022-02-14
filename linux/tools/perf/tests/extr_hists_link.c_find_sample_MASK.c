
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct sample {struct symbol* sym; struct map* map; struct thread* thread; } ;
struct map {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct sample *VAR_0, size_t VAR_1,
         struct thread *VAR_2, struct map *VAR_3, struct symbol *VAR_4)
{
 while (VAR_1--) {
  if (VAR_0->thread == VAR_2 && VAR_0->map == VAR_3 &&
      VAR_0->sym == VAR_4)
   return 1;
  VAR_0++;
 }
 return 0;
}
