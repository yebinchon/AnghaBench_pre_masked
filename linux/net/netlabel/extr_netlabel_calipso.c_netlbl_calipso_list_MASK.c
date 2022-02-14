
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; } ;
struct calipso_doi {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct calipso_doi* FUNC_0 (int ) ;
 int FUNC_1 (struct calipso_doi*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,struct genl_info*,int *,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 int VAR_10;
 struct sk_buff *VAR_11 = ((void*)0);
 void *VAR_12;
 u32 VAR_13;
 struct calipso_doi *VAR_14;

 if (!VAR_9->attrs[VAR_3]) {
  VAR_10 = -VAR_0;
  goto list_failure;
 }

 VAR_13 = FUNC_6(VAR_9->attrs[VAR_3]);

 VAR_14 = FUNC_0(VAR_13);
 if (!VAR_14) {
  VAR_10 = -VAR_0;
  goto list_failure;
 }

 VAR_11 = FUNC_8(VAR_6, VAR_2);
 if (!VAR_11) {
  VAR_10 = -VAR_1;
  goto list_failure_put;
 }
 VAR_12 = FUNC_3(VAR_11, VAR_9, &VAR_7,
     0, VAR_5);
 if (!VAR_12) {
  VAR_10 = -VAR_1;
  goto list_failure_put;
 }

 VAR_10 = FUNC_7(VAR_11, VAR_4, VAR_14->type);
 if (VAR_10 != 0)
  goto list_failure_put;

 FUNC_1(VAR_14);

 FUNC_2(VAR_11, VAR_12);
 return FUNC_4(VAR_11, VAR_9);

list_failure_put:
 FUNC_1(VAR_14);
list_failure:
 FUNC_5(VAR_11);
 return VAR_10;
}
