
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int isnull; scalar_t__ needfree; scalar_t__ vallen; int * val; scalar_t__ keylen; int key; } ;
typedef TYPE_1__ Pairs ;
typedef int Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,int,char,int **,int**,int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int*) ;
 TYPE_1__* FUNC_7 (int) ;

Pairs *
FUNC_8(ArrayType *VAR_5, int *VAR_6)
{
 Datum *VAR_7;
 bool *VAR_8;
 int VAR_9;
 Pairs *VAR_10;
 int VAR_11;
 int VAR_12,
    VAR_13;

 FUNC_2(VAR_5,
       VAR_3, -1, 0, 'i',
       &VAR_7, &VAR_8, &VAR_9);

 if (VAR_9 == 0)
 {
  *VAR_6 = 0;
  return ((void*)0);
 }
 if (VAR_9 > VAR_2 / sizeof(Pairs))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("number of pairs (%d) exceeds the maximum allowed (%d)",
      VAR_9, (int) (VAR_2 / sizeof(Pairs)))));

 VAR_10 = FUNC_7(sizeof(Pairs) * VAR_9);

 for (VAR_12 = 0, VAR_13 = 0; VAR_12 < VAR_9; VAR_12++)
 {
  if (!VAR_8[VAR_12])
  {
   VAR_10[VAR_13].key = FUNC_0(VAR_7[VAR_12]);
   VAR_10[VAR_13].keylen = FUNC_1(VAR_7[VAR_12]) - VAR_4;
   VAR_10[VAR_13].val = ((void*)0);
   VAR_10[VAR_13].vallen = 0;
   VAR_10[VAR_13].needfree = 0;
   VAR_10[VAR_13].isnull = 1;
   VAR_13++;
  }
 }

 *VAR_6 = FUNC_6(VAR_10, VAR_13, &VAR_11);

 return VAR_10;
}
