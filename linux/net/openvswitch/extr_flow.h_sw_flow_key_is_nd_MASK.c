
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_5__ {scalar_t__ proto; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct sw_flow_key {TYPE_3__ tp; TYPE_2__ ip; TYPE_1__ eth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct sw_flow_key *VAR_4)
{
 return VAR_4->eth.type == FUNC_0(VAR_0) &&
  VAR_4->ip.proto == VAR_3 &&
  VAR_4->tp.dst == 0 &&
  (VAR_4->tp.src == FUNC_0(VAR_2) ||
   VAR_4->tp.src == FUNC_0(VAR_1));
}
