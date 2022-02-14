
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 int * FUNC_7 (int *,int) ;

ArrayType *
FUNC_8(ArrayType *VAR_0, ArrayType *VAR_1)
{
 ArrayType *VAR_2 = ((void*)0);

 FUNC_3(VAR_0);
 FUNC_3(VAR_1);

 if (FUNC_0(VAR_0) && FUNC_0(VAR_1))
  return FUNC_6(0);
 if (FUNC_0(VAR_0))
  VAR_2 = FUNC_5(VAR_1);
 if (FUNC_0(VAR_1))
  VAR_2 = FUNC_5(VAR_0);

 if (!VAR_2)
 {
  int VAR_3 = FUNC_1(VAR_0),
     VAR_4 = FUNC_1(VAR_1);
  int *VAR_5 = FUNC_2(VAR_0),
       *VAR_6 = FUNC_2(VAR_1);
  int VAR_7,
     VAR_8,
       *VAR_9;

  VAR_2 = FUNC_6(VAR_3 + VAR_4);
  VAR_9 = FUNC_2(VAR_2);


  VAR_7 = VAR_8 = 0;
  while (VAR_7 < VAR_3 && VAR_8 < VAR_4)
  {
   if (VAR_5[VAR_7] == VAR_6[VAR_8])
   {
    *VAR_9++ = VAR_5[VAR_7++];
    VAR_8++;
   }
   else if (VAR_5[VAR_7] < VAR_6[VAR_8])
    *VAR_9++ = VAR_5[VAR_7++];
   else
    *VAR_9++ = VAR_6[VAR_8++];
  }

  while (VAR_7 < VAR_3)
   *VAR_9++ = VAR_5[VAR_7++];
  while (VAR_8 < VAR_4)
   *VAR_9++ = VAR_6[VAR_8++];

  VAR_2 = FUNC_7(VAR_2, VAR_9 - FUNC_2(VAR_2));
 }

 if (FUNC_1(VAR_2) > 1)
  VAR_2 = FUNC_4(VAR_2);

 return VAR_2;
}
