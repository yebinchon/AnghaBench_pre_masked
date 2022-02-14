
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_params {unsigned int flags; } ;
struct io_uring {int dummy; } ;
typedef int p ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,struct io_uring_params*,struct io_uring*) ;
 int FUNC_2 (unsigned int,struct io_uring_params*) ;
 int FUNC_3 (struct io_uring_params*,int ,int) ;

int FUNC_4(unsigned VAR_0, struct io_uring *VAR_1, unsigned VAR_2)
{
 struct io_uring_params VAR_3;
 int VAR_4, VAR_5;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.flags = VAR_2;

 VAR_4 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = FUNC_1(VAR_4, &VAR_3, VAR_1);
 if (VAR_5)
  FUNC_0(VAR_4);

 return VAR_5;
}
