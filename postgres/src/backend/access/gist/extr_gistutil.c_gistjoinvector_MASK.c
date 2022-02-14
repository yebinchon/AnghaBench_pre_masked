
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IndexTuple ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (void*,int) ;

IndexTuple *
FUNC_2(IndexTuple *VAR_0, int *VAR_1, IndexTuple *VAR_2, int VAR_3)
{
 VAR_0 = (IndexTuple *) FUNC_1((void *) VAR_0, sizeof(IndexTuple) * ((*VAR_1) + VAR_3));
 FUNC_0(&VAR_0[*VAR_1], VAR_2, sizeof(IndexTuple) * VAR_3);
 *VAR_1 += VAR_3;
 return VAR_0;
}
