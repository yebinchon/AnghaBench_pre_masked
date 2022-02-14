
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,struct netlbl_audit*) ;
 int FUNC_1 (struct genl_info*,void**,void**,int *) ;
 int FUNC_2 (int *,int *,void*,void*,int ,int ,struct netlbl_audit*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_7,
           struct genl_info *VAR_8)
{
 int VAR_9;
 void *VAR_10;
 void *VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 struct netlbl_audit VAR_14;





 if (!VAR_8->attrs[VAR_5] ||
     !((!VAR_8->attrs[VAR_1] ||
        !VAR_8->attrs[VAR_2]) ^
       (!VAR_8->attrs[VAR_3] ||
        !VAR_8->attrs[VAR_4])))
  return -VAR_0;

 FUNC_0(VAR_7, &VAR_14);

 VAR_9 = FUNC_1(VAR_8, &VAR_10, &VAR_11, &VAR_12);
 if (VAR_9 != 0)
  return VAR_9;
 VAR_9 = FUNC_5(
                    FUNC_3(VAR_8->attrs[VAR_5]),
      FUNC_4(VAR_8->attrs[VAR_5]),
      &VAR_13);
 if (VAR_9 != 0)
  return VAR_9;

 return FUNC_2(&VAR_6,
     ((void*)0), VAR_10, VAR_11, VAR_12, VAR_13,
     &VAR_14);
}
