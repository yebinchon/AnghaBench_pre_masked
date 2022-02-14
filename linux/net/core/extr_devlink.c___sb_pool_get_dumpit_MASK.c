
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct devlink_sb {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct devlink*,struct devlink_sb*,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct devlink_sb*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2, int VAR_3, int *VAR_4,
    struct devlink *VAR_5,
    struct devlink_sb *VAR_6,
    u32 VAR_7, u32 VAR_8)
{
 u16 VAR_9 = FUNC_1(VAR_6);
 u16 VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  if (*VAR_4 < VAR_3) {
   (*VAR_4)++;
   continue;
  }
  VAR_11 = FUNC_0(VAR_2, VAR_5,
           VAR_6,
           VAR_10,
           VAR_0,
           VAR_7, VAR_8, VAR_1);
  if (VAR_11)
   return VAR_11;
  (*VAR_4)++;
 }
 return 0;
}
