
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int p ;
struct TYPE_4__ {int d; int type; } ;
typedef TYPE_1__ VisionPacketWire ;
struct TYPE_5__ {int num_fds; scalar_t__ fds; int d; int type; } ;
typedef TYPE_2__ VisionPacket ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,void*,int,int*,int ,int *) ;

int FUNC_2(int VAR_1, const VisionPacket *VAR_2) {
  FUNC_0(VAR_2->num_fds <= VAR_0);

  VisionPacketWire VAR_3 = {
    .type = VAR_2->type,
    .d = VAR_2->d,
  };
  return FUNC_1(1, VAR_1, (void*)&VAR_3, sizeof(VAR_3), (int*)VAR_2->fds, VAR_2->num_fds, ((void*)0));
}
