
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct linux_binprm {TYPE_2__* file; } ;
struct dentry {int dummy; } ;
struct aa_profile {int xattr_count; int xmatch; int * xattrs; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct TYPE_4__ {TYPE_1__ f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,unsigned int,char*,scalar_t__) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct dentry*,int ,char**,int,int ) ;

__attribute__((used)) static int FUNC_5(const struct linux_binprm *VAR_3,
      struct aa_profile *VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 ssize_t VAR_7;
 struct dentry *VAR_8;
 char *VAR_9 = ((void*)0);
 int VAR_10 = 0, VAR_11 = VAR_4->xattr_count;

 if (!VAR_3 || !VAR_4->xattr_count)
  return 0;


 VAR_5 = FUNC_1(VAR_4->xmatch, VAR_5);

 VAR_8 = VAR_3->file->f_path.dentry;

 for (VAR_6 = 0; VAR_6 < VAR_4->xattr_count; VAR_6++) {
  VAR_7 = FUNC_4(VAR_8, VAR_4->xattrs[VAR_6], &VAR_9,
       VAR_10, VAR_1);
  if (VAR_7 >= 0) {
   u32 VAR_12;


   VAR_5 = FUNC_0(VAR_4->xmatch, VAR_5, VAR_9,
       VAR_7);
   VAR_12 = FUNC_2(VAR_4->xmatch, VAR_5);
   if (!(VAR_12 & VAR_2)) {
    VAR_11 = -VAR_0;
    goto out;
   }
  }

  VAR_5 = FUNC_1(VAR_4->xmatch, VAR_5);
  if (VAR_7 < 0) {





   if (!VAR_5) {
    VAR_11 = -VAR_0;
    goto out;
   }

   VAR_11--;
  }
 }

out:
 FUNC_3(VAR_9);
 return VAR_11;
}
