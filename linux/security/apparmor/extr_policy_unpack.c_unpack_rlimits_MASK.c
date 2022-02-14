
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* limits; int mask; } ;
struct aa_profile {TYPE_2__ rlimits; } ;
struct aa_ext {void* pos; } ;
struct TYPE_3__ {int rlim_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct aa_ext*,int *) ;
 scalar_t__ FUNC_2 (struct aa_ext*,int ,char*) ;
 int FUNC_3 (struct aa_ext*,int *,int *) ;
 int FUNC_4 (struct aa_ext*,int *,int *) ;

__attribute__((used)) static bool FUNC_5(struct aa_ext *VAR_4, struct aa_profile *VAR_5)
{
 void *VAR_6 = VAR_4->pos;


 if (FUNC_2(VAR_4, VAR_1, "rlimits")) {
  int VAR_7, VAR_8;
  u32 VAR_9 = 0;
  if (!FUNC_3(VAR_4, &VAR_9, ((void*)0)))
   goto fail;
  VAR_5->rlimits.mask = VAR_9;

  VAR_8 = FUNC_1(VAR_4, ((void*)0));
  if (VAR_8 > VAR_3)
   goto fail;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   u64 VAR_10 = 0;
   int VAR_11 = FUNC_0(VAR_7);
   if (!FUNC_4(VAR_4, &VAR_10, ((void*)0)))
    goto fail;
   VAR_5->rlimits.limits[VAR_11].rlim_max = VAR_10;
  }
  if (!FUNC_2(VAR_4, VAR_0, ((void*)0)))
   goto fail;
  if (!FUNC_2(VAR_4, VAR_2, ((void*)0)))
   goto fail;
 }
 return 1;

fail:
 VAR_4->pos = VAR_6;
 return 0;
}
