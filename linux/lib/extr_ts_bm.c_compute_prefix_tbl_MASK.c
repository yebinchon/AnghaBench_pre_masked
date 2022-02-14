
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_bm {int* bad_shift; int patlen; size_t* pattern; int* good_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t*,int,int,int) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static void FUNC_2(struct ts_bm *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2->bad_shift[VAR_4] = VAR_2->patlen;
 for (VAR_4 = 0; VAR_4 < VAR_2->patlen - 1; VAR_4++) {
  VAR_2->bad_shift[VAR_2->pattern[VAR_4]] = VAR_2->patlen - 1 - VAR_4;
  if (VAR_3 & VAR_1)
   VAR_2->bad_shift[FUNC_1(VAR_2->pattern[VAR_4])]
       = VAR_2->patlen - 1 - VAR_4;
 }



 VAR_2->good_shift[0] = 1;
 for (VAR_4 = 1; VAR_4 < VAR_2->patlen; VAR_4++)
  VAR_2->good_shift[VAR_4] = VAR_2->patlen;
        for (VAR_4 = VAR_2->patlen-1, VAR_6 = 1; VAR_4 > 0; VAR_6++, VAR_4--) {
  for (VAR_5 = VAR_4-1; VAR_5 >= 1-VAR_6 ; VAR_5--)
   if (FUNC_0(VAR_2->pattern, VAR_4, VAR_5, VAR_6)) {
    VAR_2->good_shift[VAR_6] = VAR_2->patlen-VAR_5-VAR_6;
    break;
   }
 }
}
