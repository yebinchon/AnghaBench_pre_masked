
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_7__ {scalar_t__ expiry_time; scalar_t__ flags; } ;
struct TYPE_5__ {int cr_principal; struct gss_api_mech* cr_gss_mech; TYPE_2__* cr_group_info; void* cr_gid; int cr_uid; } ;
struct rsc {TYPE_4__ h; TYPE_1__ cred; int mechctx; int handle; } ;
struct gss_api_mech {int dummy; } ;
struct cache_detail {int dummy; } ;
typedef int rsci ;
typedef void* kgid_t ;
struct TYPE_6__ {void** gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,struct cache_detail*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (char**) ;
 int FUNC_4 (char**,int*) ;
 int FUNC_5 (void*) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,int,struct gss_api_mech*,int *,int *,int ) ;
 struct gss_api_mech* FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 void* FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct rsc*,int ,int) ;
 int FUNC_14 (char**,char*,int) ;
 int FUNC_15 (struct rsc*) ;
 struct rsc* FUNC_16 (struct cache_detail*,struct rsc*) ;
 struct rsc* FUNC_17 (struct cache_detail*,struct rsc*,struct rsc*) ;
 int FUNC_18 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_19(struct cache_detail *VAR_7,
       char *VAR_8, int VAR_9)
{

 char *VAR_10 = VAR_8;
 int VAR_11;
 int VAR_12, VAR_13;
 struct rsc VAR_14, *VAR_15 = ((void*)0);
 time_t VAR_16;
 int VAR_17 = -VAR_1;
 struct gss_api_mech *VAR_18 = ((void*)0);

 FUNC_13(&VAR_14, 0, sizeof(VAR_14));

 VAR_12 = FUNC_14(&VAR_8, VAR_10, VAR_9);
 if (VAR_12 < 0) goto out;
 VAR_17 = -VAR_3;
 if (FUNC_2(&VAR_14.handle, VAR_10, VAR_12))
  goto out;

 VAR_14.h.flags = 0;

 VAR_16 = FUNC_3(&VAR_8);
 VAR_17 = -VAR_1;
 if (VAR_16 == 0)
  goto out;

 VAR_15 = FUNC_16(VAR_7, &VAR_14);
 if (!VAR_15)
  goto out;


 VAR_13 = FUNC_4(&VAR_8, &VAR_11);
 if (VAR_13 == -VAR_1)
  goto out;
 if (VAR_13 == -VAR_2)
  FUNC_18(VAR_0, &VAR_14.h.flags);
 else {
  int VAR_19, VAR_20;
  VAR_14.cred.cr_uid = FUNC_12(FUNC_1(), VAR_11);


  if (FUNC_4(&VAR_8, &VAR_11))
   goto out;
  VAR_14.cred.cr_gid = FUNC_11(FUNC_1(), VAR_11);


  if (FUNC_4(&VAR_8, &VAR_19))
   goto out;
  if (VAR_19 < 0 || VAR_19 > VAR_6)
   goto out;
  VAR_17 = -VAR_3;
  VAR_14.cred.cr_group_info = FUNC_6(VAR_19);
  if (VAR_14.cred.cr_group_info == ((void*)0))
   goto out;


  VAR_17 = -VAR_1;
  for (VAR_20=0; VAR_20<VAR_19; VAR_20++) {
   kgid_t VAR_21;
   if (FUNC_4(&VAR_8, &VAR_11))
    goto out;
   VAR_21 = FUNC_11(FUNC_1(), VAR_11);
   if (!FUNC_5(VAR_21))
    goto out;
   VAR_14.cred.cr_group_info->gid[VAR_20] = VAR_21;
  }
  FUNC_7(VAR_14.cred.cr_group_info);


  VAR_12 = FUNC_14(&VAR_8, VAR_10, VAR_9);
  if (VAR_12 < 0)
   goto out;
  VAR_18 = VAR_14.cred.cr_gss_mech = FUNC_9(VAR_10);
  VAR_17 = -VAR_4;
  if (!VAR_18)
   goto out;

  VAR_17 = -VAR_1;

  VAR_12 = FUNC_14(&VAR_8, VAR_10, VAR_9);
  if (VAR_12 < 0)
   goto out;
  VAR_17 = FUNC_8(VAR_10, VAR_12, VAR_18, &VAR_14.mechctx,
      ((void*)0), VAR_5);
  if (VAR_17)
   goto out;


  VAR_12 = FUNC_14(&VAR_8, VAR_10, VAR_9);
  if (VAR_12 > 0) {
   VAR_14.cred.cr_principal = FUNC_10(VAR_10, VAR_5);
   if (!VAR_14.cred.cr_principal) {
    VAR_17 = -VAR_3;
    goto out;
   }
  }

 }
 VAR_14.h.expiry_time = VAR_16;
 VAR_15 = FUNC_17(VAR_7, &VAR_14, VAR_15);
 VAR_17 = 0;
out:
 FUNC_15(&VAR_14);
 if (VAR_15)
  FUNC_0(&VAR_15->h, VAR_7);
 else
  VAR_17 = -VAR_3;
 return VAR_17;
}
