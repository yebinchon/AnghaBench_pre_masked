
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {int dummy; } ;
struct io_uring {int dummy; } ;
struct io_data {int offset; int iov; scalar_t__ read; } ;


 int FUNC_0 (struct io_uring_sqe*) ;
 int VAR_0 ;
 struct io_uring_sqe* FUNC_1 (struct io_uring*) ;
 int FUNC_2 (struct io_uring_sqe*,int ,int *,int,int ) ;
 int FUNC_3 (struct io_uring_sqe*,int ,int *,int,int ) ;
 int FUNC_4 (struct io_uring_sqe*,struct io_data*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct io_uring *VAR_2, struct io_data *VAR_3)
{
 struct io_uring_sqe *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 FUNC_0(VAR_4);

 if (VAR_3->read)
  FUNC_2(VAR_4, VAR_0, &VAR_3->iov, 1, VAR_3->offset);
 else
  FUNC_3(VAR_4, VAR_1, &VAR_3->iov, 1, VAR_3->offset);

 FUNC_4(VAR_4, VAR_3);
}
