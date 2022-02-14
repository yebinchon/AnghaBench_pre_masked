
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_9__ {unsigned int n_scale; int n_len; int* n_value; scalar_t__ n_sign; } ;


 char VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 char VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned char*,unsigned int,unsigned int,unsigned char*) ;
 int FUNC_3 (TYPE_1__**) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (unsigned int,int) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_8 (unsigned char*,int ,unsigned int) ;
 scalar_t__ FUNC_9 (int,unsigned int,int) ;

int
FUNC_10 (bc_num VAR_4, bc_num VAR_5, bc_num *VAR_6, int VAR_7)
{
  bc_num VAR_8;
  unsigned char *VAR_9, *VAR_10;
  unsigned char *VAR_11, *VAR_12, *VAR_13, *VAR_14;
  int VAR_15, VAR_16;
  unsigned int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
  unsigned int VAR_23, VAR_24, VAR_25, VAR_26;
  unsigned char *VAR_27;
  char VAR_28;
  unsigned int VAR_29;


  if (FUNC_4 (VAR_5)) return -1;


  if (VAR_5->n_scale == 0)
    {
      if (VAR_5->n_len == 1 && *VAR_5->n_value == 1)
 {
   VAR_8 = FUNC_5 (VAR_4->n_len, VAR_7);
   VAR_8->n_sign = (VAR_4->n_sign == VAR_5->n_sign ? VAR_2 : VAR_1);
   FUNC_8 (&VAR_8->n_value[VAR_4->n_len],0,VAR_7);
   FUNC_7 (VAR_8->n_value, VAR_4->n_value,
    VAR_4->n_len + FUNC_0(VAR_4->n_scale,VAR_7));
   FUNC_3 (VAR_6);
   *VAR_6 = VAR_8;
 }
    }



  VAR_19 = VAR_5->n_scale;
  VAR_13 = (unsigned char *) VAR_5->n_value+VAR_5->n_len+VAR_19-1;
  while ((VAR_19 > 0) && (*VAR_13-- == 0)) VAR_19--;

  VAR_17 = VAR_4->n_len + VAR_19;
  VAR_15 = VAR_4->n_scale - VAR_19;
  if (VAR_15 < VAR_7)
    VAR_21 = VAR_7 - VAR_15;
  else
    VAR_21 = 0;
  VAR_9 = (unsigned char *) FUNC_9 (1, VAR_4->n_len+VAR_4->n_scale, VAR_21+2);
  FUNC_8 (VAR_9, 0, VAR_4->n_len+VAR_4->n_scale+VAR_21+2);
  FUNC_7 (VAR_9+1, VAR_4->n_value, VAR_4->n_len+VAR_4->n_scale);

  VAR_18 = VAR_5->n_len + VAR_19;
  VAR_10 = (unsigned char *) FUNC_9 (1, VAR_18, 1);
  FUNC_7 (VAR_10, VAR_5->n_value, VAR_18);
  *(VAR_10+VAR_18) = 0;
  VAR_13 = VAR_10;
  while (*VAR_13 == 0)
    {
      VAR_13++;
      VAR_18--;
    }


  if (VAR_18 > VAR_17+VAR_7)
    {
      VAR_20 = VAR_7+1;
      VAR_28 = VAR_3;
    }
  else
    {
      VAR_28 = VAR_0;
      if (VAR_18>VAR_17)
 VAR_20 = VAR_7+1;
      else
 VAR_20 = VAR_17-VAR_18+VAR_7+1;
    }


  VAR_8 = FUNC_5 (VAR_20-VAR_7,VAR_7);
  FUNC_8 (VAR_8->n_value, 0, VAR_20);


  VAR_27 = (unsigned char *) FUNC_9 (1, VAR_18, 1);


  if (!VAR_28)
    {

      VAR_29 = 10 / ((int)*VAR_13 + 1);
      if (VAR_29 != 1)
 {
   FUNC_2 (VAR_9, VAR_17+VAR_15+VAR_21+1, VAR_29, VAR_9);
   FUNC_2 (VAR_13, VAR_18, VAR_29, VAR_13);
 }


      VAR_23 = 0;
      if (VAR_18 > VAR_17)
 VAR_14 = (unsigned char *) VAR_8->n_value+VAR_18-VAR_17;
      else
 VAR_14 = (unsigned char *) VAR_8->n_value;


      while (VAR_23 <= VAR_17+VAR_7-VAR_18)
 {

   if (*VAR_13 == VAR_9[VAR_23])
     VAR_24 = 9;
   else
     VAR_24 = (VAR_9[VAR_23]*10 + VAR_9[VAR_23+1]) / *VAR_13;


   if (VAR_13[1]*VAR_24 >
       (VAR_9[VAR_23]*10 + VAR_9[VAR_23+1] - *VAR_13*VAR_24)*10
        + VAR_9[VAR_23+2])
     {
       VAR_24--;

       if (VAR_13[1]*VAR_24 >
    (VAR_9[VAR_23]*10 + VAR_9[VAR_23+1] - *VAR_13*VAR_24)*10
    + VAR_9[VAR_23+2])
  VAR_24--;
     }


   VAR_25 = 0;
   if (VAR_24 != 0)
     {
       *VAR_27 = 0;
       FUNC_2 (VAR_13, VAR_18, VAR_24, VAR_27+1);
       VAR_11 = (unsigned char *) VAR_9+VAR_23+VAR_18;
       VAR_12 = (unsigned char *) VAR_27+VAR_18;
       for (VAR_22 = 0; VAR_22 < VAR_18+1; VAR_22++)
  {
    VAR_16 = (int) *VAR_11 - (int) *VAR_12-- - VAR_25;
    if (VAR_16 < 0)
      {
        VAR_16 += 10;
        VAR_25 = 1;
      }
    else
      VAR_25 = 0;
    *VAR_11-- = VAR_16;
  }
     }


   if (VAR_25 == 1)
     {
       VAR_24--;
       VAR_11 = (unsigned char *) VAR_9+VAR_23+VAR_18;
       VAR_12 = (unsigned char *) VAR_13+VAR_18-1;
       VAR_26 = 0;
       for (VAR_22 = 0; VAR_22 < VAR_18; VAR_22++)
  {
    VAR_16 = (int) *VAR_11 + (int) *VAR_12-- + VAR_26;
    if (VAR_16 > 9)
      {
        VAR_16 -= 10;
        VAR_26 = 1;
      }
    else
      VAR_26 = 0;
    *VAR_11-- = VAR_16;
  }
       if (VAR_26 == 1) *VAR_11 = (*VAR_11 + 1) % 10;
     }


   *VAR_14++ = VAR_24;
   VAR_23++;
 }
    }


  VAR_8->n_sign = ( VAR_4->n_sign == VAR_5->n_sign ? VAR_2 : VAR_1 );
  if (FUNC_4 (VAR_8)) VAR_8->n_sign = VAR_2;
  FUNC_1 (VAR_8);
  FUNC_3 (VAR_6);
  *VAR_6 = VAR_8;


  FUNC_6 (VAR_27);
  FUNC_6 (VAR_9);
  FUNC_6 (VAR_10);

  return 0;
}
