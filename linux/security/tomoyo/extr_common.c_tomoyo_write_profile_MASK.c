
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tomoyo_profile {int * pref; struct tomoyo_path_info const* comment; } ;
typedef struct tomoyo_path_info const tomoyo_path_info ;
struct TYPE_3__ {TYPE_2__* ns; } ;
struct tomoyo_io_buffer {char* write_buf; TYPE_1__ w; } ;
struct TYPE_4__ {int profile_version; } ;
typedef int DEFINE_SPINLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (char*,char**,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int *) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 struct tomoyo_profile* FUNC_6 (TYPE_2__*,unsigned int) ;
 struct tomoyo_path_info const* FUNC_7 (char*) ;
 int * VAR_3 ;
 int FUNC_8 (struct tomoyo_path_info const*) ;
 int FUNC_9 (char*,char*,struct tomoyo_profile*) ;
 int FUNC_10 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_11(struct tomoyo_io_buffer *VAR_4)
{
 char *VAR_5 = VAR_4->write_buf;
 unsigned int VAR_6;
 char *VAR_7;
 struct tomoyo_profile *VAR_8;

 if (FUNC_3(VAR_5, "PROFILE_VERSION=%u", &VAR_4->w.ns->profile_version)
     == 1)
  return 0;
 VAR_6 = FUNC_0(VAR_5, &VAR_7, 10);
 if (*VAR_7 != '-')
  return -VAR_0;
 VAR_5 = VAR_7 + 1;
 VAR_8 = FUNC_6(VAR_4->w.ns, VAR_6);
 if (!VAR_8)
  return -VAR_0;
 VAR_7 = FUNC_4(VAR_5, '=');
 if (!VAR_7)
  return -VAR_0;
 *VAR_7++ = '\0';
 if (!FUNC_5(VAR_5, "COMMENT")) {
  static DEFINE_SPINLOCK(VAR_9);
  const struct tomoyo_path_info *VAR_10
   = FUNC_7(VAR_7);
  const struct tomoyo_path_info *VAR_11;

  if (!VAR_10)
   return -VAR_1;
  FUNC_1(&VAR_9);
  VAR_11 = VAR_8->comment;
  VAR_8->comment = VAR_10;
  FUNC_2(&VAR_9);
  FUNC_8(VAR_11);
  return 0;
 }
 if (!FUNC_5(VAR_5, "PREFERENCE")) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
   FUNC_10(&VAR_8->pref[VAR_6], VAR_7,
     VAR_3[VAR_6]);
  return 0;
 }
 return FUNC_9(VAR_5, VAR_7, VAR_8);
}
