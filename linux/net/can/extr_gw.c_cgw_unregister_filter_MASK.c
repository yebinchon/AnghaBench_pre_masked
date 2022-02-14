
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_5__ {int can_mask; int can_id; } ;
struct TYPE_6__ {TYPE_2__ filter; } ;
struct TYPE_4__ {int dev; } ;
struct cgw_job {TYPE_3__ ccgw; TYPE_1__ src; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ,int ,int ,int ,struct cgw_job*) ;

__attribute__((used)) static inline void FUNC_1(struct net *VAR_1, struct cgw_job *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->src.dev, VAR_2->ccgw.filter.can_id,
     VAR_2->ccgw.filter.can_mask, VAR_0, VAR_2);
}
