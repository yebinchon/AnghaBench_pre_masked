
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int used; int * dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

int FUNC_8 (const mp_int * VAR_2, const mp_int * VAR_3, mp_int * VAR_4)
{
  mp_int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  int VAR_12, VAR_13;


  VAR_13 = VAR_0;


  VAR_12 = FUNC_0 (VAR_2->used, VAR_3->used);


  VAR_12 = VAR_12 >> 1;


  if (FUNC_4 (&VAR_5, VAR_12) != VAR_1)
    goto ERR;
  if (FUNC_4 (&VAR_6, VAR_2->used - VAR_12) != VAR_1)
    goto X0;
  if (FUNC_4 (&VAR_7, VAR_12) != VAR_1)
    goto X1;
  if (FUNC_4 (&VAR_8, VAR_3->used - VAR_12) != VAR_1)
    goto Y0;


  if (FUNC_4 (&VAR_9, VAR_12 * 2) != VAR_1)
    goto Y1;
  if (FUNC_4 (&VAR_10, VAR_12 * 2) != VAR_1)
    goto T1;
  if (FUNC_4 (&VAR_11, VAR_12 * 2) != VAR_1)
    goto X0Y0;


  VAR_5 = VAR_7 = VAR_12;
  VAR_6 = VAR_2->used - VAR_12;
  VAR_8 = VAR_3->used - VAR_12;

  {
    register int VAR_14;
    register mp_digit *VAR_15, *VAR_16, *VAR_17, *VAR_18;




    VAR_15 = VAR_2->dp;
    VAR_16 = VAR_3->dp;

    VAR_17 = VAR_5;
    VAR_18 = VAR_7;
    for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
      *VAR_17++ = *VAR_15++;
      *VAR_18++ = *VAR_16++;
    }

    VAR_17 = VAR_6;
    for (VAR_14 = VAR_12; VAR_14 < VAR_2->used; VAR_14++) {
      *VAR_17++ = *VAR_15++;
    }

    VAR_18 = VAR_8;
    for (VAR_14 = VAR_12; VAR_14 < VAR_3->used; VAR_14++) {
      *VAR_18++ = *VAR_16++;
    }
  }




  FUNC_2 (&VAR_5);
  FUNC_2 (&VAR_7);



  if (FUNC_6 (&VAR_5, &VAR_7, &VAR_10) != VAR_1)
    goto X1Y1;
  if (FUNC_6 (&VAR_6, &VAR_8, &VAR_11) != VAR_1)
    goto X1Y1;


  if (FUNC_7 (&VAR_6, &VAR_5, &VAR_9) != VAR_1)
    goto X1Y1;
  if (FUNC_7 (&VAR_8, &VAR_7, &VAR_5) != VAR_1)
    goto X1Y1;
  if (FUNC_6 (&VAR_9, &VAR_5, &VAR_9) != VAR_1)
    goto X1Y1;


  if (FUNC_1 (&VAR_10, &VAR_11, &VAR_5) != VAR_1)
    goto X1Y1;
  if (FUNC_7 (&VAR_5, &VAR_9, &VAR_9) != VAR_1)
    goto X1Y1;


  if (FUNC_5 (&VAR_9, VAR_12) != VAR_1)
    goto X1Y1;
  if (FUNC_5 (&VAR_11, VAR_12 * 2) != VAR_1)
    goto X1Y1;

  if (FUNC_1 (&VAR_10, &VAR_9, &VAR_9) != VAR_1)
    goto X1Y1;
  if (FUNC_1 (&VAR_9, &VAR_11, VAR_4) != VAR_1)
    goto X1Y1;


  VAR_13 = VAR_1;

X1Y1:FUNC_3 (&VAR_11);
X0Y0:FUNC_3 (&VAR_10);
T1:FUNC_3 (&VAR_9);
Y1:FUNC_3 (&VAR_8);
Y0:FUNC_3 (&VAR_7);
X1:FUNC_3 (&VAR_6);
X0:FUNC_3 (&VAR_5);
ERR:
  return VAR_13;
}
