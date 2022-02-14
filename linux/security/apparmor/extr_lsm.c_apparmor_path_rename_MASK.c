
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path_cond {int member_1; int member_0; } ;
struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_2__ {int i_mode; int i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct aa_label*,struct path*,int ,int,struct path_cond*) ;
 struct aa_label* FUNC_1 () ;
 TYPE_1__* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct aa_label*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct aa_label*) ;

__attribute__((used)) static int FUNC_6(const struct path *VAR_8, struct dentry *VAR_9,
    const struct path *VAR_10, struct dentry *VAR_11)
{
 struct aa_label *VAR_12;
 int VAR_13 = 0;

 if (!FUNC_4(VAR_9))
  return 0;

 VAR_12 = FUNC_1();
 if (!FUNC_5(VAR_12)) {
  struct path VAR_14 = { .mnt = VAR_8->mnt,
      .dentry = VAR_9 };
  struct path VAR_15 = { .mnt = VAR_10->mnt,
      .dentry = VAR_11 };
  struct path_cond VAR_16 = { FUNC_2(VAR_9)->i_uid,
       FUNC_2(VAR_9)->i_mode
  };

  VAR_13 = FUNC_0(VAR_7, VAR_12, &VAR_14, 0,
         VAR_4 | VAR_2 | VAR_5 |
         VAR_3 | VAR_1,
         &VAR_16);
  if (!VAR_13)
   VAR_13 = FUNC_0(VAR_6, VAR_12, &VAR_15,
          0, VAR_5 | VAR_3 |
          VAR_0, &VAR_16);

 }
 FUNC_3(VAR_12);

 return VAR_13;
}
