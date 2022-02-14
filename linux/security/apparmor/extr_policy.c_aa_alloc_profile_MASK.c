
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aa_proxy {int dummy; } ;
struct TYPE_5__ {struct aa_profile** vec; int flags; int hname; struct aa_proxy* proxy; } ;
struct TYPE_4__ {int hname; } ;
struct aa_profile {TYPE_2__ label; TYPE_1__ base; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct aa_proxy* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct aa_profile*) ;
 int FUNC_2 (struct aa_proxy*) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,char const*,int ) ;
 struct aa_profile* FUNC_5 (int,int ) ;

struct aa_profile *FUNC_6(const char *VAR_1, struct aa_proxy *VAR_2,
        gfp_t VAR_3)
{
 struct aa_profile *VAR_4;


 VAR_4 = FUNC_5(sizeof(*VAR_4) + sizeof(struct aa_profile *) * 2,
     VAR_3);
 if (!VAR_4)
  return ((void*)0);

 if (!FUNC_4(&VAR_4->base, ((void*)0), VAR_1, VAR_3))
  goto fail;
 if (!FUNC_3(&VAR_4->label, 1, VAR_3))
  goto fail;


 if (!VAR_2) {
  VAR_2 = FUNC_0(&VAR_4->label, VAR_3);
  if (!VAR_2)
   goto fail;
 } else
  FUNC_2(VAR_2);
 VAR_4->label.proxy = VAR_2;

 VAR_4->label.hname = VAR_4->base.hname;
 VAR_4->label.flags |= VAR_0;
 VAR_4->label.vec[0] = VAR_4;


 return VAR_4;

fail:
 FUNC_1(VAR_4);

 return ((void*)0);
}
