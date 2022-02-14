
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct linux_binprm {int dummy; } ;
struct TYPE_7__ {int profiles; } ;
struct TYPE_5__ {char** table; } ;
struct TYPE_6__ {TYPE_1__ trans; } ;
struct aa_profile {struct aa_ns* ns; int label; TYPE_3__ base; TYPE_2__ file; } ;
struct TYPE_8__ {int profiles; } ;
struct aa_ns {TYPE_4__ base; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct aa_label*) ;
 struct aa_label* FUNC_1 (int *) ;
 struct aa_label* FUNC_2 (struct aa_label*,char const*,int ,int,int) ;
 int FUNC_3 (struct aa_label*) ;
 struct aa_label* FUNC_4 (struct linux_binprm const*,struct aa_ns*,int *,char const*,char const**) ;
 int * FUNC_5 (struct aa_ns*) ;
 struct aa_label* FUNC_6 (struct aa_profile*,int,char const**) ;

__attribute__((used)) static struct aa_label *FUNC_7(struct aa_profile *VAR_6,
       const struct linux_binprm *VAR_7,
       const char *VAR_8, u32 VAR_9,
       const char **VAR_10,
       const char **VAR_11)
{
 struct aa_label *VAR_12 = ((void*)0);
 struct aa_ns *VAR_13 = VAR_6->ns;
 u32 VAR_14 = VAR_9 & VAR_3;
 const char *VAR_15 = ((void*)0);

 switch (VAR_14) {
 case 129:

  *VAR_10 = ((void*)0);
  break;
 case 128:

  VAR_15 = VAR_6->file.trans.table[VAR_9 & VAR_1];
  if (*VAR_15 != '&') {

   VAR_12 = FUNC_6(VAR_6, VAR_9, VAR_10);
   VAR_15 = ((void*)0);
   break;
  }

 case 130:
  if (VAR_9 & VAR_0)

   VAR_12 = FUNC_4(VAR_7, VAR_13, &VAR_6->base.profiles,
       VAR_8, VAR_11);
  else

   VAR_12 = FUNC_4(VAR_7, VAR_13, &VAR_13->base.profiles,
       VAR_8, VAR_11);
  *VAR_10 = VAR_8;
  break;
 }

 if (!VAR_12) {
  if (VAR_9 & VAR_2) {



   *VAR_11 = "ix fallback";

   VAR_12 = FUNC_1(&VAR_6->label);
  } else if (VAR_9 & VAR_4) {
   VAR_12 = FUNC_1(FUNC_5(VAR_6->ns));
   *VAR_11 = "ux fallback";
  }
 }

 if (VAR_12 && VAR_15) {

  struct aa_label *VAR_16 = VAR_12;

  VAR_12 = FUNC_2(VAR_16, VAR_15, VAR_5, 1, 0);
  if (FUNC_0(VAR_12))
   VAR_12 = ((void*)0);
  FUNC_3(VAR_16);
 }


 return VAR_12;
}
