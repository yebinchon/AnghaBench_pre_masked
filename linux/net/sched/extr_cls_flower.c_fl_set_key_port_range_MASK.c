
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_4__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_3__ {scalar_t__ src; scalar_t__ dst; } ;
struct fl_flow_key {TYPE_2__ tp_min; TYPE_1__ tp_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nlattr**,scalar_t__*,int ,scalar_t__*,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct nlattr **VAR_6, struct fl_flow_key *VAR_7,
     struct fl_flow_key *VAR_8)
{
 FUNC_0(VAR_6, &VAR_7->tp_min.dst,
         VAR_2, &VAR_8->tp_min.dst,
         VAR_5, sizeof(VAR_7->tp_min.dst));
 FUNC_0(VAR_6, &VAR_7->tp_max.dst,
         VAR_1, &VAR_8->tp_max.dst,
         VAR_5, sizeof(VAR_7->tp_max.dst));
 FUNC_0(VAR_6, &VAR_7->tp_min.src,
         VAR_4, &VAR_8->tp_min.src,
         VAR_5, sizeof(VAR_7->tp_min.src));
 FUNC_0(VAR_6, &VAR_7->tp_max.src,
         VAR_3, &VAR_8->tp_max.src,
         VAR_5, sizeof(VAR_7->tp_max.src));

 if ((VAR_8->tp_min.dst && VAR_8->tp_max.dst &&
      FUNC_1(VAR_7->tp_max.dst) <= FUNC_1(VAR_7->tp_min.dst)) ||
      (VAR_8->tp_min.src && VAR_8->tp_max.src &&
       FUNC_1(VAR_7->tp_max.src) <= FUNC_1(VAR_7->tp_min.src)))
  return -VAR_0;

 return 0;
}
