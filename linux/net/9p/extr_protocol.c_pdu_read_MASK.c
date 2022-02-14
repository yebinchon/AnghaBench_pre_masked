
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {size_t offset; int * sdata; scalar_t__ size; } ;


 int FUNC_0 (void*,int *,size_t) ;
 size_t FUNC_1 (scalar_t__,size_t) ;

size_t FUNC_2(struct p9_fcall *VAR_0, void *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_0->size - VAR_0->offset, VAR_2);
 FUNC_0(VAR_1, &VAR_0->sdata[VAR_0->offset], VAR_3);
 VAR_0->offset += VAR_3;
 return VAR_2 - VAR_3;
}
