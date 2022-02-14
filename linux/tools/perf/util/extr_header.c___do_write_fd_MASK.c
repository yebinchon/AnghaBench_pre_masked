
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feat_fd {int fd; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_1(struct feat_fd *VAR_0, const void *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3 = FUNC_0(VAR_0->fd, VAR_1, VAR_2);

 if (VAR_3 != (ssize_t)VAR_2)
  return VAR_3 < 0 ? (int)VAR_3 : -1;
 return 0;
}
