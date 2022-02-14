
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_request_info {int granted; } ;
struct tomoyo_domain_info {size_t profile; int group; int domainname; int list; int acl_info_list; TYPE_1__* ns; } ;
typedef int e ;
struct TYPE_2__ {int * profile_ptr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int,int ) ;
 TYPE_1__* FUNC_7 (char const*) ;
 struct tomoyo_domain_info* FUNC_8 (struct tomoyo_domain_info*,int) ;
 int FUNC_9 (char const*) ;
 struct tomoyo_domain_info* FUNC_10 () ;
 int VAR_4 ;
 struct tomoyo_domain_info* FUNC_11 (char const*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (struct tomoyo_request_info*,struct tomoyo_domain_info*,int ) ;
 scalar_t__ FUNC_14 (char const*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct tomoyo_request_info*,char*,int) ;

struct tomoyo_domain_info *FUNC_18(const char *VAR_7,
      const bool VAR_8)
{
 struct tomoyo_domain_info VAR_9 = { };
 struct tomoyo_domain_info *VAR_10 = FUNC_11(VAR_7);
 bool VAR_11 = 0;

 if (VAR_10) {
  if (VAR_8) {






   if (VAR_5 &&
       !VAR_10->ns->profile_ptr[VAR_10->profile])
    return ((void*)0);
  }
  return VAR_10;
 }


 if (FUNC_5(VAR_7) >= VAR_0 - 10 ||
     !FUNC_9(VAR_7))
  return ((void*)0);





 if (VAR_8 && FUNC_14(VAR_7))
  return ((void*)0);
 VAR_9.ns = FUNC_7(VAR_7);
 if (!VAR_9.ns)
  return ((void*)0);





 if (VAR_8) {
  const struct tomoyo_domain_info *VAR_12 = FUNC_10();

  VAR_9.profile = VAR_12->profile;
  FUNC_2(VAR_9.group, VAR_12->group, sizeof(VAR_9.group));
 }
 VAR_9.domainname = FUNC_12(VAR_7);
 if (!VAR_9.domainname)
  return ((void*)0);
 if (FUNC_3(&VAR_6))
  goto out;
 VAR_10 = FUNC_11(VAR_7);
 if (!VAR_10) {
  VAR_10 = FUNC_8(&VAR_9, sizeof(VAR_9));
  if (VAR_10) {
   FUNC_0(&VAR_10->acl_info_list);
   FUNC_1(&VAR_10->list, &VAR_4);
   VAR_11 = 1;
  }
 }
 FUNC_4(&VAR_6);
out:
 FUNC_15(VAR_9.domainname);
 if (VAR_10 && VAR_8) {
  if (VAR_11) {
   struct tomoyo_request_info VAR_13;
   int VAR_14;

   FUNC_13(&VAR_13, VAR_10,
       VAR_1);
   VAR_13.granted = 0;
   FUNC_17(&VAR_13, "use_profile %u\n",
      VAR_10->profile);
   for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
    if (FUNC_6(VAR_14, VAR_10->group))
     FUNC_17(&VAR_13, "use_group %u\n",
        VAR_14);
   FUNC_16(VAR_3);
  }
 }
 return VAR_10;
}
