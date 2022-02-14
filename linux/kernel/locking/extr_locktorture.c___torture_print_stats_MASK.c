
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lock_stress_stats {long n_lock_acquired; long n_lock_fail; } ;
struct TYPE_2__ {int nrealwriters_stress; int nrealreaders_stress; int n_lock_torture_errors; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,char*,char*,long long,long,long,char*,int,char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_1,
      struct lock_stress_stats *VAR_2, bool VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5, VAR_6;
 long VAR_7 = 0, VAR_8 = VAR_2 ? VAR_2[0].n_lock_acquired : 0;
 long long VAR_9 = 0;

 VAR_6 = VAR_3 ? VAR_0.nrealwriters_stress : VAR_0.nrealreaders_stress;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_2[VAR_5].n_lock_fail)
   VAR_4 = 1;
  VAR_9 += VAR_2[VAR_5].n_lock_acquired;
  if (VAR_7 < VAR_2[VAR_5].n_lock_fail)
   VAR_7 = VAR_2[VAR_5].n_lock_fail;
  if (VAR_8 > VAR_2[VAR_5].n_lock_fail)
   VAR_8 = VAR_2[VAR_5].n_lock_fail;
 }
 VAR_1 += FUNC_1(VAR_1,
   "%s:  Total: %lld  Max/Min: %ld/%ld %s  Fail: %d %s\n",
   VAR_3 ? "Writes" : "Reads ",
   VAR_9, VAR_7, VAR_8, VAR_7 / 2 > VAR_8 ? "???" : "",
   VAR_4, VAR_4 ? "!!!" : "");
 if (VAR_4)
  FUNC_0(&VAR_0.n_lock_torture_errors);
}
