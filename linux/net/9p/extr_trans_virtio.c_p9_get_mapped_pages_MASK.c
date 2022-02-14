
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_chan {scalar_t__ p9_max_pages; } ;
struct page {int dummy; } ;
struct iov_iter {int iov_offset; TYPE_1__* kvec; } ;
struct TYPE_2__ {void* iov_base; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct iov_iter*,int ) ;
 int FUNC_4 (struct iov_iter*) ;
 int FUNC_5 (struct iov_iter*,struct page***,int,size_t*) ;
 int FUNC_6 (struct iov_iter*) ;
 size_t FUNC_7 (struct iov_iter*) ;
 scalar_t__ FUNC_8 (void*) ;
 struct page** FUNC_9 (int,int,int ) ;
 struct page* FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (size_t) ;
 size_t FUNC_12 (void*) ;
 struct page* FUNC_13 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static int FUNC_15(struct virtio_chan *VAR_6,
          struct page ***VAR_7,
          struct iov_iter *VAR_8,
          int VAR_9,
          size_t *VAR_10,
          int *VAR_11)
{
 int VAR_12;
 int VAR_13;

 if (!FUNC_4(VAR_8))
  return 0;

 if (!FUNC_6(VAR_8)) {
  int VAR_14;




  if (FUNC_2(&VAR_4) >= VAR_6->p9_max_pages) {
   VAR_13 = FUNC_14(VAR_5,
         (FUNC_2(&VAR_4) < VAR_6->p9_max_pages));
   if (VAR_13 == -VAR_1)
    return VAR_13;
  }
  VAR_14 = FUNC_5(VAR_8, VAR_7, VAR_9, VAR_10);
  if (VAR_14 < 0)
   return VAR_14;
  *VAR_11 = 1;
  VAR_12 = FUNC_0(VAR_14 + *VAR_10, VAR_3);
  FUNC_1(VAR_12, &VAR_4);
  return VAR_14;
 } else {

  int VAR_15;
  size_t VAR_16;
  void *VAR_17;


  while (1) {
   VAR_16 = FUNC_7(VAR_8);
   if (FUNC_11(VAR_16)) {
    VAR_17 = VAR_8->kvec->iov_base + VAR_8->iov_offset;
    break;
   }
   FUNC_3(VAR_8, 0);
  }
  if (VAR_16 > VAR_9)
   VAR_16 = VAR_9;

  VAR_12 = FUNC_0((unsigned long)VAR_17 + VAR_16, VAR_3) -
      (unsigned long)VAR_17 / VAR_3;

  *VAR_7 = FUNC_9(VAR_12, sizeof(struct page *),
           VAR_2);
  if (!*VAR_7)
   return -VAR_0;

  *VAR_11 = 0;
  VAR_17 -= (*VAR_10 = FUNC_12(VAR_17));
  for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
   if (FUNC_8(VAR_17))
    (*VAR_7)[VAR_15] = FUNC_13(VAR_17);
   else
    (*VAR_7)[VAR_15] = FUNC_10(VAR_17);
   VAR_17 += VAR_3;
  }
  return VAR_16;
 }
}
