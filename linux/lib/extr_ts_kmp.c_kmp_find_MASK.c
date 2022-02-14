
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ts_state {unsigned int offset; } ;
struct ts_kmp {scalar_t__ const* pattern; unsigned int* prefix_tbl; unsigned int pattern_len; } ;
struct ts_config {int flags; unsigned int (* get_next_block ) (unsigned int,scalar_t__ const**,struct ts_config*,struct ts_state*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,scalar_t__ const**,struct ts_config*,struct ts_state*) ;
 scalar_t__ const FUNC_1 (scalar_t__ const) ;
 struct ts_kmp* FUNC_2 (struct ts_config*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(struct ts_config *VAR_2, struct ts_state *VAR_3)
{
 struct ts_kmp *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5, VAR_6 = 0, VAR_7, VAR_8 = VAR_3->offset;
 const u8 *VAR_9;
 const int VAR_10 = VAR_2->flags & VAR_0;

 for (;;) {
  VAR_7 = VAR_2->get_next_block(VAR_8, &VAR_9, VAR_2, VAR_3);

  if (FUNC_3(VAR_7 == 0))
   break;

  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
   while (VAR_6 > 0 && VAR_4->pattern[VAR_6]
       != (VAR_10 ? FUNC_1(VAR_9[VAR_5]) : VAR_9[VAR_5]))
    VAR_6 = VAR_4->prefix_tbl[VAR_6 - 1];
   if (VAR_4->pattern[VAR_6]
       == (VAR_10 ? FUNC_1(VAR_9[VAR_5]) : VAR_9[VAR_5]))
    VAR_6++;
   if (FUNC_3(VAR_6 == VAR_4->pattern_len)) {
    VAR_3->offset = VAR_8 + VAR_5 + 1;
    return VAR_3->offset - VAR_4->pattern_len;
   }
  }

  VAR_8 += VAR_7;
 }

 return VAR_1;
}
