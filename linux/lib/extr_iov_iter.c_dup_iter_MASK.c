
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;
struct iov_iter {void const* bvec; int nr_segs; void const* iov; } ;
struct bio_vec {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct iov_iter*) ;
 int FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (struct iov_iter*) ;
 void* FUNC_4 (void const*,int,int ) ;
 scalar_t__ FUNC_5 (int ) ;

const void *FUNC_6(struct iov_iter *VAR_0, struct iov_iter *VAR_1, gfp_t VAR_2)
{
 *VAR_0 = *VAR_1;
 if (FUNC_5(FUNC_3(VAR_0))) {
  FUNC_0(1);
  return ((void*)0);
 }
 if (FUNC_5(FUNC_2(VAR_0)))
  return ((void*)0);
 if (FUNC_1(VAR_0))
  return VAR_0->bvec = FUNC_4(VAR_0->bvec,
        VAR_0->nr_segs * sizeof(struct bio_vec),
        VAR_2);
 else

  return VAR_0->iov = FUNC_4(VAR_0->iov,
       VAR_0->nr_segs * sizeof(struct iovec),
       VAR_2);
}
