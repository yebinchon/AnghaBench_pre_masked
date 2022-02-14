
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_15__ {int dst; } ;
struct TYPE_26__ {int dst; } ;
struct TYPE_25__ {int dst; } ;
struct fl_flow_key {TYPE_11__ tp_max; TYPE_9__ tp_min; TYPE_8__ tp; } ;
struct TYPE_16__ {int dst; } ;
struct TYPE_14__ {int dst; } ;
struct TYPE_17__ {TYPE_12__ tp_max; TYPE_10__ tp_min; } ;
struct TYPE_23__ {int dst; } ;
struct TYPE_22__ {int dst; } ;
struct TYPE_24__ {TYPE_6__ tp_max; TYPE_5__ tp_min; } ;
struct cls_fl_filter {TYPE_13__ mkey; TYPE_7__ key; TYPE_4__* mask; } ;
typedef scalar_t__ __be16 ;
struct TYPE_19__ {int dst; } ;
struct TYPE_18__ {int dst; } ;
struct TYPE_20__ {TYPE_2__ tp_max; TYPE_1__ tp_min; } ;
struct TYPE_21__ {TYPE_3__ key; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct cls_fl_filter *VAR_0,
      struct fl_flow_key *VAR_1,
      struct fl_flow_key *VAR_2)
{
 __be16 VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_0(VAR_0->mask->key.tp_min.dst);
 VAR_4 = FUNC_0(VAR_0->mask->key.tp_max.dst);
 VAR_5 = FUNC_0(VAR_0->key.tp_min.dst);
 VAR_6 = FUNC_0(VAR_0->key.tp_max.dst);

 if (VAR_3 && VAR_4) {
  if (FUNC_0(VAR_1->tp.dst) < VAR_5 ||
      FUNC_0(VAR_1->tp.dst) > VAR_6)
   return 0;


  VAR_2->tp_min.dst = VAR_0->mkey.tp_min.dst;
  VAR_2->tp_max.dst = VAR_0->mkey.tp_max.dst;
 }
 return 1;
}
