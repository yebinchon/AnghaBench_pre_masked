
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hw; } ;
struct srcimp_mgr {TYPE_1__ mgr; } ;
struct srcimp_desc {int msr; } ;
struct TYPE_7__ {TYPE_3__* ops; } ;
struct srcimp {TYPE_2__ rsc; struct srcimp_mgr* mgr; int * ops; int imappers; int * idx; } ;
struct imapper {int dummy; } ;
struct TYPE_8__ {int (* master ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct srcimp *VAR_5,
      const struct srcimp_desc *VAR_6,
      struct srcimp_mgr *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_5->rsc, VAR_5->idx[0],
         VAR_2, VAR_6->msr, VAR_7->mgr.hw);
 if (VAR_8)
  return VAR_8;


 VAR_5->imappers = FUNC_0(VAR_6->msr, sizeof(struct imapper),
       VAR_1);
 if (!VAR_5->imappers) {
  VAR_8 = -VAR_0;
  goto error1;
 }


 VAR_5->rsc.ops = &VAR_3;
 VAR_5->ops = &VAR_4;
 VAR_5->mgr = VAR_7;

 VAR_5->rsc.ops->master(&VAR_5->rsc);

 return 0;

error1:
 FUNC_2(&VAR_5->rsc);
 return VAR_8;
}
