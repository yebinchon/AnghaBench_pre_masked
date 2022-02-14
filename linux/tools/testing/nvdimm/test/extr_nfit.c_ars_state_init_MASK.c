
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_cmd_ars_status {int dummy; } ;
struct device {int dummy; } ;
struct ars_state {int lock; int ars_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,scalar_t__,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, struct ars_state *VAR_4)
{

 VAR_4->ars_status = FUNC_0(VAR_3,
   sizeof(struct nd_cmd_ars_status) + VAR_2, VAR_1);
 if (!VAR_4->ars_status)
  return -VAR_0;
 FUNC_1(&VAR_4->lock);
 return 0;
}
