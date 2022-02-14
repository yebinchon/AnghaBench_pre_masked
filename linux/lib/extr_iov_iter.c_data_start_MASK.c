
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iov_iter {size_t iov_offset; int idx; TYPE_1__* pipe; } ;
struct TYPE_2__ {int * bufs; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_2(const struct iov_iter *VAR_1, int *VAR_2, size_t *VAR_3)
{
 size_t VAR_4 = VAR_1->iov_offset;
 int VAR_5 = VAR_1->idx;
 if (VAR_4 && (!FUNC_0(&VAR_1->pipe->bufs[VAR_5]) || VAR_4 == VAR_0)) {
  VAR_5 = FUNC_1(VAR_5, VAR_1->pipe);
  VAR_4 = 0;
 }
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_4;
}
