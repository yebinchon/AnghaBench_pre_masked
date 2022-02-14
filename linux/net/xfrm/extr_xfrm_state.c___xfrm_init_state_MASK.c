
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xfrm_mode {int flags; } ;
struct TYPE_10__ {int family; int mode; int flags; } ;
struct TYPE_9__ {int proto; } ;
struct TYPE_8__ {int family; } ;
struct xfrm_state {struct xfrm_mode outer_mode; TYPE_4__ props; TYPE_6__* type; TYPE_3__ id; int type_offload; struct xfrm_mode inner_mode_iaf; struct xfrm_mode inner_mode; TYPE_2__ sel; } ;
struct TYPE_12__ {int (* init_state ) (struct xfrm_state*) ;} ;
struct TYPE_7__ {scalar_t__ sysctl_ip_no_pmtu_disc; } ;
struct TYPE_11__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xfrm_state*) ;
 struct xfrm_mode* FUNC_1 (int ,int) ;
 TYPE_6__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct xfrm_state*) ;
 TYPE_5__* FUNC_5 (struct xfrm_state*) ;

int FUNC_6(struct xfrm_state *VAR_6, bool VAR_7, bool VAR_8)
{
 const struct xfrm_mode *VAR_9;
 const struct xfrm_mode *VAR_10;
 int VAR_11 = VAR_6->props.family;
 int VAR_12;

 if (VAR_11 == VAR_0 &&
     FUNC_5(VAR_6)->ipv4.sysctl_ip_no_pmtu_disc)
  VAR_6->props.flags |= VAR_5;

 VAR_12 = -VAR_3;

 if (VAR_6->sel.family != VAR_2) {
  VAR_9 = FUNC_1(VAR_6->props.mode, VAR_6->sel.family);
  if (VAR_9 == ((void*)0))
   goto error;

  if (!(VAR_9->flags & VAR_4) &&
      VAR_11 != VAR_6->sel.family)
   goto error;

  VAR_6->inner_mode = *VAR_9;
 } else {
  const struct xfrm_mode *VAR_13;
  int VAR_14 = VAR_0;

  VAR_9 = FUNC_1(VAR_6->props.mode, VAR_6->props.family);
  if (VAR_9 == ((void*)0))
   goto error;

  if (!(VAR_9->flags & VAR_4))
   goto error;

  VAR_6->inner_mode = *VAR_9;

  if (VAR_6->props.family == VAR_0)
   VAR_14 = VAR_1;

  VAR_13 = FUNC_1(VAR_6->props.mode, VAR_14);
  if (VAR_13) {
   if (VAR_13->flags & VAR_4)
    VAR_6->inner_mode_iaf = *VAR_13;
  }
 }

 VAR_6->type = FUNC_2(VAR_6->id.proto, VAR_11);
 if (VAR_6->type == ((void*)0))
  goto error;

 VAR_6->type_offload = FUNC_3(VAR_6->id.proto, VAR_11, VAR_8);

 VAR_12 = VAR_6->type->init_state(VAR_6);
 if (VAR_12)
  goto error;

 VAR_10 = FUNC_1(VAR_6->props.mode, VAR_11);
 if (!VAR_10) {
  VAR_12 = -VAR_3;
  goto error;
 }

 VAR_6->outer_mode = *VAR_10;
 if (VAR_7) {
  VAR_12 = FUNC_4(VAR_6);
  if (VAR_12)
   goto error;
 }

error:
 return VAR_12;
}
