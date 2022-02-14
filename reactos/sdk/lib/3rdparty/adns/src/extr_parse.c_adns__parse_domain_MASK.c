
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ used; } ;
typedef TYPE_1__ vbuf ;
typedef int findlabel_state ;
typedef int byte ;
typedef int adns_status ;
typedef int adns_state ;
typedef int adns_queryflags ;
typedef int adns_query ;


 int FUNC_0 (int *,int ,int,int ,int const*,int,int,int,int*) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int ,int const*) ;

adns_status FUNC_2(adns_state VAR_0, int VAR_1, adns_query VAR_2,
          vbuf *VAR_3, adns_queryflags VAR_4,
          const byte *VAR_5, int VAR_6, int *VAR_7, int VAR_8) {
  findlabel_state VAR_9;

  FUNC_0(&VAR_9,VAR_0, VAR_1,VAR_2, VAR_5,VAR_6,VAR_8, *VAR_7,VAR_7);
  VAR_3->used= 0;
  return FUNC_1(&VAR_9,VAR_0,VAR_2, VAR_3,VAR_4,VAR_5);
}
