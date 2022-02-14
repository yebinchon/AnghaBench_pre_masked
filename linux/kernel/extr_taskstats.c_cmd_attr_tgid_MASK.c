
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct taskstats {int dummy; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct taskstats*) ;
 struct taskstats* FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct genl_info*,int ,struct sk_buff**,size_t) ;
 int FUNC_5 (struct sk_buff*,struct genl_info*) ;
 size_t FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct genl_info *VAR_4)
{
 struct taskstats *VAR_5;
 struct sk_buff *VAR_6;
 size_t VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6();

 VAR_9 = FUNC_4(VAR_4, VAR_2, &VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = -VAR_0;
 VAR_8 = FUNC_2(VAR_4->attrs[VAR_1]);
 VAR_5 = FUNC_1(VAR_6, VAR_3, VAR_8);
 if (!VAR_5)
  goto err;

 VAR_9 = FUNC_0(VAR_8, VAR_5);
 if (VAR_9 < 0)
  goto err;
 return FUNC_5(VAR_6, VAR_4);
err:
 FUNC_3(VAR_6);
 return VAR_9;
}
