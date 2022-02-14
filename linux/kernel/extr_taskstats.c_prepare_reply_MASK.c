
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (size_t,int ) ;
 void* FUNC_1 (struct sk_buff*,int ,int,int *,int ,int ) ;
 void* FUNC_2 (struct sk_buff*,struct genl_info*,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct genl_info *VAR_5, u8 VAR_6, struct sk_buff **VAR_7,
    size_t VAR_8)
{
 struct sk_buff *VAR_9;
 void *VAR_10;




 VAR_9 = FUNC_0(VAR_8, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 if (!VAR_5) {
  int VAR_11 = FUNC_4(VAR_4) - 1;

  VAR_10 = FUNC_1(VAR_9, 0, VAR_11, &VAR_3, 0, VAR_6);
 } else
  VAR_10 = FUNC_2(VAR_9, VAR_5, &VAR_3, 0, VAR_6);
 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_9);
  return -VAR_0;
 }

 *VAR_7 = VAR_9;
 return 0;
}
