
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
typedef int flags_mask ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,int ,int ) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (struct sk_buff*,int ,int,int *) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_6, u32 VAR_7, u32 VAR_8)
{
 u32 VAR_9, VAR_10;
 __be32 VAR_11, VAR_12;
 int VAR_13;

 if (!FUNC_2(&VAR_8, 0, sizeof(VAR_8)))
  return 0;

 VAR_9 = 0;
 VAR_10 = 0;

 FUNC_1(VAR_7, VAR_8, &VAR_9, &VAR_10,
   VAR_4, VAR_1);
 FUNC_1(VAR_7, VAR_8, &VAR_9, &VAR_10,
   VAR_3,
   VAR_0);

 VAR_11 = FUNC_0(VAR_9);
 VAR_12 = FUNC_0(VAR_10);

 VAR_13 = FUNC_3(VAR_6, VAR_2, 4, &VAR_11);
 if (VAR_13)
  return VAR_13;

 return FUNC_3(VAR_6, VAR_5, 4, &VAR_12);
}
