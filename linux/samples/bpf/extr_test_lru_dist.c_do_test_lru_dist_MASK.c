
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfect_lru {int nr_unique; int total; unsigned int nr_misses; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,unsigned long long*,unsigned long long*) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned long long*,unsigned long long*,int ) ;
 int FUNC_3 (unsigned int) ;
 int VAR_1 ;
 unsigned long long* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct pfect_lru*) ;
 int FUNC_5 (struct pfect_lru*,unsigned int,int) ;
 int FUNC_6 (struct pfect_lru*,unsigned long long) ;
 int FUNC_7 (char*,int,int,...) ;

__attribute__((used)) static void FUNC_8(int VAR_4, void *VAR_5)
{
 unsigned int VAR_6 = 0;
 struct pfect_lru VAR_7;
 unsigned long long VAR_8, VAR_9 = 1234;
 unsigned int VAR_10;

 unsigned int VAR_11 = ((unsigned int *)VAR_5)[0];
 unsigned int VAR_12 = ((unsigned int *)VAR_5)[1];
 unsigned long long VAR_13 = VAR_4 * VAR_1;

 FUNC_5(&VAR_7, VAR_12, VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_8 = VAR_2[VAR_10] + VAR_13;

  FUNC_6(&VAR_7, VAR_8);

  if (!FUNC_1(VAR_11, &VAR_8, &VAR_9))
   continue;

  if (FUNC_2(VAR_11, &VAR_8, &VAR_9, VAR_0)) {
   FUNC_7("bpf_map_update_elem(lru_map_fd, %llu): errno:%d\n",
          VAR_8, VAR_3);
   FUNC_0(0);
  }

  VAR_6++;
 }

 FUNC_7("    task:%d BPF LRU: nr_unique:%u(/%u) nr_misses:%u(/%u)\n",
        VAR_4, VAR_7.nr_unique, VAR_1, VAR_6,
        VAR_1);
 FUNC_7("    task:%d Perfect LRU: nr_unique:%u(/%u) nr_misses:%u(/%u)\n",
        VAR_4, VAR_7.nr_unique, VAR_7.total,
        VAR_7.nr_misses, VAR_7.total);

 FUNC_4(&VAR_7);
 FUNC_3(VAR_11);
}
