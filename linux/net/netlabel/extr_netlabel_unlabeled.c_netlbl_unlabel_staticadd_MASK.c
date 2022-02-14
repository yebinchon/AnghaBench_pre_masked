
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
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,struct netlbl_audit*) ;
 int FUNC_1 (struct genl_info*,void**,void**,int *) ;
 int FUNC_2 (int *,char*,void*,void*,int ,int ,struct netlbl_audit*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8,
        struct genl_info *VAR_9)
{
 int VAR_10;
 char *VAR_11;
 void *VAR_12;
 void *VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 struct netlbl_audit VAR_16;





 if (!VAR_9->attrs[VAR_6] ||
     !VAR_9->attrs[VAR_1] ||
     !((!VAR_9->attrs[VAR_2] ||
        !VAR_9->attrs[VAR_3]) ^
       (!VAR_9->attrs[VAR_4] ||
        !VAR_9->attrs[VAR_5])))
  return -VAR_0;

 FUNC_0(VAR_8, &VAR_16);

 VAR_10 = FUNC_1(VAR_9, &VAR_12, &VAR_13, &VAR_14);
 if (VAR_10 != 0)
  return VAR_10;
 VAR_11 = FUNC_3(VAR_9->attrs[VAR_1]);
 VAR_10 = FUNC_5(
                    FUNC_3(VAR_9->attrs[VAR_6]),
      FUNC_4(VAR_9->attrs[VAR_6]),
      &VAR_15);
 if (VAR_10 != 0)
  return VAR_10;

 return FUNC_2(&VAR_7,
     VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
     &VAR_16);
}
