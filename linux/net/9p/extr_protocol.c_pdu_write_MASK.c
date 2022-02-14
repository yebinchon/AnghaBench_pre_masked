
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {size_t size; int * sdata; scalar_t__ capacity; } ;


 int FUNC_0 (int *,void const*,size_t) ;
 size_t FUNC_1 (scalar_t__,size_t) ;

__attribute__((used)) static size_t FUNC_2(struct p9_fcall *VAR_0, const void *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_0->capacity - VAR_0->size, VAR_2);
 FUNC_0(&VAR_0->sdata[VAR_0->size], VAR_1, VAR_3);
 VAR_0->size += VAR_3;
 return VAR_2 - VAR_3;
}
