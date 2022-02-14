
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sw_flow {int id; } ;
struct sk_buff {int len; } ;
struct ovs_header {int dp_ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct ovs_header*) ;
 int FUNC_1 (struct sk_buff*,struct ovs_header*) ;
 struct ovs_header* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct sw_flow const*,struct sk_buff*,int const) ;
 int FUNC_4 (struct sw_flow const*,struct sk_buff*) ;
 int FUNC_5 (struct sw_flow const*,struct sk_buff*) ;
 int FUNC_6 (struct sw_flow const*,struct sk_buff*) ;
 int FUNC_7 (struct sw_flow const*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(const struct sw_flow *VAR_2, int VAR_3,
      struct sk_buff *VAR_4, u32 VAR_5,
      u32 VAR_6, u32 VAR_7, u8 VAR_8, u32 VAR_9)
{
 const int VAR_10 = VAR_4->len;
 struct ovs_header *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_1,
     VAR_7, VAR_8);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->dp_ifindex = VAR_3;

 VAR_12 = FUNC_5(VAR_2, VAR_4);
 if (VAR_12)
  goto error;

 if (FUNC_9(&VAR_2->id, VAR_9)) {
  VAR_12 = FUNC_7(VAR_2, VAR_4);
  if (VAR_12)
   goto error;
 }

 if (FUNC_10(VAR_9)) {
  VAR_12 = FUNC_6(VAR_2, VAR_4);
  if (VAR_12)
   goto error;
 }

 VAR_12 = FUNC_4(VAR_2, VAR_4);
 if (VAR_12)
  goto error;

 if (FUNC_8(VAR_9)) {
  VAR_12 = FUNC_3(VAR_2, VAR_4, VAR_10);
  if (VAR_12)
   goto error;
 }

 FUNC_1(VAR_4, VAR_11);
 return 0;

error:
 FUNC_0(VAR_4, VAR_11);
 return VAR_12;
}
