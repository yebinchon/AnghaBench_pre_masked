
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int daddr; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct xfrm_state {void* coaddr; TYPE_1__ id; TYPE_3__* type; TYPE_2__ props; } ;
struct dst_entry {struct xfrm_state* xfrm; } ;
struct TYPE_6__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dst_entry* FUNC_0 (struct dst_entry const*) ;

__attribute__((used)) static const void *FUNC_1(const struct dst_entry *VAR_3,
     const void *VAR_4)
{
 while (VAR_3->xfrm) {
  const struct xfrm_state *VAR_5 = VAR_3->xfrm;

  VAR_3 = FUNC_0(VAR_3);

  if (VAR_5->props.mode == VAR_0)
   continue;
  if (VAR_5->type->flags & VAR_2)
   VAR_4 = VAR_5->coaddr;
  else if (!(VAR_5->type->flags & VAR_1))
   VAR_4 = &VAR_5->id.daddr;
 }
 return VAR_4;
}
