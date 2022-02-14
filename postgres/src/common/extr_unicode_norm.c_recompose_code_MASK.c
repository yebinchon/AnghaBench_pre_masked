
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_6__ {size_t dec_index; scalar_t__ codepoint; } ;
typedef TYPE_1__ pg_unicode_decomposition ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_3(uint32 VAR_10, uint32 VAR_11, uint32 *VAR_12)
{





 if (VAR_10 >= VAR_0 && VAR_10 < VAR_0 + VAR_1 &&
  VAR_11 >= VAR_8 && VAR_11 < VAR_8 + VAR_9)
 {

  uint32 VAR_13 = VAR_10 - VAR_0;
  uint32 VAR_14 = VAR_11 - VAR_8;

  *VAR_12 = VAR_2 + (VAR_13 * VAR_9 + VAR_14) * VAR_5;
  return 1;
 }

 else if (VAR_10 >= VAR_2 && VAR_10 < (VAR_2 + VAR_3) &&
    ((VAR_10 - VAR_2) % VAR_5) == 0 &&
    VAR_11 >= VAR_4 && VAR_11 < (VAR_4 + VAR_5))
 {

  uint32 VAR_15 = VAR_11 - VAR_4;

  *VAR_12 = VAR_10 + VAR_15;
  return 1;
 }
 else
 {
  int VAR_16;







  for (VAR_16 = 0; VAR_16 < FUNC_2(VAR_6); VAR_16++)
  {
   const pg_unicode_decomposition *VAR_17 = &VAR_6[VAR_16];

   if (FUNC_1(VAR_17) != 2)
    continue;

   if (FUNC_0(VAR_17))
    continue;

   if (VAR_10 == VAR_7[VAR_17->dec_index] &&
    VAR_11 == VAR_7[VAR_17->dec_index + 1])
   {
    *VAR_12 = VAR_17->codepoint;
    return 1;
   }
  }
 }

 return 0;
}
