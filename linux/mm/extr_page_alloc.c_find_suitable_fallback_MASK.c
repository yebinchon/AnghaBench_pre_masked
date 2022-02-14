
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_area {scalar_t__ nr_free; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 int** VAR_1 ;
 scalar_t__ FUNC_1 (struct free_area*,int) ;

int FUNC_2(struct free_area *VAR_2, unsigned int VAR_3,
   int VAR_4, bool VAR_5, bool *VAR_6)
{
 int VAR_7;
 int VAR_8;

 if (VAR_2->nr_free == 0)
  return -1;

 *VAR_6 = 0;
 for (VAR_7 = 0;; VAR_7++) {
  VAR_8 = VAR_1[VAR_4][VAR_7];
  if (VAR_8 == VAR_0)
   break;

  if (FUNC_1(VAR_2, VAR_8))
   continue;

  if (FUNC_0(VAR_3, VAR_4))
   *VAR_6 = 1;

  if (!VAR_5)
   return VAR_8;

  if (*VAR_6)
   return VAR_8;
 }

 return -1;
}
