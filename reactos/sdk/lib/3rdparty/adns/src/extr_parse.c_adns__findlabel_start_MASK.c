
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int serv; int dglen; int max; int cbyte; int* dmend_r; scalar_t__ namelen; int const* dgram; int qu; int ads; } ;
typedef TYPE_1__ findlabel_state ;
typedef int byte ;
typedef int adns_state ;
typedef int adns_query ;



void FUNC_0(findlabel_state *VAR_0, adns_state VAR_1,
      int VAR_2, adns_query VAR_3,
      const byte *VAR_4, int VAR_5, int VAR_6,
      int VAR_7, int *VAR_8) {
  VAR_0->ads= VAR_1;
  VAR_0->qu= VAR_3;
  VAR_0->serv= VAR_2;
  VAR_0->dgram= VAR_4;
  VAR_0->dglen= VAR_5;
  VAR_0->max= VAR_6;
  VAR_0->cbyte= VAR_7;
  VAR_0->namelen= 0;
  VAR_0->dmend_r= VAR_8;
}
