
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {size_t size; int * sdata; scalar_t__ capacity; } ;
struct iov_iter {int dummy; } ;


 int FUNC_0 (int *,size_t,struct iov_iter*) ;
 size_t FUNC_1 (scalar_t__,size_t) ;

__attribute__((used)) static size_t
FUNC_2(struct p9_fcall *VAR_0, struct iov_iter *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_0->capacity - VAR_0->size, VAR_2);
 struct iov_iter VAR_4 = *VAR_1;
 if (!FUNC_0(&VAR_0->sdata[VAR_0->size], VAR_3, &VAR_4))
  VAR_3 = 0;

 VAR_0->size += VAR_3;
 return VAR_2 - VAR_3;
}
