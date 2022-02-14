
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ srcimap; } ;
struct TYPE_6__ {TYPE_2__ bf; } ;
struct TYPE_4__ {int idx; int srcaim; } ;
struct srcimp_mgr_ctrl_blk {TYPE_3__ dirty; TYPE_1__ srcimap; } ;
struct hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hw*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct hw *VAR_1, void *VAR_2)
{
 struct srcimp_mgr_ctrl_blk *VAR_3 = VAR_2;

 if (VAR_3->dirty.bf.srcimap) {
  FUNC_0(VAR_1, VAR_0+VAR_3->srcimap.idx*0x100,
      VAR_3->srcimap.srcaim);
  VAR_3->dirty.bf.srcimap = 0;
 }

 return 0;
}
