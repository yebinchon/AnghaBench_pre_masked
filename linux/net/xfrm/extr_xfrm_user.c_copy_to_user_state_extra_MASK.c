
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_usersa_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ dev; } ;
struct TYPE_3__ {int smark; scalar_t__ extra_flags; } ;
struct xfrm_state {scalar_t__ security; scalar_t__ if_id; TYPE_2__ xso; int replay; int * replay_esn; TYPE_1__ props; int mark; scalar_t__ tfcpad; int * encap; int * calg; int * ealg; int * aalg; int * aead; scalar_t__ lastused; int * coaddr; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct sk_buff*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (struct xfrm_state*,struct xfrm_usersa_info*) ;
 int FUNC_4 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,int,int *) ;
 int FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int ,scalar_t__,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_13(struct xfrm_state *VAR_13,
        struct xfrm_usersa_info *VAR_14,
        struct sk_buff *VAR_15)
{
 int VAR_16 = 0;

 FUNC_3(VAR_13, VAR_14);

 if (VAR_13->props.extra_flags) {
  VAR_16 = FUNC_6(VAR_15, VAR_11,
      VAR_13->props.extra_flags);
  if (VAR_16)
   goto out;
 }

 if (VAR_13->coaddr) {
  VAR_16 = FUNC_5(VAR_15, VAR_4, sizeof(*VAR_13->coaddr), VAR_13->coaddr);
  if (VAR_16)
   goto out;
 }
 if (VAR_13->lastused) {
  VAR_16 = FUNC_7(VAR_15, VAR_7, VAR_13->lastused,
     VAR_8);
  if (VAR_16)
   goto out;
 }
 if (VAR_13->aead) {
  VAR_16 = FUNC_5(VAR_15, VAR_0, FUNC_0(VAR_13->aead), VAR_13->aead);
  if (VAR_16)
   goto out;
 }
 if (VAR_13->aalg) {
  VAR_16 = FUNC_2(VAR_13->aalg, VAR_15);
  if (!VAR_16)
   VAR_16 = FUNC_5(VAR_15, VAR_1,
          FUNC_8(VAR_13->aalg), VAR_13->aalg);
  if (VAR_16)
   goto out;
 }
 if (VAR_13->ealg) {
  VAR_16 = FUNC_5(VAR_15, VAR_3, FUNC_9(VAR_13->ealg), VAR_13->ealg);
  if (VAR_16)
   goto out;
 }
 if (VAR_13->calg) {
  VAR_16 = FUNC_5(VAR_15, VAR_2, sizeof(*(VAR_13->calg)), VAR_13->calg);
  if (VAR_16)
   goto out;
 }
 if (VAR_13->encap) {
  VAR_16 = FUNC_5(VAR_15, VAR_5, sizeof(*VAR_13->encap), VAR_13->encap);
  if (VAR_16)
   goto out;
 }
 if (VAR_13->tfcpad) {
  VAR_16 = FUNC_6(VAR_15, VAR_12, VAR_13->tfcpad);
  if (VAR_16)
   goto out;
 }
 VAR_16 = FUNC_10(VAR_15, &VAR_13->mark);
 if (VAR_16)
  goto out;

 VAR_16 = FUNC_12(VAR_15, &VAR_13->props.smark);
 if (VAR_16)
  goto out;

 if (VAR_13->replay_esn)
  VAR_16 = FUNC_5(VAR_15, VAR_9,
         FUNC_11(VAR_13->replay_esn),
         VAR_13->replay_esn);
 else
  VAR_16 = FUNC_5(VAR_15, VAR_10, sizeof(VAR_13->replay),
         &VAR_13->replay);
 if (VAR_16)
  goto out;
 if(VAR_13->xso.dev)
  VAR_16 = FUNC_4(&VAR_13->xso, VAR_15);
 if (VAR_16)
  goto out;
 if (VAR_13->if_id) {
  VAR_16 = FUNC_6(VAR_15, VAR_6, VAR_13->if_id);
  if (VAR_16)
   goto out;
 }
 if (VAR_13->security)
  VAR_16 = FUNC_1(VAR_13->security, VAR_15);
out:
 return VAR_16;
}
