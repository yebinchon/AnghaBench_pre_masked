
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct modsig {int dummy; } ;
struct integrity_iint_cache {int flags; int measured_pcrs; int atomic_flags; int mutex; } ;
struct inode {TYPE_1__* i_sb; int i_mode; } ;
struct ima_template_desc {int name; } ;
struct file {int f_flags; int f_mode; int f_path; } ;
struct evm_ima_xattr_data {scalar_t__ type; } ;
struct cred {int dummy; } ;
typedef int loff_t ;
typedef enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;
typedef enum hash_algo { ____Placeholder_hash_algo } hash_algo ;
struct TYPE_2__ {int s_iflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct file*) ;
 struct inode* FUNC_3 (struct file*) ;
 int VAR_37 ;
 int FUNC_4 (int,struct integrity_iint_cache*,struct file*,char const*,struct evm_ima_xattr_data*,int,struct modsig*) ;
 int FUNC_5 (struct integrity_iint_cache*,char const*) ;
 int FUNC_6 (struct integrity_iint_cache*,struct file*,char*,int ,int,struct modsig*) ;
 char* FUNC_7 (int *,char**,char*) ;
 int FUNC_8 (struct modsig*) ;
 int FUNC_9 (struct inode*,struct cred const*,int ,int,int,int*,struct ima_template_desc**) ;
 int FUNC_10 (struct integrity_iint_cache*,int) ;
 int FUNC_11 (struct evm_ima_xattr_data*,int) ;
 int VAR_38 ;
 int FUNC_12 (struct file*,struct integrity_iint_cache*,int,char**,char const**,char*) ;
 int FUNC_13 (int,char*,int ,struct modsig**) ;
 int FUNC_14 (int ,struct evm_ima_xattr_data**) ;
 int FUNC_15 (struct integrity_iint_cache*,struct file*,char const*,struct evm_ima_xattr_data*,int,struct modsig*,int,struct ima_template_desc*) ;
 scalar_t__ FUNC_16 (struct ima_template_desc*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 struct integrity_iint_cache* FUNC_19 (struct inode*) ;
 int FUNC_20 (struct evm_ima_xattr_data*) ;
 int FUNC_21 (int,struct file*,char**,char const**,char*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int *) ;
 scalar_t__ FUNC_25 (int ,int ) ;
 scalar_t__ FUNC_26 (int ,int *) ;
 scalar_t__ FUNC_27 (int ,int *) ;

__attribute__((used)) static int FUNC_28(struct file *VAR_39, const struct cred *VAR_40,
          u32 VAR_41, char *VAR_42, loff_t VAR_43, int VAR_44,
          enum ima_hooks VAR_45)
{
 struct inode *VAR_46 = FUNC_3(VAR_39);
 struct integrity_iint_cache *VAR_47 = ((void*)0);
 struct ima_template_desc *VAR_48 = ((void*)0);
 char *VAR_49 = ((void*)0);
 char VAR_50[VAR_33];
 const char *VAR_51 = ((void*)0);
 int VAR_52 = 0, VAR_53, VAR_54 = 0;
 int VAR_55 = VAR_0;
 struct evm_ima_xattr_data *VAR_56 = ((void*)0);
 struct modsig *VAR_57 = ((void*)0);
 int VAR_58 = 0;
 bool VAR_59;
 enum hash_algo VAR_60;

 if (!VAR_38 || !FUNC_0(VAR_46->i_mode))
  return 0;





 VAR_53 = FUNC_9(VAR_46, VAR_40, VAR_41, VAR_44, VAR_45, &VAR_55,
    &VAR_48);
 VAR_59 = ((VAR_45 == VAR_6 || VAR_45 == VAR_32) &&
      (VAR_38 & VAR_24));
 if (!VAR_53 && !VAR_59)
  return 0;

 VAR_54 = VAR_53 & VAR_9;


 if (VAR_53 & VAR_21)
  VAR_45 = VAR_6;

 FUNC_17(VAR_46);

 if (VAR_53) {
  VAR_47 = FUNC_19(VAR_46);
  if (!VAR_47)
   VAR_52 = -VAR_4;
 }

 if (!VAR_52 && VAR_59)
  FUNC_12(VAR_39, VAR_47, VAR_53 & VAR_24,
      &VAR_49, &VAR_51, VAR_50);

 FUNC_18(VAR_46);

 if (VAR_52)
  goto out;
 if (!VAR_53)
  goto out;

 FUNC_22(&VAR_47->mutex);

 if (FUNC_26(VAR_15, &VAR_47->atomic_flags))

  VAR_47->flags &= ~(VAR_9 | VAR_10 |
     VAR_13 | VAR_11 |
     VAR_8);






 if (FUNC_26(VAR_16, &VAR_47->atomic_flags) ||
     ((VAR_46->i_sb->s_iflags & VAR_35) &&
      !(VAR_46->i_sb->s_iflags & VAR_36) &&
      !(VAR_53 & VAR_20))) {
  VAR_47->flags &= ~VAR_18;
  VAR_47->measured_pcrs = 0;
 }





 VAR_47->flags |= VAR_53;
 VAR_53 &= VAR_19;
 VAR_53 &= ~((VAR_47->flags & (VAR_18 ^ VAR_25)) >> 1);


 if ((VAR_53 & VAR_24) && (VAR_47->measured_pcrs & (0x1 << VAR_55)))
  VAR_53 ^= VAR_24;


 if ((VAR_53 & VAR_22) &&
     !(FUNC_27(VAR_17, &VAR_47->atomic_flags))) {
  VAR_58 = FUNC_14(FUNC_2(VAR_39), &VAR_56);
  if ((VAR_56 && VAR_58 > 2) &&
      (VAR_56->type == VAR_5))
   FUNC_24(VAR_17, &VAR_47->atomic_flags);
  VAR_47->flags |= VAR_23;
  VAR_53 ^= VAR_22;
  FUNC_24(VAR_30, &VAR_47->atomic_flags);
 }


 if (!VAR_53) {
  if (VAR_54) {
   VAR_52 = FUNC_21(VAR_45, VAR_39, &VAR_49,
        &VAR_51, VAR_50);
   if (!VAR_52)
    VAR_52 = FUNC_10(VAR_47, VAR_45);
  }
  goto out_locked;
 }

 if ((VAR_53 & VAR_13) ||
     FUNC_25(VAR_48->name, VAR_29) != 0) {

  VAR_58 = FUNC_14(FUNC_2(VAR_39), &VAR_56);






  if (VAR_47->flags & VAR_26) {
   VAR_52 = FUNC_13(VAR_45, VAR_42, VAR_43, &VAR_57);

   if (!VAR_52 && FUNC_16(VAR_48) &&
       VAR_47->flags & VAR_25)
    VAR_53 |= VAR_24;
  }
 }

 VAR_60 = FUNC_11(VAR_56, VAR_58);

 VAR_52 = FUNC_6(VAR_47, VAR_39, VAR_42, VAR_43, VAR_60, VAR_57);
 if (VAR_52 != 0 && VAR_52 != -VAR_2 && VAR_52 != -VAR_3)
  goto out_locked;

 if (!VAR_49)
  VAR_51 = FUNC_7(&VAR_39->f_path, &VAR_49, VAR_50);

 if (VAR_53 & VAR_24)
  FUNC_15(VAR_47, VAR_39, VAR_51,
          VAR_56, VAR_58, VAR_57, VAR_55,
          VAR_48);
 if (VAR_52 == 0 && (VAR_53 & VAR_13)) {
  FUNC_17(VAR_46);
  VAR_52 = FUNC_4(VAR_45, VAR_47, VAR_39, VAR_51,
           VAR_56, VAR_58, VAR_57);
  FUNC_18(VAR_46);
  if (!VAR_52)
   VAR_52 = FUNC_21(VAR_45, VAR_39, &VAR_49,
        &VAR_51, VAR_50);
 }
 if (VAR_53 & VAR_14)
  FUNC_5(VAR_47, VAR_51);

 if ((VAR_39->f_flags & VAR_34) && (VAR_47->flags & VAR_28))
  VAR_52 = 0;
out_locked:
 if ((VAR_44 & VAR_31) && FUNC_27(VAR_17, &VAR_47->atomic_flags) &&
      !(VAR_47->flags & VAR_27))
  VAR_52 = -VAR_1;
 FUNC_23(&VAR_47->mutex);
 FUNC_20(VAR_56);
 FUNC_8(VAR_57);
out:
 if (VAR_49)
  FUNC_1(VAR_49);
 if (VAR_54) {
  if (VAR_52 && (VAR_37 & VAR_12))
   return -VAR_1;
  if (VAR_39->f_mode & VAR_7)
   FUNC_24(VAR_30, &VAR_47->atomic_flags);
 }
 return 0;
}
