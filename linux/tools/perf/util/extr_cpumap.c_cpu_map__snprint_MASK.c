
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int* map; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,size_t,char*,char*,int,...) ;

size_t FUNC_2(struct perf_cpu_map *VAR_2, char *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = -1;
 bool VAR_8 = 1;
 size_t VAR_9 = 0;



 for (VAR_5 = 0; VAR_5 < VAR_2->nr + 1; VAR_5++) {
  bool VAR_10 = VAR_5 == VAR_2->nr;

  VAR_6 = VAR_10 ? VAR_1 : VAR_2->map[VAR_5];

  if (VAR_7 == -1) {
   VAR_7 = VAR_5;
   if (VAR_10) {
    VAR_9 += FUNC_1(VAR_3 + VAR_9, VAR_4 - VAR_9,
      "%s%d", VAR_8 ? "" : ",",
      VAR_2->map[VAR_5]);
   }
  } else if (((VAR_5 - VAR_7) != (VAR_6 - VAR_2->map[VAR_7])) || VAR_10) {
   int VAR_11 = VAR_5 - 1;

   if (VAR_7 == VAR_11) {
    VAR_9 += FUNC_1(VAR_3 + VAR_9, VAR_4 - VAR_9,
      "%s%d", VAR_8 ? "" : ",",
      VAR_2->map[VAR_7]);
   } else {
    VAR_9 += FUNC_1(VAR_3 + VAR_9, VAR_4 - VAR_9,
      "%s%d-%d", VAR_8 ? "" : ",",
      VAR_2->map[VAR_7], VAR_2->map[VAR_11]);
   }
   VAR_8 = 0;
   VAR_7 = VAR_5;
  }
 }



 FUNC_0("cpumask list: %s\n", VAR_3);
 return VAR_9;
}
