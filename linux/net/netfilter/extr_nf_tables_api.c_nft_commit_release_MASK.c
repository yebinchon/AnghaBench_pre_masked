
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int net; } ;
struct nft_trans {int msg_type; TYPE_2__ ctx; scalar_t__ put_net; } ;
struct TYPE_7__ {int priv; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nft_trans*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ) ;
 struct nft_trans* FUNC_9 (struct nft_trans*) ;
 int FUNC_10 (struct nft_trans*) ;
 TYPE_1__ FUNC_11 (struct nft_trans*) ;
 int FUNC_12 (struct nft_trans*) ;
 int FUNC_13 (struct nft_trans*) ;
 int FUNC_14 (struct nft_trans*) ;
 int FUNC_15 (struct nft_trans*) ;
 int FUNC_16 (struct nft_trans*) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct nft_trans *VAR_0)
{
 switch (VAR_0->msg_type) {
 case 129:
  FUNC_6(&VAR_0->ctx);
  break;
 case 128:
  FUNC_0(FUNC_10(VAR_0));
  FUNC_1(FUNC_9(VAR_0));
  break;
 case 135:
  FUNC_2(&VAR_0->ctx);
  break;
 case 132:
  FUNC_4(&VAR_0->ctx, FUNC_15(VAR_0));
  break;
 case 131:
  FUNC_8(FUNC_16(VAR_0));
  break;
 case 130:
  FUNC_5(&VAR_0->ctx,
        FUNC_12(VAR_0),
        FUNC_11(VAR_0).priv);
  break;
 case 133:
  FUNC_7(&VAR_0->ctx, FUNC_14(VAR_0));
  break;
 case 134:
  FUNC_3(FUNC_13(VAR_0));
  break;
 }

 if (VAR_0->put_net)
  FUNC_17(VAR_0->ctx.net);

 FUNC_1(VAR_0);
}
