
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int atomic_flags; } ;
struct inode {int i_readcount; } ;
struct file {int f_mode; int f_path; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,char const*,struct integrity_iint_cache*,char*,char*) ;
 char* FUNC_4 (int *,char**,char*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 struct integrity_iint_cache* FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct file *VAR_2,
         struct integrity_iint_cache *VAR_3,
         int VAR_4,
         char **VAR_5,
         const char **VAR_6,
         char *VAR_7)
{
 struct inode *VAR_8 = FUNC_2(VAR_2);
 fmode_t VAR_9 = VAR_2->f_mode;
 bool VAR_10 = 0, VAR_11 = 0;

 if (VAR_9 & VAR_0) {
  if (FUNC_1(&VAR_8->i_readcount) && FUNC_0(VAR_8)) {
   if (!VAR_3)
    VAR_3 = FUNC_6(VAR_8);

   if (VAR_3 && FUNC_8(VAR_1,
      &VAR_3->atomic_flags))
    VAR_10 = 1;
  }
 } else {
  if (VAR_4)
   FUNC_7(VAR_1, &VAR_3->atomic_flags);
  if (FUNC_5(VAR_8) && VAR_4)
   VAR_11 = 1;
 }

 if (!VAR_10 && !VAR_11)
  return;

 *VAR_6 = FUNC_4(&VAR_2->f_path, VAR_5, VAR_7);

 if (VAR_10)
  FUNC_3(VAR_2, *VAR_6, VAR_3,
      "invalid_pcr", "ToMToU");
 if (VAR_11)
  FUNC_3(VAR_2, *VAR_6, VAR_3,
      "invalid_pcr", "open_writers");
}
