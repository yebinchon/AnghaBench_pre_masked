
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_2__ {unsigned int* start; int dfa; } ;
struct aa_profile {int label; TYPE_1__ policy; int disconnected; } ;
struct aa_perms {int allow; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aa_label* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct aa_profile*,size_t) ;
 unsigned int FUNC_3 (int ,unsigned int,char const*) ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 struct aa_label* FUNC_5 (int *) ;
 int FUNC_6 (struct path const*,int ,char*,char const**,char const**,int ) ;
 int FUNC_7 (struct aa_profile*,int ,char const*,char const*,int *,char const*,int ,int *,int,struct aa_perms*,char const*,int) ;
 struct aa_perms FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (struct aa_profile*,struct path const*) ;
 scalar_t__ FUNC_10 (struct aa_profile*) ;

__attribute__((used)) static struct aa_label *FUNC_11(struct aa_profile *VAR_4,
     const struct path *VAR_5,
     char *VAR_6,
     const struct path *VAR_7,
     char *VAR_8)
{
 const char *VAR_9, *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 const char *VAR_12 = ((void*)0);
 struct aa_perms VAR_13 = { };
 unsigned int VAR_14;
 int VAR_15;

 FUNC_0(!VAR_4);
 FUNC_0(!VAR_5);
 FUNC_0(!VAR_7);

 if (FUNC_10(VAR_4) ||
     !FUNC_2(VAR_4, VAR_0))
  return FUNC_5(&VAR_4->label);

 VAR_15 = FUNC_6(VAR_7, FUNC_9(VAR_4, VAR_7),
        VAR_8, &VAR_9, &VAR_11,
        VAR_4->disconnected);
 if (VAR_15)
  goto audit;
 VAR_15 = FUNC_6(VAR_5, FUNC_9(VAR_4, VAR_5),
        VAR_6, &VAR_10, &VAR_11,
        VAR_4->disconnected);
 if (VAR_15)
  goto audit;

 VAR_15 = -VAR_2;
 VAR_14 = FUNC_3(VAR_4->policy.dfa,
        VAR_4->policy.start[VAR_0],
        VAR_10);
 VAR_14 = FUNC_4(VAR_4->policy.dfa, VAR_14);
 VAR_14 = FUNC_3(VAR_4->policy.dfa, VAR_14, VAR_9);
 VAR_13 = FUNC_8(VAR_4->policy.dfa, VAR_14);

 if (VAR_1 & VAR_13.allow)
  VAR_15 = 0;

audit:
 VAR_15 = FUNC_7(VAR_4, VAR_3, VAR_10, VAR_9,
       ((void*)0), VAR_12, 0, ((void*)0), VAR_1,
       &VAR_13, VAR_11, VAR_15);
 if (VAR_15)
  return FUNC_1(VAR_15);

 return FUNC_5(&VAR_4->label);
}
