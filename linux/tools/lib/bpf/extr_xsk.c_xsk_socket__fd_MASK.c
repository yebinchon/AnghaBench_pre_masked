
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_socket {int fd; } ;


 int VAR_0 ;

int FUNC_0(const struct xsk_socket *VAR_1)
{
 return VAR_1 ? VAR_1->fd : -VAR_0;
}
