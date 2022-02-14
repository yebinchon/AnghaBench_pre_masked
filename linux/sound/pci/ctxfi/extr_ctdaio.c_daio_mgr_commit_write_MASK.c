
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {int (* daio_mgr_commit_write ) (struct hw*,int ) ;} ;
struct TYPE_2__ {int ctrl_blk; struct hw* hw; } ;
struct daio_mgr {TYPE_1__ mgr; } ;


 int FUNC_0 (struct hw*,int ) ;

__attribute__((used)) static int FUNC_1(struct daio_mgr *VAR_0)
{
 struct hw *VAR_1 = VAR_0->mgr.hw;

 VAR_1->daio_mgr_commit_write(VAR_1, VAR_0->mgr.ctrl_blk);
 return 0;
}
