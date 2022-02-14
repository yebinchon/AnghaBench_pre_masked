
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_snapshot {int * data; } ;
struct devlink_region {scalar_t__ size; } ;
struct devlink {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct devlink*,int *,scalar_t__,scalar_t__) ;
 struct devlink_snapshot* FUNC_1 (struct devlink_region*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3,
      struct devlink *VAR_4,
      struct devlink_region *VAR_5,
      struct nlattr **VAR_6,
      u64 VAR_7,
      u64 VAR_8,
      bool VAR_9,
      u64 *VAR_10)
{
 struct devlink_snapshot *VAR_11;
 u64 VAR_12 = VAR_7;
 u32 VAR_13;
 int VAR_14 = 0;

 *VAR_10 = VAR_7;

 VAR_13 = FUNC_2(VAR_6[VAR_0]);
 VAR_11 = FUNC_1(VAR_5, VAR_13);
 if (!VAR_11)
  return -VAR_2;

 if (VAR_8 > VAR_5->size || VAR_9)
  VAR_8 = VAR_5->size;

 while (VAR_12 < VAR_8) {
  u32 VAR_15;
  u8 *VAR_16;

  if (VAR_8 - VAR_12 < VAR_1)
   VAR_15 = VAR_8 - VAR_12;
  else
   VAR_15 = VAR_1;

  VAR_16 = &VAR_11->data[VAR_12];
  VAR_14 = FUNC_0(VAR_3, VAR_4,
           VAR_16, VAR_15,
           VAR_12);
  if (VAR_14)
   break;

  VAR_12 += VAR_15;
 }
 *VAR_10 = VAR_12;

 return VAR_14;
}
