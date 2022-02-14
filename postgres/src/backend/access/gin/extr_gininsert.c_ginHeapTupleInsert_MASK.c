
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32 ;
typedef int OffsetNumber ;
typedef int ItemPointer ;
typedef int GinState ;
typedef int GinNullCategory ;
typedef int Datum ;


 int FUNC_0 (int *,int ,int ,int ,int ,int,int *) ;
 int * FUNC_1 (int *,int ,int ,int,size_t*,int **) ;

__attribute__((used)) static void
FUNC_2(GinState *VAR_0, OffsetNumber VAR_1,
       Datum VAR_2, bool VAR_3,
       ItemPointer VAR_4)
{
 Datum *VAR_5;
 GinNullCategory *VAR_6;
 int32 VAR_7,
    VAR_8;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
        &VAR_8, &VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_0(VAR_0, VAR_1, VAR_5[VAR_7], VAR_6[VAR_7],
        VAR_4, 1, ((void*)0));
}
