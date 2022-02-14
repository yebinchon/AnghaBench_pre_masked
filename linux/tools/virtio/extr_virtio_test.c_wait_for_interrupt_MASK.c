
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdev_info {int nvqs; TYPE_1__* fds; } ;
struct TYPE_2__ {int revents; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,unsigned long long*,int) ;

__attribute__((used)) static void FUNC_2(struct vdev_info *VAR_1)
{
 int VAR_2;
 unsigned long long VAR_3;
 FUNC_0(VAR_1->fds, VAR_1->nvqs, -1);
 for (VAR_2 = 0; VAR_2 < VAR_1->nvqs; ++VAR_2)
  if (VAR_1->fds[VAR_2].revents & VAR_0) {
   FUNC_1(VAR_1->fds[VAR_2].fd, &VAR_3, sizeof VAR_3);
  }
}
