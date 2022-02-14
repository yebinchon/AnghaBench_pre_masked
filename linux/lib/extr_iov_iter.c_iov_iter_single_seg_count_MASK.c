
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iov_iter {size_t count; int nr_segs; scalar_t__ iov_offset; TYPE_1__* iov; TYPE_2__* bvec; } ;
struct TYPE_4__ {scalar_t__ bv_len; } ;
struct TYPE_3__ {scalar_t__ iov_len; } ;


 scalar_t__ FUNC_0 (struct iov_iter const*) ;
 int FUNC_1 (struct iov_iter const*) ;
 int FUNC_2 (struct iov_iter const*) ;
 size_t FUNC_3 (size_t,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

size_t FUNC_5(const struct iov_iter *VAR_0)
{
 if (FUNC_4(FUNC_2(VAR_0)))
  return VAR_0->count;
 if (VAR_0->nr_segs == 1)
  return VAR_0->count;
 if (FUNC_4(FUNC_1(VAR_0)))
  return VAR_0->count;
 else if (FUNC_0(VAR_0))
  return FUNC_3(VAR_0->count, VAR_0->bvec->bv_len - VAR_0->iov_offset);
 else
  return FUNC_3(VAR_0->count, VAR_0->iov->iov_len - VAR_0->iov_offset);
}
