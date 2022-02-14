
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct netlbl_dom_map {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 void* FUNC_1 (struct sk_buff*,struct genl_info*,int *,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct netlbl_dom_map* FUNC_4 (int *,int ) ;
 int VAR_7 ;
 int FUNC_5 (struct sk_buff*,struct netlbl_dom_map*) ;
 int FUNC_6 (scalar_t__) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 int VAR_10 = -VAR_2;
 struct sk_buff *VAR_11 = ((void*)0);
 void *VAR_12;
 struct netlbl_dom_map *VAR_13;
 u16 VAR_14;

 if (VAR_9->attrs[VAR_4])
  VAR_14 = FUNC_6(VAR_9->attrs[VAR_4]);
 else
  VAR_14 = VAR_0;

 VAR_11 = FUNC_7(VAR_6, VAR_3);
 if (VAR_11 == ((void*)0))
  return -VAR_2;
 VAR_12 = FUNC_1(VAR_11, VAR_9, &VAR_7,
     0, VAR_5);
 if (VAR_12 == ((void*)0))
  goto listdef_failure;

 FUNC_8();
 VAR_13 = FUNC_4(((void*)0), VAR_14);
 if (VAR_13 == ((void*)0)) {
  VAR_10 = -VAR_1;
  goto listdef_failure_lock;
 }
 VAR_10 = FUNC_5(VAR_11, VAR_13);
 FUNC_9();
 if (VAR_10 != 0)
  goto listdef_failure;

 FUNC_0(VAR_11, VAR_12);
 return FUNC_2(VAR_11, VAR_9);

listdef_failure_lock:
 FUNC_9();
listdef_failure:
 FUNC_3(VAR_11);
 return VAR_10;
}
