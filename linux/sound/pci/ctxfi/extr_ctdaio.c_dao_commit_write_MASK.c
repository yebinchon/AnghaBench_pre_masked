
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct dao {int ctrl_blk; TYPE_2__* hw; TYPE_1__ daio; } ;
struct TYPE_5__ {int (* dao_commit_write ) (TYPE_2__*,int ,int ) ;} ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dao *VAR_0)
{
 VAR_0->hw->dao_commit_write(VAR_0->hw,
  FUNC_0(VAR_0->daio.type, VAR_0->hw), VAR_0->ctrl_blk);
 return 0;
}
