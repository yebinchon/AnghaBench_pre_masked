
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {unsigned int exp_start; int exp_len; unsigned long exp_nan; unsigned int man_len; unsigned int man_start; int totalsize; int byteorder; struct floatformat* split_half; } ;


 long FUNC_0 (unsigned char const*,int ,int ,unsigned int,int) ;
 int FUNC_1 (struct floatformat const*,unsigned char const*) ;

__attribute__((used)) static int
FUNC_2 (const struct floatformat *VAR_0,
          const void *VAR_1)
{
  const unsigned char *VAR_2 = (const unsigned char *) VAR_1;
  const struct floatformat *VAR_3 = VAR_0->split_half;
  long VAR_4, VAR_5;
  int VAR_6 = 0;

  VAR_4 = FUNC_0 (VAR_2, VAR_3->byteorder, VAR_3->totalsize,
         VAR_3->exp_start, VAR_3->exp_len);
  VAR_5 = FUNC_0 (VAR_2 + 8, VAR_3->byteorder, VAR_3->totalsize,
         VAR_3->exp_start, VAR_3->exp_len);

  if ((unsigned long)VAR_4 == VAR_3->exp_nan) {
   VAR_6 = FUNC_1 (VAR_3, VAR_2);
  }


  if (VAR_6) {
   return 1;
  }



  if ((unsigned long) VAR_4 == VAR_3->exp_nan || VAR_4 == 0)
    {
   if (VAR_5 != 0) {
    return 0;
   }

   return !FUNC_1 (VAR_3, VAR_2 + 8);
    }







    if (VAR_5 < VAR_4 - 53) {
     return 1;
    }
    if (VAR_5 > VAR_4 - 53 && VAR_5 != 0) {
     return 0;
    }
    if (VAR_5 == 0) {


     int VAR_7 = -1, VAR_8 = -1, VAR_9;
     for (VAR_9 = 0; (unsigned int)VAR_9 < VAR_3->man_len; VAR_9++) {
      if (FUNC_0 (VAR_2 + 8, VAR_3->byteorder, VAR_3->totalsize,
    VAR_3->man_start + VAR_9, 1)) {
       if (VAR_7 == -1) {
        VAR_7 = VAR_9;
       } else {
        VAR_8 = VAR_9;
        break;
       }
      }
     }

     if (VAR_7 == -1) {
      return 1;
     }

     if (-VAR_7 < VAR_4 - 53) {
      return 1;
     }
     if (-VAR_7 > VAR_4 - 53) {
      return 0;
     }



     if (VAR_8 != -1) {
      return 0;
     }
     return !FUNC_0 (VAR_2, VAR_3->byteorder, VAR_3->totalsize,
      VAR_3->man_start + VAR_3->man_len - 1, 1);
    }
  else
    {



      if (FUNC_0 (VAR_2, VAR_3->byteorder, VAR_3->totalsize,
    VAR_3->man_start + VAR_3->man_len - 1, 1)) {
       return 0;
      }
      return !FUNC_1 (VAR_3, VAR_2 + 8);
    }
}
