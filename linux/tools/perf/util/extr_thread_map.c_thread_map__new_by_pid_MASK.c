
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int nr; int refcnt; } ;
struct dirent {int d_name; } ;
typedef int pid_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dirent**) ;
 int FUNC_2 (struct perf_thread_map*,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,struct dirent***,int ,int *) ;
 int FUNC_5 (char*,char*,int) ;
 struct perf_thread_map* FUNC_6 (int) ;
 int FUNC_7 (struct dirent**) ;

struct perf_thread_map *FUNC_8(pid_t VAR_1)
{
 struct perf_thread_map *VAR_2;
 char VAR_3[256];
 int VAR_4;
 struct dirent **VAR_5 = ((void*)0);
 int VAR_6;

 FUNC_5(VAR_3, "/proc/%d/task", VAR_1);
 VAR_4 = FUNC_4(VAR_3, &VAR_5, VAR_0, ((void*)0));
 if (VAR_4 <= 0)
  return ((void*)0);

 VAR_2 = FUNC_6(VAR_4);
 if (VAR_2 != ((void*)0)) {
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   FUNC_2(VAR_2, VAR_6, FUNC_0(VAR_5[VAR_6]->d_name));
  VAR_2->nr = VAR_4;
  FUNC_3(&VAR_2->refcnt, 1);
 }

 for (VAR_6=0; VAR_6<VAR_4; VAR_6++)
  FUNC_7(&VAR_5[VAR_6]);
 FUNC_1(VAR_5);

 return VAR_2;
}
