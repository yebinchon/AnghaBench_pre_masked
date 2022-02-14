
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_profile {int default_config; int * pref; int config; } ;
struct tomoyo_policy_namespace {struct tomoyo_profile** profile_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int const VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct tomoyo_profile*) ;
 struct tomoyo_profile* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct tomoyo_profile*) ;
 int VAR_10 ;

__attribute__((used)) static struct tomoyo_profile *FUNC_7
(struct tomoyo_policy_namespace *VAR_11, const unsigned int VAR_12)
{
 struct tomoyo_profile *VAR_13;
 struct tomoyo_profile *VAR_14;

 if (VAR_12 >= VAR_7)
  return ((void*)0);
 VAR_13 = VAR_11->profile_ptr[VAR_12];
 if (VAR_13)
  return VAR_13;
 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_2);
 if (FUNC_4(&VAR_10))
  goto out;
 VAR_13 = VAR_11->profile_ptr[VAR_12];
 if (!VAR_13 && FUNC_6(VAR_14)) {
  VAR_13 = VAR_14;
  VAR_13->default_config = VAR_3 |
   VAR_5 |
   VAR_6;
  FUNC_3(VAR_13->config, VAR_4,
         sizeof(VAR_13->config));
  VAR_13->pref[VAR_8] =
   VAR_1;
  VAR_13->pref[VAR_9] =
   VAR_0;
  FUNC_2();
  VAR_11->profile_ptr[VAR_12] = VAR_13;
  VAR_14 = ((void*)0);
 }
 FUNC_5(&VAR_10);
 out:
 FUNC_0(VAR_14);
 return VAR_13;
}
