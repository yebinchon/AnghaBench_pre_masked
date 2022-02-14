
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int used; int * dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

int FUNC_8 (const mp_int * VAR_2, mp_int * VAR_3)
{
  mp_int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
  int VAR_10, VAR_11;

  VAR_11 = VAR_0;


  VAR_10 = VAR_2->used;


  VAR_10 = VAR_10 >> 1;


  if (FUNC_3 (&VAR_4, VAR_10) != VAR_1)
    goto ERR;
  if (FUNC_3 (&VAR_5, VAR_2->used - VAR_10) != VAR_1)
    goto X0;


  if (FUNC_3 (&VAR_6, VAR_2->used * 2) != VAR_1)
    goto X1;
  if (FUNC_3 (&VAR_7, VAR_2->used * 2) != VAR_1)
    goto T1;
  if (FUNC_3 (&VAR_8, VAR_10 * 2) != VAR_1)
    goto T2;
  if (FUNC_3 (&VAR_9, (VAR_2->used - VAR_10) * 2) != VAR_1)
    goto X0X0;

  {
    register int VAR_12;
    register mp_digit *VAR_13, *VAR_14;

    VAR_14 = VAR_2->dp;


    VAR_13 = VAR_4;
    for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
      *VAR_13++ = *VAR_14++;
    }

    VAR_13 = VAR_5;
    for (VAR_12 = VAR_10; VAR_12 < VAR_2->used; VAR_12++) {
      *VAR_13++ = *VAR_14++;
    }
  }

  VAR_4 = VAR_10;
  VAR_5 = VAR_2->used - VAR_10;

  FUNC_1 (&VAR_4);


  if (FUNC_5 (&VAR_4, &VAR_8) != VAR_1)
    goto X1X1;
  if (FUNC_5 (&VAR_5, &VAR_9) != VAR_1)
    goto X1X1;


  if (FUNC_6 (&VAR_5, &VAR_4, &VAR_6) != VAR_1)
    goto X1X1;
  if (FUNC_5 (&VAR_6, &VAR_6) != VAR_1)
    goto X1X1;


  if (FUNC_7 (&VAR_8, &VAR_9, &VAR_7) != VAR_1)
    goto X1X1;
  if (FUNC_6 (&VAR_7, &VAR_6, &VAR_6) != VAR_1)
    goto X1X1;


  if (FUNC_4 (&VAR_6, VAR_10) != VAR_1)
    goto X1X1;
  if (FUNC_4 (&VAR_9, VAR_10 * 2) != VAR_1)
    goto X1X1;

  if (FUNC_0 (&VAR_8, &VAR_6, &VAR_6) != VAR_1)
    goto X1X1;
  if (FUNC_0 (&VAR_6, &VAR_9, VAR_3) != VAR_1)
    goto X1X1;

  VAR_11 = VAR_1;

X1X1:FUNC_2 (&VAR_9);
X0X0:FUNC_2 (&VAR_8);
T2:FUNC_2 (&VAR_7);
T1:FUNC_2 (&VAR_6);
X1:FUNC_2 (&VAR_5);
X0:FUNC_2 (&VAR_4);
ERR:
  return VAR_11;
}
