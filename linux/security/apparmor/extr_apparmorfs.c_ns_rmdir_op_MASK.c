
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_private; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {struct inode* d_inode; TYPE_1__ d_name; } ;
struct aa_ns {int lock; int sub_ns; int level; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct aa_ns*) ;
 struct aa_ns* FUNC_3 (int ) ;
 int FUNC_4 (struct aa_label*,int *,int ) ;
 int FUNC_5 (struct aa_ns*) ;
 struct aa_label* FUNC_6 () ;
 int FUNC_7 (struct aa_label*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 struct dentry* FUNC_13 (struct aa_ns*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_3, struct dentry *VAR_4)
{
 struct aa_ns *VAR_5, *VAR_6;

 struct aa_label *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6();
 VAR_8 = FUNC_4(VAR_7, ((void*)0), VAR_0);
 FUNC_7(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_3(VAR_3->i_private);




 FUNC_10(VAR_3);
 FUNC_10(VAR_4->d_inode);

 FUNC_11(&VAR_6->lock, VAR_6->level);
 VAR_5 = FUNC_3(FUNC_1(&VAR_6->sub_ns, VAR_4->d_name.name,
         VAR_4->d_name.len));
 if (!VAR_5) {
  VAR_8 = -VAR_1;
  goto out;
 }
 FUNC_0(FUNC_13(VAR_5) != VAR_4);

 FUNC_2(VAR_5);
 FUNC_5(VAR_5);

out:
 FUNC_12(&VAR_6->lock);
 FUNC_9(VAR_3, VAR_2);
 FUNC_8(VAR_4->d_inode);
 FUNC_5(VAR_6);

 return VAR_8;
}
