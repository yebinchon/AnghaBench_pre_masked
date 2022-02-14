
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct file_system_type {int fs_flags; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_2 (char*,char*) ;
 struct file_system_type* FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int ,struct path*) ;
 int FUNC_5 (struct aa_profile*,struct path const*,char*,struct path*,char*,char const*,unsigned long,void*,int) ;
 int FUNC_6 (struct aa_profile*,struct path const*,char*,char const*,char const*,unsigned long,void*,int,int *) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (struct file_system_type*) ;

int FUNC_10(struct aa_label *VAR_5, const char *VAR_6,
   const struct path *VAR_7, const char *VAR_8, unsigned long VAR_9,
   void *VAR_10)
{
 struct aa_profile *VAR_11;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 bool VAR_14 = 1;
 int VAR_15;
 int VAR_16 = 0;
 struct path VAR_17, *VAR_18 = ((void*)0);

 FUNC_0(!VAR_5);
 FUNC_0(!VAR_7);

 if (VAR_8) {
  struct file_system_type *VAR_19;

  VAR_19 = FUNC_3(VAR_8);
  if (!VAR_19)
   return -VAR_0;
  VAR_14 = VAR_19->fs_flags & VAR_2;
  VAR_16 = VAR_19->fs_flags & VAR_3;
  FUNC_9(VAR_19);

  if (VAR_16) {
   if (!VAR_6 || !*VAR_6)
    return -VAR_1;

   VAR_15 = FUNC_4(VAR_6, VAR_4, &VAR_17);
   if (VAR_15)
    return VAR_15;
   VAR_18 = &VAR_17;
  }
 }

 FUNC_2(VAR_12, VAR_13);
 if (VAR_18) {
  VAR_15 = FUNC_1(VAR_5, VAR_11,
   FUNC_5(VAR_11, VAR_7, VAR_12, VAR_18, VAR_13,
      VAR_8, VAR_9, VAR_10, VAR_14));
 } else {
  VAR_15 = FUNC_1(VAR_5, VAR_11,
   FUNC_6(VAR_11, VAR_7, VAR_12, VAR_6,
        VAR_8, VAR_9, VAR_10, VAR_14, ((void*)0)));
 }
 FUNC_8(VAR_12, VAR_13);
 if (VAR_18)
  FUNC_7(VAR_18);

 return VAR_15;
}
