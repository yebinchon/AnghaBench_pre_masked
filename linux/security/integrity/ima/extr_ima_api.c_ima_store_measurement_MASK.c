
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modsig {int dummy; } ;
struct integrity_iint_cache {int measured_pcrs; int flags; } ;
struct inode {int dummy; } ;
struct ima_template_entry {int dummy; } ;
struct ima_template_desc {int dummy; } ;
struct ima_event_data {unsigned char const* filename; int xattr_len; struct modsig const* modsig; struct evm_ima_xattr_data* xattr_value; struct file* file; struct integrity_iint_cache* iint; } ;
struct file {int f_flags; } ;
struct evm_ima_xattr_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct ima_event_data*,struct ima_template_entry**,struct ima_template_desc*) ;
 int FUNC_2 (struct ima_template_entry*) ;
 int FUNC_3 (struct ima_template_entry*,int,struct inode*,unsigned char const*,int) ;
 int FUNC_4 (int ,struct inode*,unsigned char const*,char const*,char const*,int,int ) ;

void FUNC_5(struct integrity_iint_cache *VAR_5,
      struct file *VAR_6, const unsigned char *VAR_7,
      struct evm_ima_xattr_data *VAR_8,
      int VAR_9, const struct modsig *VAR_10, int VAR_11,
      struct ima_template_desc *VAR_12)
{
 static const char VAR_13[] = "add_template_measure";
 static const char VAR_14[] = "ENOMEM";
 int VAR_15 = -VAR_2;
 struct inode *VAR_16 = FUNC_0(VAR_6);
 struct ima_template_entry *VAR_17;
 struct ima_event_data VAR_18 = { .iint = VAR_5,
          .file = VAR_6,
          .filename = VAR_7,
          .xattr_value = VAR_8,
          .xattr_len = VAR_9,
          .modsig = VAR_10 };
 int VAR_19 = 0;







 if (VAR_5->measured_pcrs & (0x1 << VAR_11) && !VAR_10)
  return;

 VAR_15 = FUNC_1(&VAR_18, &VAR_17, VAR_12);
 if (VAR_15 < 0) {
  FUNC_4(VAR_0, VAR_16, VAR_7,
        VAR_13, VAR_14, VAR_15, 0);
  return;
 }

 VAR_15 = FUNC_3(VAR_17, VAR_19, VAR_16, VAR_7, VAR_11);
 if ((!VAR_15 || VAR_15 == -VAR_1) && !(VAR_6->f_flags & VAR_4)) {
  VAR_5->flags |= VAR_3;
  VAR_5->measured_pcrs |= (0x1 << VAR_11);
 }
 if (VAR_15 < 0)
  FUNC_2(VAR_17);
}
