
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_uring {int dummy; } ;
struct TYPE_2__ {int iov_len; struct io_data* iov_base; } ;
struct io_data {int first_len; TYPE_1__ iov; int first_offset; int offset; scalar_t__ read; } ;


 int FUNC_0 (struct io_uring*) ;
 int FUNC_1 (struct io_uring*,struct io_data*) ;

__attribute__((used)) static void FUNC_2(struct io_uring *VAR_0, struct io_data *VAR_1)
{
 VAR_1->read = 0;
 VAR_1->offset = VAR_1->first_offset;

 VAR_1->iov.iov_base = VAR_1 + 1;
 VAR_1->iov.iov_len = VAR_1->first_len;

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0);
}
