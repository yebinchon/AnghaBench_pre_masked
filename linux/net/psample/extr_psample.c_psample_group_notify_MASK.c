
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct psample_group {int net; } ;
typedef enum psample_command { ____Placeholder_psample_command } psample_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct psample_group*,int,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct psample_group *VAR_5,
     enum psample_command VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_7)
  return;

 VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_6, 0, 0, VAR_2);
 if (!VAR_8)
  FUNC_0(&VAR_4, VAR_5->net, VAR_7, 0,
     VAR_3, VAR_0);
 else
  FUNC_1(VAR_7);
}
