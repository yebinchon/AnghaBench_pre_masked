
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {char const* hname; int profiles; } ;
struct TYPE_9__ {void* dfa; } ;
struct TYPE_8__ {void* dfa; } ;
struct TYPE_7__ {int flags; } ;
struct aa_profile {TYPE_5__* ns; TYPE_4__ base; TYPE_3__ policy; TYPE_2__ file; int parent; int path_flags; TYPE_1__ label; int mode; } ;
typedef int gfp_t ;
struct TYPE_11__ {int lock; int level; int uniq_null; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct aa_profile*) ;
 struct aa_profile* FUNC_2 (int *,char const*) ;
 struct aa_profile* FUNC_3 (char*,int *,int ) ;
 struct aa_profile* FUNC_4 (struct aa_profile*,char const*) ;
 int FUNC_5 (struct aa_profile*) ;
 void* FUNC_6 (int ) ;
 TYPE_5__* FUNC_7 (TYPE_5__*) ;
 struct aa_profile* FUNC_8 (struct aa_profile*) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int VAR_3 ;
 int FUNC_15 (int ,struct aa_profile*) ;
 int FUNC_16 (char*,char*,char const*,...) ;
 scalar_t__ FUNC_17 (char const*) ;

struct aa_profile *FUNC_18(struct aa_profile *VAR_4, bool VAR_5,
           const char *VAR_6, gfp_t VAR_7)
{
 struct aa_profile *VAR_8, *VAR_9;
 const char *VAR_10;
 char *VAR_11 = ((void*)0);

 FUNC_0(!VAR_4);

 if (VAR_6) {
  VAR_11 = FUNC_12(FUNC_17(VAR_4->base.hname) + 8 + FUNC_17(VAR_6),
          VAR_7);
  if (VAR_11) {
   FUNC_16(VAR_11, "%s//null-%s", VAR_4->base.hname, VAR_6);
   goto name;
  }

 }

 VAR_11 = FUNC_12(FUNC_17(VAR_4->base.hname) + 2 + 7 + 8, VAR_7);
 if (!VAR_11)
  return ((void*)0);
 FUNC_16(VAR_11, "%s//null-%x", VAR_4->base.hname,
  FUNC_9(&VAR_4->ns->uniq_null));

name:

 VAR_10 = FUNC_10(VAR_11);
 VAR_9 = FUNC_4(VAR_4, VAR_10);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_3(VAR_11, ((void*)0), VAR_7);
 if (!VAR_9)
  goto fail;

 VAR_9->mode = VAR_0;
 VAR_9->label.flags |= VAR_2;
 if (VAR_5)
  VAR_9->label.flags |= VAR_1;
 VAR_9->path_flags = VAR_4->path_flags;


 FUNC_15(VAR_9->parent, FUNC_8(VAR_4));
 VAR_9->ns = FUNC_7(VAR_4->ns);
 VAR_9->file.dfa = FUNC_6(VAR_3);
 VAR_9->policy.dfa = FUNC_6(VAR_3);

 FUNC_13(&VAR_9->ns->lock, VAR_9->ns->level);
 VAR_8 = FUNC_2(&VAR_4->base.profiles, VAR_10);
 if (VAR_8) {
  FUNC_5(VAR_9);
  VAR_9 = FUNC_8(VAR_8);
 } else {
  FUNC_1(&VAR_4->base.profiles, VAR_9);
 }
 FUNC_14(&VAR_9->ns->lock);


out:
 FUNC_11(VAR_11);

 return VAR_9;

fail:
 FUNC_11(VAR_11);
 FUNC_5(VAR_9);
 return ((void*)0);
}
