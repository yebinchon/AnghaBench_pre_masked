
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct station_parameters {int uapsd_queues; int max_sp; int sta_modify_mask; } ;
struct nlattr {int dummy; } ;
struct genl_info {int extack; struct nlattr** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct genl_info *VAR_9,
     struct station_parameters *VAR_10)
{
 struct nlattr *VAR_11[VAR_4 + 1];
 struct nlattr *VAR_12;
 int VAR_13;


 if (!VAR_9->attrs[VAR_3])
  return 0;

 VAR_12 = VAR_9->attrs[VAR_3];
 VAR_13 = FUNC_1(VAR_11, VAR_4, VAR_12,
       VAR_8,
       VAR_9->extack);
 if (VAR_13)
  return VAR_13;

 if (VAR_11[VAR_6])
  VAR_10->uapsd_queues = FUNC_0(
   VAR_11[VAR_6]);
 if (VAR_10->uapsd_queues & ~VAR_1)
  return -VAR_0;

 if (VAR_11[VAR_5])
  VAR_10->max_sp = FUNC_0(VAR_11[VAR_5]);

 if (VAR_10->max_sp & ~VAR_2)
  return -VAR_0;

 VAR_10->sta_modify_mask |= VAR_7;

 return 0;
}
