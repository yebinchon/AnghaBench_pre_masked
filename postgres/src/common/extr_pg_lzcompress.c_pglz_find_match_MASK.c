
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
typedef size_t int16 ;
struct TYPE_4__ {char* pos; struct TYPE_4__* next; } ;
typedef TYPE_1__ PGLZ_HistEntry ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 size_t FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static inline int
FUNC_2(int16 *VAR_3, const char *VAR_4, const char *VAR_5,
    int *VAR_6, int *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 PGLZ_HistEntry *VAR_11;
 int16 VAR_12;
 int32 VAR_13 = 0;
 int32 VAR_14 = 0;




 VAR_12 = VAR_3[FUNC_1(VAR_4, VAR_5, VAR_10)];
 VAR_11 = &VAR_2[VAR_12];
 while (VAR_11 != VAR_0)
 {
  const char *VAR_15 = VAR_4;
  const char *VAR_16 = VAR_11->pos;
  int32 VAR_17;
  int32 VAR_18;




  VAR_17 = VAR_15 - VAR_16;
  if (VAR_17 >= 0x0fff)
   break;
  VAR_18 = 0;
  if (VAR_13 >= 16)
  {
   if (FUNC_0(VAR_15, VAR_16, VAR_13) == 0)
   {
    VAR_18 = VAR_13;
    VAR_15 += VAR_13;
    VAR_16 += VAR_13;
    while (VAR_15 < VAR_5 && *VAR_15 == *VAR_16 && VAR_18 < VAR_1)
    {
     VAR_18++;
     VAR_15++;
     VAR_16++;
    }
   }
  }
  else
  {
   while (VAR_15 < VAR_5 && *VAR_15 == *VAR_16 && VAR_18 < VAR_1)
   {
    VAR_18++;
    VAR_15++;
    VAR_16++;
   }
  }




  if (VAR_18 > VAR_13)
  {
   VAR_13 = VAR_18;
   VAR_14 = VAR_17;
  }




  VAR_11 = VAR_11->next;





  if (VAR_11 != VAR_0)
  {
   if (VAR_13 >= VAR_8)
    break;
   VAR_8 -= (VAR_8 * VAR_9) / 100;
  }
 }





 if (VAR_13 > 2)
 {
  *VAR_6 = VAR_13;
  *VAR_7 = VAR_14;
  return 1;
 }

 return 0;
}
