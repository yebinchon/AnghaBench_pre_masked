
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_tracking {int* tids; int nr_tids; } ;
typedef int pid_t ;


 int* FUNC_0 (int,int) ;
 void* FUNC_1 (int*,int) ;

__attribute__((used)) static int FUNC_2(struct switch_tracking *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = VAR_1 + 1;

 if (VAR_1 < 0)
  return -1;

 if (!VAR_0->tids) {
  VAR_0->tids = FUNC_0(VAR_3, sizeof(pid_t));
  if (!VAR_0->tids)
   return -1;
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
   VAR_0->tids[VAR_2] = -1;
  VAR_0->nr_tids = VAR_3;
  return 0;
 }

 if (VAR_1 >= VAR_0->nr_tids) {
  void *VAR_4;

  VAR_4 = FUNC_1(VAR_0->tids, VAR_3 * sizeof(pid_t));
  if (!VAR_4)
   return -1;
  VAR_0->tids = VAR_4;
  for (VAR_2 = VAR_0->nr_tids; VAR_2 < VAR_3; VAR_2++)
   VAR_0->tids[VAR_2] = -1;
  VAR_0->nr_tids = VAR_3;
  return 0;
 }

 return 0;
}
