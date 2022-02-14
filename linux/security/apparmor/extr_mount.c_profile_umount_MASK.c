
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_2__ {int dfa; int * start; } ;
struct aa_profile {TYPE_1__ policy; int disconnected; } ;
struct aa_perms {int allow; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct aa_profile*,size_t) ;
 unsigned int FUNC_2 (int ,int ,char const*) ;
 int FUNC_3 (struct path*,int ,char*,char const**,char const**,int ) ;
 int FUNC_4 (struct aa_profile*,int ,char const*,int *,int *,int *,int ,int *,int,struct aa_perms*,char const*,int) ;
 struct aa_perms FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct aa_profile*,struct path*) ;

__attribute__((used)) static int FUNC_7(struct aa_profile *VAR_4, struct path *VAR_5,
     char *VAR_6)
{
 struct aa_perms VAR_7 = { };
 const char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 unsigned int VAR_10;
 int VAR_11;

 FUNC_0(!VAR_4);
 FUNC_0(!VAR_5);

 if (!FUNC_1(VAR_4, VAR_0))
  return 0;

 VAR_11 = FUNC_3(VAR_5, FUNC_6(VAR_4, VAR_5), VAR_6, &VAR_8,
        &VAR_9, VAR_4->disconnected);
 if (VAR_11)
  goto audit;

 VAR_10 = FUNC_2(VAR_4->policy.dfa,
        VAR_4->policy.start[VAR_0],
        VAR_8);
 VAR_7 = FUNC_5(VAR_4->policy.dfa, VAR_10);
 if (VAR_1 & ~VAR_7.allow)
  VAR_11 = -VAR_2;

audit:
 return FUNC_4(VAR_4, VAR_3, VAR_8, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0),
      VAR_1, &VAR_7, VAR_9, VAR_11);
}
