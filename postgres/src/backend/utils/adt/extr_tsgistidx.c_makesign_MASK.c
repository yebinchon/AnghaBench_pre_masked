
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32 ;
typedef int SignTSVector ;
typedef scalar_t__ BITVECP ;
typedef int BITVEC ;


 size_t FUNC_0 (int *) ;
 size_t* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,size_t) ;
 int FUNC_3 (void*,int ,int) ;

__attribute__((used)) static void
FUNC_4(BITVECP VAR_0, SignTSVector *VAR_1)
{
 int32 VAR_2,
    VAR_3 = FUNC_0(VAR_1);
 int32 *VAR_4 = FUNC_1(VAR_1);

 FUNC_3((void *) VAR_0, 0, sizeof(BITVEC));
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_2(VAR_0, VAR_4[VAR_2]);
}
