
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aa_label {int dummy; } ;
struct TYPE_2__ {int * hname; } ;
struct aa_profile {struct aa_label label; TYPE_1__ base; int parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct aa_profile*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct aa_label* FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct aa_profile*) ;
 int FUNC_3 (struct aa_profile*,int *,int ,int ,char const*,int *,struct aa_label*,int ,char const*,int) ;
 struct aa_profile* FUNC_4 (struct aa_profile*,char const*) ;
 struct aa_profile* FUNC_5 (struct aa_profile*) ;
 struct aa_profile* FUNC_6 (int *) ;
 struct aa_profile* FUNC_7 (struct aa_profile*,int,char const*,int ) ;
 int FUNC_8 (struct aa_profile*) ;
 int VAR_7 ;

__attribute__((used)) static struct aa_label *FUNC_9(struct aa_profile *VAR_8,
      const char *VAR_9, bool VAR_10)
{
 struct aa_profile *VAR_11, *VAR_12 = ((void*)0);
 const char *VAR_13 = ((void*)0);
 int VAR_14 = 0;

 if (VAR_10 && FUNC_2(VAR_8)) {
  VAR_11 = FUNC_6(&VAR_8->parent);
 } else if (!VAR_10 && !FUNC_2(VAR_8)) {
  VAR_11 = FUNC_5(VAR_8);
 } else {
  VAR_13 = "conflicting target types";
  VAR_14 = -VAR_3;
  goto audit;
 }

 VAR_12 = FUNC_4(VAR_11, VAR_9);
 if (!VAR_12) {
  VAR_14 = -VAR_1;
  if (FUNC_0(VAR_8)) {
   VAR_12 = FUNC_7(VAR_8, 1, VAR_9,
        VAR_4);
   if (!VAR_12) {
    VAR_13 = "failed null profile create";
    VAR_14 = -VAR_2;
   }
  }
 }
 FUNC_8(VAR_11);

audit:
 FUNC_3(VAR_8, &VAR_7, VAR_6, VAR_0,
        VAR_9, VAR_12 ? VAR_12->base.hname : ((void*)0),
        VAR_12 ? &VAR_12->label : ((void*)0), VAR_5, VAR_13,
        VAR_14);
 if (!VAR_12 || (VAR_14 && VAR_14 != -VAR_1))
  return FUNC_1(VAR_14);



 return &VAR_12->label;
}
