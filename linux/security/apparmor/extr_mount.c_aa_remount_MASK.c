
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path {TYPE_3__* dentry; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_6__ {TYPE_2__* d_sb; } ;
struct TYPE_5__ {TYPE_1__* s_type; } ;
struct TYPE_4__ {int fs_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct aa_profile*,struct path const*,char*,int *,int *,int *,unsigned long,void*,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct aa_label *VAR_1, const struct path *VAR_2,
        unsigned long VAR_3, void *VAR_4)
{
 struct aa_profile *VAR_5;
 char *VAR_6 = ((void*)0);
 bool VAR_7;
 int VAR_8;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_2);

 VAR_7 = VAR_2->dentry->d_sb->s_type->fs_flags & VAR_0;

 FUNC_2(VAR_6);
 VAR_8 = FUNC_1(VAR_1, VAR_5,
   FUNC_3(VAR_5, VAR_2, VAR_6, ((void*)0), ((void*)0), ((void*)0),
      VAR_3, VAR_4, VAR_7));
 FUNC_4(VAR_6);

 return VAR_8;
}
