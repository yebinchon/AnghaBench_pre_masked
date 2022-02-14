
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_socket {int fd; int queue_id; int xsks_map_fd; } ;


 int FUNC_0 (int ,int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct xsk_socket *VAR_0)
{
 return FUNC_0(VAR_0->xsks_map_fd, &VAR_0->queue_id,
       &VAR_0->fd, 0);
}
