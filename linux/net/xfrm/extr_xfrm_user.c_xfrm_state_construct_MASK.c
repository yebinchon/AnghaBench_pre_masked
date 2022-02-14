
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_usersa_info {int seq; } ;
struct TYPE_6__ {int state; int seq; } ;
struct TYPE_4__ {int smark; int calgo; int aalgo; void* extra_flags; } ;
struct xfrm_state {int replay_maxage; TYPE_3__ km; int replay_maxdiff; int preplay_esn; int replay_esn; void* if_id; TYPE_1__ props; int mark; int * coaddr; void* tfcpad; int * encap; int calg; int aalg; } ;
struct nlattr {int dummy; } ;
struct TYPE_5__ {int sysctl_aevent_etime; int sysctl_aevent_rseqth; } ;
struct net {TYPE_2__ xfrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct xfrm_state*,int,struct nlattr*) ;
 int FUNC_1 (struct xfrm_state*,struct nlattr*) ;
 int FUNC_2 (int *,int *,struct nlattr*) ;
 int FUNC_3 (int *,int *,struct nlattr*) ;
 int FUNC_4 (struct xfrm_state*,struct nlattr*) ;
 int FUNC_5 (int *,int *,int ,struct nlattr*) ;
 int FUNC_6 (struct xfrm_state*,struct xfrm_usersa_info*) ;
 void* FUNC_7 (int ,int,int ) ;
 int FUNC_8 (struct nlattr*) ;
 void* FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct xfrm_state*,int ) ;
 int FUNC_11 (int *,int *,struct nlattr*) ;
 int VAR_18 ;
 int FUNC_12 (struct net*,struct xfrm_state*,int ) ;
 int FUNC_13 (struct xfrm_state*) ;
 int FUNC_14 (struct nlattr**,int *) ;
 int FUNC_15 (struct nlattr**,int *) ;
 struct xfrm_state* FUNC_16 (struct net*) ;
 int FUNC_17 (struct xfrm_state*) ;
 int FUNC_18 (struct xfrm_state*,struct nlattr**,int ) ;

__attribute__((used)) static struct xfrm_state *FUNC_19(struct net *VAR_19,
            struct xfrm_usersa_info *VAR_20,
            struct nlattr **VAR_21,
            int *VAR_22)
{
 struct xfrm_state *VAR_23 = FUNC_16(VAR_19);
 int VAR_24 = -VAR_0;

 if (!VAR_23)
  goto error_no_put;

 FUNC_6(VAR_23, VAR_20);

 if (VAR_21[VAR_13])
  VAR_23->props.extra_flags = FUNC_9(VAR_21[VAR_13]);

 if ((VAR_24 = FUNC_1(VAR_23, VAR_21[VAR_3])))
  goto error;
 if ((VAR_24 = FUNC_3(&VAR_23->aalg, &VAR_23->props.aalgo,
         VAR_21[VAR_5])))
  goto error;
 if (!VAR_23->props.aalgo) {
  if ((VAR_24 = FUNC_2(&VAR_23->aalg, &VAR_23->props.aalgo,
           VAR_21[VAR_4])))
   goto error;
 }
 if ((VAR_24 = FUNC_4(VAR_23, VAR_21[VAR_7])))
  goto error;
 if ((VAR_24 = FUNC_5(&VAR_23->calg, &VAR_23->props.calgo,
       VAR_18,
       VAR_21[VAR_6])))
  goto error;

 if (VAR_21[VAR_9]) {
  VAR_23->encap = FUNC_7(FUNC_8(VAR_21[VAR_9]),
       sizeof(*VAR_23->encap), VAR_1);
  if (VAR_23->encap == ((void*)0))
   goto error;
 }

 if (VAR_21[VAR_15])
  VAR_23->tfcpad = FUNC_9(VAR_21[VAR_15]);

 if (VAR_21[VAR_8]) {
  VAR_23->coaddr = FUNC_7(FUNC_8(VAR_21[VAR_8]),
        sizeof(*VAR_23->coaddr), VAR_1);
  if (VAR_23->coaddr == ((void*)0))
   goto error;
 }

 FUNC_14(VAR_21, &VAR_23->mark);

 FUNC_15(VAR_21, &VAR_23->props.smark);

 if (VAR_21[VAR_10])
  VAR_23->if_id = FUNC_9(VAR_21[VAR_10]);

 VAR_24 = FUNC_0(VAR_23, 0, VAR_21[VAR_11]);
 if (VAR_24)
  goto error;

 if (VAR_21[VAR_14]) {
  VAR_24 = FUNC_10(VAR_23,
      FUNC_8(VAR_21[VAR_14]));
  if (VAR_24)
   goto error;
 }

 if ((VAR_24 = FUNC_11(&VAR_23->replay_esn, &VAR_23->preplay_esn,
            VAR_21[VAR_12])))
  goto error;

 VAR_23->km.seq = VAR_20->seq;
 VAR_23->replay_maxdiff = VAR_19->xfrm.sysctl_aevent_rseqth;

 VAR_23->replay_maxage = (VAR_19->xfrm.sysctl_aevent_etime*VAR_2)/VAR_16;

 if ((VAR_24 = FUNC_13(VAR_23)))
  goto error;


 FUNC_18(VAR_23, VAR_21, 0);


 if (VAR_21[VAR_11]) {
  VAR_24 = FUNC_12(VAR_19, VAR_23,
      FUNC_8(VAR_21[VAR_11]));
  if (VAR_24)
   goto error;
 }

 return VAR_23;

error:
 VAR_23->km.state = VAR_17;
 FUNC_17(VAR_23);
error_no_put:
 *VAR_22 = VAR_24;
 return ((void*)0);
}
