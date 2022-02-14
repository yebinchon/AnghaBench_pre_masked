
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct modsig {int dummy; } ;
struct integrity_iint_cache {int flags; } ;
struct inode {int i_opflags; scalar_t__ i_size; TYPE_1__* i_sb; } ;
struct file {int f_mode; } ;
struct evm_ima_xattr_data {scalar_t__ type; } ;
struct dentry {int dummy; } ;
typedef enum integrity_status { ____Placeholder_integrity_status } integrity_status ;
typedef enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;
struct TYPE_2__ {int s_iflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;






 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_14 ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,int ,struct evm_ima_xattr_data*,int,struct integrity_iint_cache*) ;
 struct dentry* FUNC_3 (struct file*) ;
 int VAR_15 ;
 int FUNC_4 (struct integrity_iint_cache*,int) ;
 int FUNC_5 (struct dentry*,struct integrity_iint_cache*) ;
 int FUNC_6 (struct integrity_iint_cache*,int,int) ;
 int FUNC_7 (int ,struct inode*,unsigned char const*,char const*,char const*,int,int ) ;
 int FUNC_8 (int,struct modsig const*,int*,char const**) ;
 int FUNC_9 (int,struct integrity_iint_cache*,struct evm_ima_xattr_data*,int,int*,char const**) ;

int FUNC_10(enum ima_hooks VAR_16,
        struct integrity_iint_cache *VAR_17,
        struct file *VAR_18, const unsigned char *VAR_19,
        struct evm_ima_xattr_data *VAR_20,
        int VAR_21, const struct modsig *VAR_22)
{
 static const char VAR_23[] = "appraise_data";
 const char *VAR_24 = "unknown";
 struct dentry *VAR_25 = FUNC_3(VAR_18);
 struct inode *VAR_26 = FUNC_1(VAR_25);
 enum integrity_status VAR_27 = 128;
 int VAR_28 = VAR_21;
 bool VAR_29 = VAR_17->flags & VAR_8 && VAR_22;


 if (!(VAR_26->i_opflags & VAR_11) && !VAR_29)
  return 128;


 if (VAR_28 <= 0 && !VAR_29) {
  if (VAR_28 && VAR_28 != -VAR_1)
   goto out;

  VAR_24 = VAR_17->flags & VAR_6 ?
    "IMA-signature-required" : "missing-hash";
  VAR_27 = 132;
  if (VAR_18->f_mode & VAR_4)
   VAR_17->flags |= VAR_9;
  if ((VAR_17->flags & VAR_9) &&
      (!(VAR_17->flags & VAR_6) ||
       (VAR_26->i_size == 0)))
   VAR_27 = 130;
  goto out;
 }

 VAR_27 = FUNC_2(VAR_25, VAR_14, VAR_20, VAR_28, VAR_17);
 switch (VAR_27) {
 case 130:
 case 129:
 case 128:
  break;
 case 131:

  if (VAR_29)
   break;

 case 132:
  VAR_24 = "missing-HMAC";
  goto out;
 case 133:
  VAR_24 = "invalid-HMAC";
  goto out;
 default:
  FUNC_0(1, "Unexpected integrity status %d\n", VAR_27);
 }

 if (VAR_20)
  VAR_28 = FUNC_9(VAR_16, VAR_17, VAR_20, VAR_21, &VAR_27,
      &VAR_24);





 if (VAR_29 &&
     (!VAR_20 || VAR_20->type == VAR_10 ||
      VAR_28 == -VAR_2))
  VAR_28 = FUNC_8(VAR_16, VAR_22, &VAR_27, &VAR_24);

out:






 if ((VAR_26->i_sb->s_iflags & VAR_12) &&
     ((VAR_26->i_sb->s_iflags & VAR_13) ||
      (VAR_17->flags & VAR_7))) {
  VAR_27 = 133;
  VAR_24 = "unverifiable-signature";
  FUNC_7(VAR_0, VAR_26, VAR_19,
        VAR_23, VAR_24, VAR_28, 0);
 } else if (VAR_27 != 130) {

  if ((VAR_15 & VAR_5) && !VAR_29 &&
      (!VAR_20 ||
       VAR_20->type != VAR_3)) {
   if (!FUNC_5(VAR_25, VAR_17))
    VAR_27 = 130;
  }


  if (VAR_26->i_size == 0 && VAR_17->flags & VAR_9 &&
      VAR_20 && VAR_20->type == VAR_3) {
   VAR_27 = 130;
  }

  FUNC_7(VAR_0, VAR_26, VAR_19,
        VAR_23, VAR_24, VAR_28, 0);
 } else {
  FUNC_4(VAR_17, VAR_16);
 }

 FUNC_6(VAR_17, VAR_16, VAR_27);
 return VAR_27;
}
