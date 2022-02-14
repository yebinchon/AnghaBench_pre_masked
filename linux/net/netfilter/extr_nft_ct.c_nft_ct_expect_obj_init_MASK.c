
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_object {int dummy; } ;
struct nft_ctx {int family; int net; } ;
struct nft_ct_expect_obj {void* size; int timeout; int dport; void* l4proto; int l3num; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ) ;
 struct nft_ct_expect_obj* FUNC_1 (struct nft_object*) ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (struct nlattr const* const) ;
 void* FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct nft_ctx *VAR_6,
      const struct nlattr * const VAR_7[],
      struct nft_object *VAR_8)
{
 struct nft_ct_expect_obj *VAR_9 = FUNC_1(VAR_8);

 if (!VAR_7[VAR_3] ||
     !VAR_7[VAR_1] ||
     !VAR_7[VAR_5] ||
     !VAR_7[VAR_4])
  return -VAR_0;

 VAR_9->l3num = VAR_6->family;
 if (VAR_7[VAR_2])
  VAR_9->l3num = FUNC_5(FUNC_2(VAR_7[VAR_2]));

 VAR_9->l4proto = FUNC_4(VAR_7[VAR_3]);
 VAR_9->dport = FUNC_2(VAR_7[VAR_1]);
 VAR_9->timeout = FUNC_3(VAR_7[VAR_5]);
 VAR_9->size = FUNC_4(VAR_7[VAR_4]);

 return FUNC_0(VAR_6->net, VAR_6->family);
}
