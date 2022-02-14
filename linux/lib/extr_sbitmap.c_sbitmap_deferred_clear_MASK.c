
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbitmap {TYPE_1__* map; } ;
struct TYPE_2__ {unsigned long word; int swap_lock; int cleared; } ;


 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (int *,int ) ;

__attribute__((used)) static inline bool FUNC_4(struct sbitmap *VAR_0, int VAR_1)
{
 unsigned long VAR_2, VAR_3;
 bool VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_1(&VAR_0->map[VAR_1].swap_lock, VAR_5);

 if (!VAR_0->map[VAR_1].cleared)
  goto out_unlock;




 VAR_2 = FUNC_3(&VAR_0->map[VAR_1].cleared, 0);




 do {
  VAR_3 = VAR_0->map[VAR_1].word;
 } while (FUNC_0(&VAR_0->map[VAR_1].word, VAR_3, VAR_3 & ~VAR_2) != VAR_3);

 VAR_4 = 1;
out_unlock:
 FUNC_2(&VAR_0->map[VAR_1].swap_lock, VAR_5);
 return VAR_4;
}
