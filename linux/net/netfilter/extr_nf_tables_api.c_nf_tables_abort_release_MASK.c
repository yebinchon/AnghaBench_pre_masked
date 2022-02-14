
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_trans {int msg_type; int ctx; } ;
struct TYPE_2__ {int priv; } ;
 int FUNC_0 (struct nft_trans*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_1__ FUNC_8 (struct nft_trans*) ;
 int FUNC_9 (struct nft_trans*) ;
 int FUNC_10 (struct nft_trans*) ;
 int FUNC_11 (struct nft_trans*) ;
 int FUNC_12 (struct nft_trans*) ;
 int FUNC_13 (struct nft_trans*) ;

__attribute__((used)) static void FUNC_14(struct nft_trans *VAR_0)
{
 switch (VAR_0->msg_type) {
 case 128:
  FUNC_4(&VAR_0->ctx);
  break;
 case 134:
  FUNC_1(&VAR_0->ctx);
  break;
 case 131:
  FUNC_3(&VAR_0->ctx, FUNC_12(VAR_0));
  break;
 case 130:
  FUNC_6(FUNC_13(VAR_0));
  break;
 case 129:
  FUNC_7(FUNC_9(VAR_0),
         FUNC_8(VAR_0).priv, 1);
  break;
 case 132:
  FUNC_5(&VAR_0->ctx, FUNC_11(VAR_0));
  break;
 case 133:
  FUNC_2(FUNC_10(VAR_0));
  break;
 }
 FUNC_0(VAR_0);
}
