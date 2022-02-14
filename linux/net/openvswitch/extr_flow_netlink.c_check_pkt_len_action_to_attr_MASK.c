
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct check_pkt_len_arg {int pkt_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 struct nlattr* FUNC_5 (struct nlattr const*,int*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (void*,int,struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(const struct nlattr *VAR_5,
     struct sk_buff *VAR_6)
{
 struct nlattr *VAR_7, *VAR_8 = ((void*)0);
 const struct check_pkt_len_arg *VAR_9;
 const struct nlattr *VAR_10, *VAR_11;
 int VAR_12 = 0, VAR_13 = FUNC_1(VAR_5);

 VAR_7 = FUNC_4(VAR_6, VAR_1);
 if (!VAR_7)
  return -VAR_0;




 VAR_11 = FUNC_0(VAR_5);
 VAR_9 = FUNC_0(VAR_11);

 if (FUNC_6(VAR_6, VAR_4, VAR_9->pkt_len)) {
  VAR_12 = -VAR_0;
  goto out;
 }




 VAR_10 = FUNC_5(VAR_11, &VAR_13);
 VAR_8 = FUNC_4(VAR_6,
       VAR_3);
 if (!VAR_8) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_7(FUNC_0(VAR_10), FUNC_1(VAR_10), VAR_6);
 if (VAR_12) {
  FUNC_2(VAR_6, VAR_8);
  goto out;
 } else {
  FUNC_3(VAR_6, VAR_8);
 }




 VAR_10 = FUNC_5(VAR_10, &VAR_13);
 VAR_8 = FUNC_4(VAR_6,
       VAR_2);
 if (!VAR_8) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_7(FUNC_0(VAR_10), FUNC_1(VAR_10), VAR_6);
 if (VAR_12) {
  FUNC_2(VAR_6, VAR_8);
  goto out;
 } else {
  FUNC_3(VAR_6, VAR_8);
 }

 FUNC_3(VAR_6, VAR_7);
 return 0;

out:
 FUNC_2(VAR_6, VAR_7);
 return VAR_12;
}
