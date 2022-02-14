
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int HeapTuple ;
typedef int Bitmapset ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ,int ) ;

__attribute__((used)) static Bitmapset *
FUNC_4(Relation VAR_1, Bitmapset *VAR_2,
        HeapTuple VAR_3, HeapTuple VAR_4)
{
 int VAR_5;
 Bitmapset *VAR_6 = ((void*)0);

 while ((VAR_5 = FUNC_2(VAR_2)) >= 0)
 {
  VAR_5 += VAR_0;

  if (!FUNC_3(FUNC_0(VAR_1),
         VAR_5, VAR_3, VAR_4))
   VAR_6 = FUNC_1(VAR_6,
           VAR_5 - VAR_0);
 }

 return VAR_6;
}
