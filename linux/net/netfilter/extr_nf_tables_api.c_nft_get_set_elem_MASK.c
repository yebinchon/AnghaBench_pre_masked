
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int val; } ;
struct nft_set_elem {void* priv; TYPE_1__ key; } ;
struct nft_set {scalar_t__ klen; TYPE_2__* ops; } ;
struct nft_data_desc {scalar_t__ type; scalar_t__ len; } ;
struct nft_ctx {int portid; int net; int seq; } ;
struct TYPE_4__ {void* (* get ) (int ,struct nft_set*,struct nft_set_elem*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct nft_ctx*,int ,int ,int ,int ,struct nft_set*,struct nft_set_elem*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct nft_ctx*,int *,int,struct nft_data_desc*,struct nlattr*) ;
 int VAR_12 ;
 int FUNC_6 (struct nft_set*,struct nlattr*,int *) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 void* FUNC_9 (int ,struct nft_set*,struct nft_set_elem*,int ) ;

__attribute__((used)) static int FUNC_10(struct nft_ctx *VAR_13, struct nft_set *VAR_14,
       const struct nlattr *VAR_15)
{
 struct nlattr *VAR_16[VAR_8 + 1];
 struct nft_data_desc VAR_17;
 struct nft_set_elem VAR_18;
 struct sk_buff *VAR_19;
 uint32_t VAR_20 = 0;
 void *VAR_21;
 int VAR_22;

 VAR_22 = FUNC_7(VAR_16, VAR_8, VAR_15,
       VAR_12, ((void*)0));
 if (VAR_22 < 0)
  return VAR_22;

 if (!VAR_16[VAR_7])
  return -VAR_1;

 VAR_22 = FUNC_6(VAR_14, VAR_16[VAR_6], &VAR_20);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_5(VAR_13, &VAR_18.key.val, sizeof(VAR_18.key), &VAR_17,
       VAR_16[VAR_7]);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = -VAR_1;
 if (VAR_17.type != VAR_9 || VAR_17.len != VAR_14->klen)
  return VAR_22;

 VAR_21 = VAR_14->ops->get(VAR_13->net, VAR_14, &VAR_18, VAR_20);
 if (FUNC_0(VAR_21))
  return FUNC_1(VAR_21);

 VAR_18.priv = VAR_21;

 VAR_22 = -VAR_3;
 VAR_19 = FUNC_8(VAR_11, VAR_4);
 if (VAR_19 == ((void*)0))
  goto err1;

 VAR_22 = FUNC_3(VAR_19, VAR_13, VAR_13->seq, VAR_13->portid,
       VAR_10, 0, VAR_14, &VAR_18);
 if (VAR_22 < 0)
  goto err2;

 VAR_22 = FUNC_4(VAR_19, VAR_13->net, VAR_13->portid, VAR_5);

 if (VAR_22 < 0)
  goto err1;

 return 0;
err2:
 FUNC_2(VAR_19);
err1:

 return VAR_22 == -VAR_0 ? -VAR_2 : VAR_22;
}
