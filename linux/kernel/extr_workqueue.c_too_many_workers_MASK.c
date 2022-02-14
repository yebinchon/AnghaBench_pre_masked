
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int flags; int nr_idle; int nr_workers; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct worker_pool *VAR_2)
{
 bool VAR_3 = VAR_2->flags & VAR_1;
 int VAR_4 = VAR_2->nr_idle + VAR_3;
 int VAR_5 = VAR_2->nr_workers - VAR_4;

 return VAR_4 > 2 && (VAR_4 - 2) * VAR_0 >= VAR_5;
}
