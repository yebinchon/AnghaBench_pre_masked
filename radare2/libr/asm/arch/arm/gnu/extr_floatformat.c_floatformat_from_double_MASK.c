
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int totalsize; unsigned int sign_start; unsigned int exp_start; unsigned int exp_len; unsigned long exp_nan; unsigned int man_start; int exp_bias; int man_len; scalar_t__ intbit; int byteorder; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double FUNC_0 (double,int*) ;
 double FUNC_1 (double,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char*,int ,int,unsigned int,unsigned int,unsigned long) ;

void
FUNC_4 (const struct floatformat *VAR_2,
                         const double *VAR_3, void *VAR_4)
{
  double VAR_5;
  int VAR_6;
  double VAR_7;
  unsigned int VAR_8, VAR_9;
  int VAR_10;
  unsigned char *VAR_11 = (unsigned char *) VAR_4;

  VAR_5 = *VAR_3;
  FUNC_2 (VAR_11, 0, VAR_2->totalsize / VAR_0);






  if (VAR_5 < 0)
    {
      FUNC_3 (VAR_11, VAR_2->byteorder, VAR_2->totalsize, VAR_2->sign_start, 1, 1);
      VAR_5 = -VAR_5;
    }

  if (VAR_5 == 0)
    {

      return;
    }

  if (VAR_5 != VAR_5)
    {

      FUNC_3 (VAR_11, VAR_2->byteorder, VAR_2->totalsize, VAR_2->exp_start,
   VAR_2->exp_len, VAR_2->exp_nan);

      FUNC_3 (VAR_11, VAR_2->byteorder, VAR_2->totalsize, VAR_2->man_start,
   32, 1);
      return;
    }

  if (VAR_5 + VAR_5 == VAR_5)
    {


      FUNC_3 (VAR_11, VAR_2->byteorder, VAR_2->totalsize, VAR_2->exp_start,
   VAR_2->exp_len, VAR_2->exp_nan);
      return;
    }





  VAR_7 = FUNC_0 (VAR_5, &VAR_6);

  if (VAR_6 + VAR_2->exp_bias - 1 > 0) {
   FUNC_3 (VAR_11, VAR_2->byteorder, VAR_2->totalsize, VAR_2->exp_start,
    VAR_2->exp_len, VAR_6 + VAR_2->exp_bias - 1);
  } else {


   FUNC_3 (VAR_11, VAR_2->byteorder, VAR_2->totalsize, VAR_2->exp_start,
    VAR_2->exp_len, 0);
   VAR_7 = FUNC_1 (VAR_7, VAR_6 + VAR_2->exp_bias - 1);
    }

  VAR_10 = VAR_2->man_len;
  VAR_9 = VAR_2->man_start;
  while (VAR_10 > 0)
    {
      unsigned long VAR_12;
      VAR_8 = VAR_10 < 32 ? VAR_10 : 32;

      VAR_7 *= 4294967296.0;
      VAR_12 = (unsigned long)VAR_7;
      VAR_7 -= VAR_12;



      if ((unsigned int) VAR_10 == VAR_2->man_len
   && VAR_2->intbit == VAR_1
   && VAR_6 + VAR_2->exp_bias - 1 > 0)
 {
   VAR_12 &= 0x7fffffff;
   VAR_8 -= 1;
 }
      else if (VAR_8 < 32)
 {


   VAR_12 >>= 32 - VAR_8;
 }

      FUNC_3 (VAR_11, VAR_2->byteorder, VAR_2->totalsize,
   VAR_9, VAR_8, VAR_12);
      VAR_9 += VAR_8;
      VAR_10 -= VAR_8;
    }
}
