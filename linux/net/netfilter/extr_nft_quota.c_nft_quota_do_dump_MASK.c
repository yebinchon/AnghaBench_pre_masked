
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nft_quota {int flags; int consumed; int quota; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6, struct nft_quota *VAR_7,
        bool VAR_8)
{
 u64 VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = VAR_7->flags;





 VAR_9 = FUNC_0(&VAR_7->consumed);
 VAR_11 = FUNC_0(&VAR_7->quota);
 if (VAR_9 >= VAR_11) {
  VAR_10 = VAR_11;
  VAR_12 |= VAR_5;
 } else {
  VAR_10 = VAR_9;
 }

 if (FUNC_6(VAR_6, VAR_0, FUNC_3(VAR_11),
    VAR_3) ||
     FUNC_6(VAR_6, VAR_1, FUNC_3(VAR_10),
    VAR_3) ||
     FUNC_5(VAR_6, VAR_2, FUNC_4(VAR_12)))
  goto nla_put_failure;

 if (VAR_8) {
  FUNC_1(VAR_9, &VAR_7->consumed);
  FUNC_2(VAR_4, &VAR_7->flags);
 }
 return 0;

nla_put_failure:
 return -1;
}
