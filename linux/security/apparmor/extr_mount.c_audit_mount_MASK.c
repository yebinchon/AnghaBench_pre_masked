
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aa_profile {int dummy; } ;
struct aa_perms {int audit; int allow; int kill; int quiet; } ;
struct TYPE_3__ {char const* src_name; char const* type; char const* trans; unsigned long flags; void const* data; } ;
struct TYPE_4__ {char const* name; char const* info; int error; TYPE_1__ mnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct aa_profile*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,char const*) ;
 int VAR_6 ;
 int FUNC_2 (int,struct aa_profile*,int *,int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct aa_profile *VAR_9, const char *VAR_10,
         const char *VAR_11, const char *VAR_12,
         const char *VAR_13, const char *VAR_14,
         unsigned long VAR_15, const void *VAR_16, u32 VAR_17,
         struct aa_perms *VAR_18, const char *VAR_19, int VAR_20)
{
 int VAR_21 = VAR_3;
 FUNC_1(VAR_8, VAR_6, VAR_10);

 if (FUNC_4(!VAR_20)) {
  u32 VAR_22 = VAR_18->audit;

  if (FUNC_5(FUNC_0(VAR_9) == VAR_1))
   VAR_22 = 0xffff;


  VAR_17 &= VAR_22;

  if (FUNC_4(!VAR_17))
   return 0;
  VAR_21 = VAR_2;
 } else {

  VAR_17 = VAR_17 & ~VAR_18->allow;

  if (VAR_17 & VAR_18->kill)
   VAR_21 = VAR_4;


  if ((VAR_17 & VAR_18->quiet) &&
      FUNC_0(VAR_9) != VAR_5 &&
      FUNC_0(VAR_9) != VAR_1)
   VAR_17 &= ~VAR_18->quiet;

  if (!VAR_17)
   return VAR_20;
 }

 FUNC_3(&VAR_8)->name = VAR_11;
 FUNC_3(&VAR_8)->mnt.src_name = VAR_12;
 FUNC_3(&VAR_8)->mnt.type = VAR_13;
 FUNC_3(&VAR_8)->mnt.trans = VAR_14;
 FUNC_3(&VAR_8)->mnt.flags = VAR_15;
 if (VAR_16 && (VAR_18->audit & VAR_0))
  FUNC_3(&VAR_8)->mnt.data = VAR_16;
 FUNC_3(&VAR_8)->info = VAR_19;
 FUNC_3(&VAR_8)->error = VAR_20;

 return FUNC_2(VAR_21, VAR_9, &VAR_8, VAR_7);
}
