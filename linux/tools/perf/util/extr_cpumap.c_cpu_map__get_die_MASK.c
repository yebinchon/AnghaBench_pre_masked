
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int* map; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct perf_cpu_map*,int,void*) ;

int FUNC_3(struct perf_cpu_map *VAR_0, int VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (VAR_1 > VAR_0->nr)
  return -1;

 VAR_3 = VAR_0->map[VAR_1];

 VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 == -1)
  VAR_4 = 0;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_5 == -1)
  return -1;







 if (FUNC_0(VAR_4 >> 8, "The die id number is too big.\n"))
  return -1;

 if (FUNC_0(VAR_5 >> 8, "The socket id number is too big.\n"))
  return -1;

 return (VAR_5 << 8) | (VAR_4 & 0xff);
}
