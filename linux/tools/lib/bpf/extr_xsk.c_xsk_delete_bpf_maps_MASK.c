
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_socket {int xsks_map_fd; int queue_id; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xsk_socket *VAR_0)
{
 FUNC_0(VAR_0->xsks_map_fd, &VAR_0->queue_id);
 FUNC_1(VAR_0->xsks_map_fd);
}
