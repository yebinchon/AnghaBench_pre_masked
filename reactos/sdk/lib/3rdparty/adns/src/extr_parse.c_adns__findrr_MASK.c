
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
typedef int adns_status ;
typedef TYPE_1__* adns_query ;
struct TYPE_4__ {int cname_begin; int cname_dglen; int cname_dgram; int query_dglen; int query_dgram; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int const*,int,int*,int*,int*,unsigned long*,int*,int*,int ,int ,int ,int*) ;

adns_status FUNC_1(adns_query VAR_1, int VAR_2,
    const byte *VAR_3, int VAR_4, int *VAR_5,
    int *VAR_6, int *VAR_7, unsigned long *VAR_8,
    int *VAR_9, int *VAR_10,
    int *VAR_11) {
  if (!VAR_11) {
    return FUNC_0(VAR_1,VAR_2,
          VAR_3,VAR_4,VAR_5,
          VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,
          0,0,0, 0);
  } else if (!VAR_1->cname_dgram) {
    return FUNC_0(VAR_1,VAR_2,
          VAR_3,VAR_4,VAR_5,
          VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,
          VAR_1->query_dgram,VAR_1->query_dglen,VAR_0,
          VAR_11);
  } else {
    return FUNC_0(VAR_1,VAR_2,
          VAR_3,VAR_4,VAR_5,
          VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,
          VAR_1->cname_dgram,VAR_1->cname_dglen,VAR_1->cname_begin,
          VAR_11);
  }
}
