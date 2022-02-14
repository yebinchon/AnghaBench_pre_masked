
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_2__ {int * start; int dfa; } ;
struct aa_profile {TYPE_1__ policy; int disconnected; } ;
struct aa_perms {int dummy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_3 ;
 int FUNC_2 (struct aa_profile*,size_t) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct path const*,int ,char*,char const**,char const**,int ) ;
 int FUNC_5 (struct aa_profile*,int ,char const*,char const*,char const*,int *,unsigned long,void*,int ,struct aa_perms*,char const*,int) ;
 int FUNC_6 (int ,int ,char const*,char const*,char const*,unsigned long,void*,int,struct aa_perms*) ;
 char** VAR_4 ;
 int FUNC_7 (struct aa_profile*,struct path const*) ;

__attribute__((used)) static int FUNC_8(struct aa_profile *VAR_5,
         const struct path *VAR_6, char *VAR_7,
         const char *VAR_8, const char *VAR_9,
         unsigned long VAR_10, void *VAR_11, bool VAR_12,
         const char *VAR_13)
{
 struct aa_perms VAR_14 = { };
 const char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 int VAR_17, VAR_18;

 FUNC_0(!VAR_5);
 FUNC_0(!VAR_6);
 FUNC_0(!VAR_7);

 if (!FUNC_2(VAR_5, VAR_0))
  return 0;

 VAR_18 = FUNC_4(VAR_6, FUNC_7(VAR_5, VAR_6), VAR_7,
        &VAR_15, &VAR_16, VAR_5->disconnected);
 if (VAR_18)
  goto audit;
 if (FUNC_1(VAR_8)) {
  VAR_18 = FUNC_3(VAR_8);
  VAR_8 = ((void*)0);
  VAR_16 = VAR_13;
  goto audit;
 }

 VAR_18 = -VAR_2;
 VAR_17 = FUNC_6(VAR_5->policy.dfa,
      VAR_5->policy.start[VAR_0],
      VAR_15, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, &VAR_14);
 if (VAR_17) {
  VAR_16 = VAR_4[VAR_17];
  goto audit;
 }
 VAR_18 = 0;

audit:
 return FUNC_5(VAR_5, VAR_3, VAR_15, VAR_8, VAR_9, ((void*)0),
      VAR_10, VAR_11, VAR_1, &VAR_14, VAR_16, VAR_18);
}
