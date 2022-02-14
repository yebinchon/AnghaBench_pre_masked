
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iov_iter {size_t count; } ;
struct TYPE_3__ {size_t iov_len; size_t bv_len; scalar_t__ iov_base; scalar_t__ bv_offset; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct iov_iter const*) ;
 scalar_t__ FUNC_2 (struct iov_iter const*) ;
 int FUNC_3 (struct iov_iter const*,size_t,TYPE_1__,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__ VAR_0 ;

unsigned long FUNC_5(const struct iov_iter *VAR_1)
{
 unsigned long VAR_2 = 0;
 size_t VAR_3 = VAR_1->count;

 if (FUNC_4(FUNC_2(VAR_1) || FUNC_1(VAR_1))) {
  FUNC_0(1);
  return ~0U;
 }

 FUNC_3(VAR_1, VAR_3, VAR_0,
  (VAR_2 |= (!VAR_2 ? 0 : (unsigned long)VAR_0.iov_base) |
   (VAR_3 != VAR_0.iov_len ? VAR_3 : 0), 0),
  (VAR_2 |= (!VAR_2 ? 0 : (unsigned long)VAR_0.bv_offset) |
   (VAR_3 != VAR_0.bv_len ? VAR_3 : 0)),
  (VAR_2 |= (!VAR_2 ? 0 : (unsigned long)VAR_0.iov_base) |
   (VAR_3 != VAR_0.iov_len ? VAR_3 : 0))
  );
 return VAR_2;
}
