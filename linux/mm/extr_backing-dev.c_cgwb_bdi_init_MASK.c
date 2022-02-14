
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct backing_dev_info {TYPE_1__* wb_congested; int wb; } ;
struct TYPE_3__ {int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,struct backing_dev_info*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct backing_dev_info *VAR_2)
{
 int VAR_3;

 VAR_2->wb_congested = FUNC_0(sizeof(*VAR_2->wb_congested), VAR_1);
 if (!VAR_2->wb_congested)
  return -VAR_0;

 FUNC_1(&VAR_2->wb_congested->refcnt, 1);

 VAR_3 = FUNC_3(&VAR_2->wb, VAR_2, 1, VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_2->wb_congested);
  return VAR_3;
 }
 return 0;
}
