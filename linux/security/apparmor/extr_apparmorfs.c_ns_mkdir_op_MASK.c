
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_private; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct aa_ns {int lock; int level; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct aa_ns*) ;
 int VAR_1 ;
 int FUNC_2 (struct aa_ns*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 struct aa_ns* FUNC_4 (struct aa_ns*,int ,struct dentry*) ;
 int FUNC_5 (struct inode*,struct dentry*,int,int *,int *,int *,int *) ;
 struct aa_ns* FUNC_6 (int ) ;
 int FUNC_7 (struct aa_label*,int *,int ) ;
 int FUNC_8 (struct aa_ns*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct aa_label* FUNC_9 () ;
 struct inode* FUNC_10 (int ) ;
 int FUNC_11 (struct aa_label*) ;
 int FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct aa_ns*) ;
 int FUNC_17 (int *,int *,int *) ;
 int FUNC_18 (int *,int *) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_6, struct dentry *VAR_7, umode_t VAR_8)
{
 struct aa_ns *VAR_9, *VAR_10;

 struct aa_label *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_9();
 VAR_12 = FUNC_7(VAR_11, ((void*)0), VAR_0);
 FUNC_11(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_10 = FUNC_6(VAR_6->i_private);
 FUNC_0(FUNC_10(FUNC_16(VAR_10)) != VAR_6);




 FUNC_13(VAR_6);
 VAR_12 = FUNC_17(&VAR_5, &VAR_4, &VAR_3);
 FUNC_14(&VAR_10->lock, VAR_10->level);
 FUNC_12(VAR_6, VAR_1);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_8 | VAR_2, ((void*)0),
         ((void*)0), ((void*)0), ((void*)0));
 if (VAR_12)
  goto out_pin;

 VAR_9 = FUNC_4(VAR_10, FUNC_3(VAR_7->d_name.name),
        VAR_7);
 if (FUNC_1(VAR_9)) {
  VAR_12 = FUNC_2(VAR_9);
  VAR_9 = ((void*)0);
 }

 FUNC_8(VAR_9);
out_pin:
 if (VAR_12)
  FUNC_18(&VAR_4, &VAR_3);
out:
 FUNC_15(&VAR_10->lock);
 FUNC_8(VAR_10);

 return VAR_12;
}
