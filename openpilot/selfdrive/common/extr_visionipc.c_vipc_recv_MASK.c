
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int p ;
struct TYPE_5__ {int d; int type; int member_0; } ;
typedef TYPE_1__ VisionPacketWire ;
struct TYPE_6__ {int d; int type; int num_fds; scalar_t__ fds; int member_0; } ;
typedef TYPE_2__ VisionPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,TYPE_1__*,int,int*,int ,int *) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (int ) ;

int FUNC_3(int VAR_2, VisionPacket *VAR_3) {
  VisionPacketWire VAR_4 = {0};
  VisionPacket VAR_5 = {0};
  int VAR_6 = FUNC_0(0, VAR_2, &VAR_4, sizeof(VAR_4), (int*)VAR_5, VAR_0, &VAR_5);
  if (VAR_6 < 0) {
    FUNC_1("vipc_recv err: %s\n", FUNC_2(VAR_1));
  } else {
    VAR_5 = VAR_4.type;
    VAR_5 = VAR_4.d;
    *VAR_3 = VAR_5;
  }
  return VAR_6;
}
