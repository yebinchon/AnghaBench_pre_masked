
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct aa_profile {int dummy; } ;
struct aa_perms {int audit; int allow; int kill; int quiet; } ;
struct aa_label {int dummy; } ;
typedef int kuid_t ;
struct TYPE_8__ {char const* target; int ouid; } ;
struct TYPE_11__ {int request; char const* name; char const* info; int error; int denied; TYPE_1__ fs; struct aa_label* peer; } ;
struct TYPE_9__ {int * tsk; } ;
struct TYPE_10__ {TYPE_2__ u; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct aa_profile*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_3__,int ,char const*) ;
 int VAR_5 ;
 int FUNC_3 (int,struct aa_profile*,TYPE_3__*,int ) ;
 TYPE_4__* FUNC_4 (TYPE_3__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_3__ VAR_7 ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct aa_profile *VAR_8, struct aa_perms *VAR_9,
    const char *VAR_10, u32 VAR_11, const char *VAR_12,
    const char *VAR_13, struct aa_label *VAR_14,
    kuid_t VAR_15, const char *VAR_16, int VAR_17)
{
 int VAR_18 = VAR_2;
 FUNC_2(VAR_7, VAR_5, VAR_10);

 VAR_7.u.tsk = ((void*)0);
 FUNC_4(&VAR_7)->request = VAR_11;
 FUNC_4(&VAR_7)->name = VAR_12;
 FUNC_4(&VAR_7)->fs.target = VAR_13;
 FUNC_4(&VAR_7)->peer = VAR_14;
 FUNC_4(&VAR_7)->fs.ouid = VAR_15;
 FUNC_4(&VAR_7)->info = VAR_16;
 FUNC_4(&VAR_7)->error = VAR_17;
 VAR_7.u.tsk = ((void*)0);

 if (FUNC_5(!FUNC_4(&VAR_7)->error)) {
  u32 VAR_19 = VAR_9->audit;

  if (FUNC_6(FUNC_1(VAR_8) == VAR_0))
   VAR_19 = 0xffff;


  FUNC_4(&VAR_7)->request &= VAR_19;

  if (FUNC_5(!FUNC_4(&VAR_7)->request))
   return 0;
  VAR_18 = VAR_1;
 } else {

  FUNC_4(&VAR_7)->request = FUNC_4(&VAR_7)->request & ~VAR_9->allow;
  FUNC_0(!FUNC_4(&VAR_7)->request);

  if (FUNC_4(&VAR_7)->request & VAR_9->kill)
   VAR_18 = VAR_3;


  if ((FUNC_4(&VAR_7)->request & VAR_9->quiet) &&
      FUNC_1(VAR_8) != VAR_4 &&
      FUNC_1(VAR_8) != VAR_0)
   FUNC_4(&VAR_7)->request &= ~VAR_9->quiet;

  if (!FUNC_4(&VAR_7)->request)
   return FUNC_4(&VAR_7)->error;
 }

 FUNC_4(&VAR_7)->denied = FUNC_4(&VAR_7)->request & ~VAR_9->allow;
 return FUNC_3(VAR_18, VAR_8, &VAR_7, VAR_6);
}
