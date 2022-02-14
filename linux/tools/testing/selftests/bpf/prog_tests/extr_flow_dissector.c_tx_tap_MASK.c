
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; void* iov_base; } ;


 int FUNC_0 (struct iovec*) ;
 int FUNC_1 (int,struct iovec*,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_0, void *VAR_1, size_t VAR_2)
{
 struct iovec VAR_3[] = {
  {
   .iov_len = VAR_2,
   .iov_base = VAR_1,
  },
 };
 return FUNC_1(VAR_0, VAR_3, FUNC_0(VAR_3));
}
