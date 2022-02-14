
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feat_fd {int fd; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1(struct feat_fd *VAR_0, void *VAR_1)
{
 ssize_t VAR_2 = FUNC_0(VAR_0->fd, VAR_1, 0);

 return VAR_2 < 0 ? -1 : 0;
}
