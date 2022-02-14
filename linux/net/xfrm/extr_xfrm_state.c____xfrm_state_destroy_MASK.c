
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {TYPE_1__* type; scalar_t__ type_offload; int preplay_esn; int replay_esn; int coaddr; int encap; int calg; int ealg; int aalg; int aead; int rtimer; int mtimer; } ;
struct TYPE_2__ {int (* destructor ) (struct xfrm_state*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xfrm_state*) ;
 int FUNC_4 (struct xfrm_state*) ;
 int FUNC_5 (struct xfrm_state*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_9(struct xfrm_state *VAR_0)
{
 FUNC_1(&VAR_0->mtimer);
 FUNC_0(&VAR_0->rtimer);
 FUNC_2(VAR_0->aead);
 FUNC_2(VAR_0->aalg);
 FUNC_2(VAR_0->ealg);
 FUNC_2(VAR_0->calg);
 FUNC_2(VAR_0->encap);
 FUNC_2(VAR_0->coaddr);
 FUNC_2(VAR_0->replay_esn);
 FUNC_2(VAR_0->preplay_esn);
 if (VAR_0->type_offload)
  FUNC_7(VAR_0->type_offload);
 if (VAR_0->type) {
  VAR_0->type->destructor(VAR_0);
  FUNC_6(VAR_0->type);
 }
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
 FUNC_8(VAR_0);
}
