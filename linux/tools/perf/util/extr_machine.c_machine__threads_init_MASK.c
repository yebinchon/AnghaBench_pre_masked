
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threads {int * last_match; int dead; scalar_t__ nr; int lock; int entries; } ;
struct machine {struct threads* threads; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct machine *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct threads *VAR_4 = &VAR_2->threads[VAR_3];
  VAR_4->entries = VAR_0;
  FUNC_1(&VAR_4->lock);
  VAR_4->nr = 0;
  FUNC_0(&VAR_4->dead);
  VAR_4->last_match = ((void*)0);
 }
}
