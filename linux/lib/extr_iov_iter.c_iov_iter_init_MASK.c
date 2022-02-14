
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {int dummy; } ;
struct iovec {int dummy; } ;
struct iov_iter {unsigned int type; unsigned long nr_segs; size_t count; scalar_t__ iov_offset; struct iovec const* iov; struct kvec* kvec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(struct iov_iter *VAR_4, unsigned int VAR_5,
   const struct iovec *VAR_6, unsigned long VAR_7,
   size_t VAR_8)
{
 FUNC_0(VAR_5 & ~(VAR_2 | VAR_3));
 VAR_5 &= VAR_2 | VAR_3;


 if (FUNC_1()) {
  VAR_4->type = VAR_1 | VAR_5;
  VAR_4->kvec = (struct kvec *)VAR_6;
 } else {
  VAR_4->type = VAR_0 | VAR_5;
  VAR_4->iov = VAR_6;
 }
 VAR_4->nr_segs = VAR_7;
 VAR_4->iov_offset = 0;
 VAR_4->count = VAR_8;
}
