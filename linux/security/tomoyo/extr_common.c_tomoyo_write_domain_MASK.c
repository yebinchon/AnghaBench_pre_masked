
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tomoyo_policy_namespace {scalar_t__* profile_ptr; } ;
struct TYPE_2__ {int is_delete; struct tomoyo_domain_info* domain; } ;
struct tomoyo_io_buffer {char* write_buf; TYPE_1__ w; } ;
struct tomoyo_domain_info {int* flags; int acl_info_list; int group; scalar_t__ profile; struct tomoyo_policy_namespace* ns; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,char*,unsigned int*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,char const*,scalar_t__) ;
 struct tomoyo_domain_info* FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 char** VAR_4 ;
 struct tomoyo_domain_info* FUNC_7 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (char**,char*) ;
 int FUNC_9 (struct tomoyo_policy_namespace*,int *,char*,int const) ;

__attribute__((used)) static int FUNC_10(struct tomoyo_io_buffer *VAR_6)
{
 char *VAR_7 = VAR_6->write_buf;
 struct tomoyo_policy_namespace *VAR_8;
 struct tomoyo_domain_info *VAR_9 = VAR_6->w.domain;
 const bool VAR_10 = VAR_6->w.is_delete;
 bool VAR_11 = !VAR_10 && FUNC_8(&VAR_7, "select ");
 unsigned int VAR_12;

 if (*VAR_7 == '<') {
  int VAR_13 = 0;

  VAR_9 = ((void*)0);
  if (VAR_10)
   VAR_13 = FUNC_6(VAR_7);
  else if (VAR_11)
   VAR_9 = FUNC_7(VAR_7);
  else
   VAR_9 = FUNC_5(VAR_7, 0);
  VAR_6->w.domain = VAR_9;
  return VAR_13;
 }
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = VAR_9->ns;
 if (FUNC_2(VAR_7, "use_profile %u", &VAR_12) == 1
     && VAR_12 < VAR_3) {
  if (!VAR_5 || VAR_8->profile_ptr[VAR_12])
   if (!VAR_10)
    VAR_9->profile = (u8) VAR_12;
  return 0;
 }
 if (FUNC_2(VAR_7, "use_group %u\n", &VAR_12) == 1
     && VAR_12 < VAR_1) {
  if (!VAR_10)
   FUNC_1(VAR_12, VAR_9->group);
  else
   FUNC_0(VAR_12, VAR_9->group);
  return 0;
 }
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  const char *VAR_14 = VAR_4[VAR_12];

  if (FUNC_4(VAR_7, VAR_14, FUNC_3(VAR_14) - 1))
   continue;
  VAR_9->flags[VAR_12] = !VAR_10;
  return 0;
 }
 return FUNC_9(VAR_8, &VAR_9->acl_info_list, VAR_7,
        VAR_10);
}
