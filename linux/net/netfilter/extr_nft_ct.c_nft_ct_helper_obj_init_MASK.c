
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_object {int dummy; } ;
struct nft_ctx {int family; int net; } ;
struct nft_ct_helper_obj {struct nf_conntrack_helper* helper6; struct nf_conntrack_helper* helper4; int l4proto; } ;
struct nf_conntrack_helper {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nf_conntrack_helper*) ;
 struct nf_conntrack_helper* FUNC_1 (char*,int const,int ) ;
 int FUNC_2 (int ,int const) ;
 struct nft_ct_helper_obj* FUNC_3 (struct nft_object*) ;
 int FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (struct nlattr const* const) ;
 int FUNC_6 (char*,struct nlattr const* const,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const struct nft_ctx *VAR_7,
      const struct nlattr * const VAR_8[],
      struct nft_object *VAR_9)
{
 struct nft_ct_helper_obj *VAR_10 = FUNC_3(VAR_9);
 struct nf_conntrack_helper *VAR_11, *VAR_12;
 char VAR_13[VAR_6];
 int VAR_14 = VAR_7->family;
 int VAR_15;

 if (!VAR_8[VAR_5] || !VAR_8[VAR_4])
  return -VAR_1;

 VAR_10->l4proto = FUNC_5(VAR_8[VAR_4]);
 if (!VAR_10->l4proto)
  return -VAR_2;

 FUNC_6(VAR_13, VAR_8[VAR_5], sizeof(VAR_13));

 if (VAR_8[VAR_3])
  VAR_14 = FUNC_7(FUNC_4(VAR_8[VAR_3]));

 VAR_11 = ((void*)0);
 VAR_12 = ((void*)0);

 switch (VAR_14) {
 case 130:
  if (VAR_7->family == 129)
   return -VAR_1;

  VAR_11 = FUNC_1(VAR_13, VAR_14,
          VAR_10->l4proto);
  break;
 case 129:
  if (VAR_7->family == 130)
   return -VAR_1;

  VAR_12 = FUNC_1(VAR_13, VAR_14,
          VAR_10->l4proto);
  break;
 case 128:
 case 132:
 case 131:
  VAR_11 = FUNC_1(VAR_13, 130,
          VAR_10->l4proto);
  VAR_12 = FUNC_1(VAR_13, 129,
          VAR_10->l4proto);
  break;
 default:
  return -VAR_0;
 }


 if (!VAR_11 && !VAR_12)
  return -VAR_2;

 VAR_10->helper4 = VAR_11;
 VAR_10->helper6 = VAR_12;

 VAR_15 = FUNC_2(VAR_7->net, VAR_7->family);
 if (VAR_15 < 0)
  goto err_put_helper;

 return 0;

err_put_helper:
 if (VAR_10->helper4)
  FUNC_0(VAR_10->helper4);
 if (VAR_10->helper6)
  FUNC_0(VAR_10->helper6);
 return VAR_15;
}
