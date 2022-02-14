
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {long* lowmem_reserve; struct free_area* free_area; scalar_t__ nr_reserved_highatomic; } ;
struct free_area {int * free_list; int nr_free; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct free_area*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct zone*,int ) ;

bool FUNC_4(struct zone *VAR_9, unsigned int VAR_10, unsigned long VAR_11,
    int VAR_12, unsigned int VAR_13,
    long VAR_14)
{
 long VAR_15 = VAR_11;
 int VAR_16;
 const bool VAR_17 = (VAR_13 & (VAR_1|VAR_3));


 VAR_14 -= (1 << VAR_10) - 1;

 if (VAR_13 & VAR_2)
  VAR_15 -= VAR_15 / 2;






 if (FUNC_1(!VAR_17)) {
  VAR_14 -= VAR_9->nr_reserved_highatomic;
 } else {






  if (VAR_13 & VAR_3)
   VAR_15 -= VAR_15 / 2;
  else
   VAR_15 -= VAR_15 / 4;
 }
 if (VAR_14 <= VAR_15 + VAR_9->lowmem_reserve[VAR_12])
  return 0;


 if (!VAR_10)
  return 1;


 for (VAR_16 = VAR_10; VAR_16 < VAR_4; VAR_16++) {
  struct free_area *VAR_18 = &VAR_9->free_area[VAR_16];
  int VAR_19;

  if (!VAR_18->nr_free)
   continue;

  for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++) {
   if (!FUNC_0(VAR_18, VAR_19))
    return 1;
  }







  if (VAR_17 &&
   !FUNC_2(&VAR_18->free_list[VAR_6]))
   return 1;
 }
 return 0;
}
