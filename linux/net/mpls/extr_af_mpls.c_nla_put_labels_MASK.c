
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct mpls_shim_hdr {int dummy; } ;


 int VAR_0 ;
 struct mpls_shim_hdr FUNC_0 (int const,int ,int ,int) ;
 struct mpls_shim_hdr* FUNC_1 (struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int,int) ;

int FUNC_3(struct sk_buff *VAR_1, int VAR_2,
     u8 VAR_3, const u32 VAR_4[])
{
 struct nlattr *VAR_5;
 struct mpls_shim_hdr *VAR_6;
 bool VAR_7;
 int VAR_8;
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3*4);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = 1;
 for (VAR_8 = VAR_3 - 1; VAR_8 >= 0; VAR_8--) {
  VAR_6[VAR_8] = FUNC_0(VAR_4[VAR_8], 0, 0, VAR_7);
  VAR_7 = 0;
 }

 return 0;
}
