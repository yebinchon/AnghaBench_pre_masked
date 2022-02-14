
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmap_len; } ;
struct evlist {TYPE_1__ core; } ;
typedef int sbuf ;



 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,...) ;
 char* FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,int*) ;

int FUNC_3(struct evlist *VAR_1, int VAR_2, char *VAR_3, size_t VAR_4)
{
 char VAR_5[VAR_0], *VAR_6 = FUNC_1(VAR_2, VAR_5, sizeof(VAR_5));
 int VAR_7 = VAR_1->core.mmap_len / 1024, VAR_8, VAR_9 = 0;

 switch (VAR_2) {
 case 128:
  FUNC_2("kernel/perf_event_mlock_kb", &VAR_8);
  VAR_9 += FUNC_0(VAR_3 + VAR_9, VAR_4 - VAR_9,
         "Error:\t%s.\n"
         "Hint:\tCheck /proc/sys/kernel/perf_event_mlock_kb (%d kB) setting.\n"
         "Hint:\tTried using %zd kB.\n",
         VAR_6, VAR_8, VAR_7);

  if (VAR_7 >= VAR_8) {
   VAR_9 += FUNC_0(VAR_3 + VAR_9, VAR_4 - VAR_9,
          "Hint:\tTry 'sudo sh -c \"echo %d > /proc/sys/kernel/perf_event_mlock_kb\"', or\n",
          VAR_8 + VAR_7);
  }

  VAR_9 += FUNC_0(VAR_3 + VAR_9, VAR_4 - VAR_9,
         "Hint:\tTry using a smaller -m/--mmap-pages value.");
  break;
 default:
  FUNC_0(VAR_3, VAR_4, "%s", VAR_6);
  break;
 }

 return 0;
}
