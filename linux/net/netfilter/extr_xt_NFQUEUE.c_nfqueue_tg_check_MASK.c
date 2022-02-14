
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xt_tgchk_param {TYPE_1__* target; struct xt_NFQ_info_v3* targinfo; } ;
struct xt_NFQ_info_v3 {int queues_total; int queuenum; int flags; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_4)
{
 const struct xt_NFQ_info_v3 *VAR_5 = VAR_4->targinfo;
 u32 VAR_6;

 FUNC_0(&VAR_3);

 if (VAR_5->queues_total == 0) {
  FUNC_1("number of total queues is 0\n");
  return -VAR_0;
 }
 VAR_6 = VAR_5->queues_total - 1 + VAR_5->queuenum;
 if (VAR_6 > 0xffff) {
  FUNC_1("number of queues (%u) out of range (got %u)\n",
        VAR_5->queues_total, VAR_6);
  return -VAR_1;
 }
 if (VAR_4->target->revision == 2 && VAR_5->flags > 1)
  return -VAR_0;
 if (VAR_4->target->revision == 3 && VAR_5->flags & ~VAR_2)
  return -VAR_0;

 return 0;
}
