
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int srcimap; } ;
struct TYPE_6__ {TYPE_2__ bf; } ;
struct TYPE_4__ {unsigned int idx; } ;
struct srcimp_mgr_ctrl_blk {TYPE_3__ dirty; TYPE_1__ srcimap; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, unsigned int VAR_1)
{
 struct srcimp_mgr_ctrl_blk *VAR_2 = VAR_0;

 VAR_2->srcimap.idx = VAR_1;
 VAR_2->dirty.bf.srcimap = 1;
 return 0;
}
