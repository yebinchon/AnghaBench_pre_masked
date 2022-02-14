
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
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct netlbl_audit*) ;
 int FUNC_1 (struct genl_info*,void**,void**,int *) ;
 int FUNC_2 (int *,int *,void*,void*,int ,struct netlbl_audit*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_6,
       struct genl_info *VAR_7)
{
 int VAR_8;
 void *VAR_9;
 void *VAR_10;
 u32 VAR_11;
 struct netlbl_audit VAR_12;



 if (!((!VAR_7->attrs[VAR_1] ||
        !VAR_7->attrs[VAR_2]) ^
       (!VAR_7->attrs[VAR_3] ||
        !VAR_7->attrs[VAR_4])))
  return -VAR_0;

 FUNC_0(VAR_6, &VAR_12);

 VAR_8 = FUNC_1(VAR_7, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_8 != 0)
  return VAR_8;

 return FUNC_2(&VAR_5,
        ((void*)0), VAR_9, VAR_10, VAR_11,
        &VAR_12);
}
