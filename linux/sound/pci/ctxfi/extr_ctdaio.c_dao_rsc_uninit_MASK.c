
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t msr; } ;
struct TYPE_6__ {TYPE_2__ rscl; } ;
struct dao {TYPE_3__ daio; int * ctrl_blk; TYPE_1__* hw; scalar_t__* imappers; } ;
struct TYPE_4__ {int (* dao_put_ctrl_blk ) (int *) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct dao*) ;
 int FUNC_2 (struct dao*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dao *VAR_0)
{
 if (VAR_0->imappers) {
  if (VAR_0->imappers[0])
   FUNC_1(VAR_0);

  if (VAR_0->imappers[VAR_0->daio.rscl.msr])
   FUNC_2(VAR_0);

  FUNC_3(VAR_0->imappers);
  VAR_0->imappers = ((void*)0);
 }
 VAR_0->hw->dao_put_ctrl_blk(VAR_0->ctrl_blk);
 VAR_0->hw = VAR_0->ctrl_blk = ((void*)0);
 FUNC_0(&VAR_0->daio);

 return 0;
}
