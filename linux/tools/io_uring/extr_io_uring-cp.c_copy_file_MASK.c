
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_uring_cqe {scalar_t__ res; } ;
struct io_uring {int dummy; } ;
struct TYPE_2__ {size_t iov_len; int iov_base; } ;
struct io_data {scalar_t__ first_len; scalar_t__ read; int offset; TYPE_1__ iov; } ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct io_data*) ;
 struct io_data* FUNC_2 (struct io_uring_cqe*) ;
 int FUNC_3 (struct io_uring*,struct io_uring_cqe*) ;
 int FUNC_4 (struct io_uring*,struct io_uring_cqe**) ;
 int FUNC_5 (struct io_uring*) ;
 int FUNC_6 (struct io_uring*,struct io_uring_cqe**) ;
 int FUNC_7 (struct io_uring*,struct io_data*) ;
 scalar_t__ FUNC_8 (struct io_uring*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct io_uring*,struct io_data*) ;
 int VAR_3 ;
 char* FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct io_uring *VAR_4, off_t VAR_5)
{
 unsigned long VAR_6, VAR_7;
 struct io_uring_cqe *VAR_8;
 off_t VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = VAR_5;
 VAR_7 = VAR_6 = VAR_10 = 0;

 while (VAR_5 || VAR_9) {
  unsigned long VAR_12;
  int VAR_13;




  VAR_12 = VAR_6;
  while (VAR_5) {
   off_t VAR_14 = VAR_5;

   if (VAR_6 + VAR_7 >= VAR_2)
    break;
   if (VAR_14 > VAR_0)
    VAR_14 = VAR_0;
   else if (!VAR_14)
    break;

   if (FUNC_8(VAR_4, VAR_14, VAR_10))
    break;

   VAR_5 -= VAR_14;
   VAR_10 += VAR_14;
   VAR_6++;
  }

  if (VAR_12 != VAR_6) {
   VAR_11 = FUNC_5(VAR_4);
   if (VAR_11 < 0) {
    FUNC_0(VAR_3, "io_uring_submit: %s\n", FUNC_10(-VAR_11));
    break;
   }
  }




  VAR_13 = 0;
  while (VAR_9) {
   struct io_data *VAR_15;

   if (!VAR_13) {
    VAR_11 = FUNC_6(VAR_4, &VAR_8);
    VAR_13 = 1;
   } else
    VAR_11 = FUNC_4(VAR_4, &VAR_8);
   if (VAR_11 < 0) {
    FUNC_0(VAR_3, "io_uring_peek_cqe: %s\n",
       FUNC_10(-VAR_11));
    return 1;
   }
   if (!VAR_8)
    break;

   VAR_15 = FUNC_2(VAR_8);
   if (VAR_8->res < 0) {
    if (VAR_8->res == -VAR_1) {
     FUNC_7(VAR_4, VAR_15);
     FUNC_3(VAR_4, VAR_8);
     continue;
    }
    FUNC_0(VAR_3, "cqe failed: %s\n",
      FUNC_10(-VAR_8->res));
    return 1;
   } else if ((size_t) VAR_8->res != VAR_15->iov.iov_len) {

    VAR_15->iov.iov_base += VAR_8->res;
    VAR_15->iov.iov_len -= VAR_8->res;
    VAR_15->offset += VAR_8->res;
    FUNC_7(VAR_4, VAR_15);
    FUNC_3(VAR_4, VAR_8);
    continue;
   }





   if (VAR_15->read) {
    FUNC_9(VAR_4, VAR_15);
    VAR_9 -= VAR_15->first_len;
    VAR_6--;
    VAR_7++;
   } else {
    FUNC_1(VAR_15);
    VAR_7--;
   }
   FUNC_3(VAR_4, VAR_8);
  }
 }

 return 0;
}
