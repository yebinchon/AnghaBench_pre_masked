
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct integrity_iint_cache {int dummy; } ;
struct inode {int dummy; } ;
struct ima_template_entry {int dummy; } ;
struct ima_event_data {unsigned char const* filename; char const* violation; struct file* file; struct integrity_iint_cache* iint; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int violations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct ima_event_data*,struct ima_template_entry**,int *) ;
 int FUNC_3 (struct ima_template_entry*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (struct ima_template_entry*,int,struct inode*,unsigned char const*,int ) ;
 int FUNC_5 (int ,struct inode*,unsigned char const*,char const*,char const*,int,int ) ;

void FUNC_6(struct file *VAR_4, const unsigned char *VAR_5,
         struct integrity_iint_cache *VAR_6,
         const char *VAR_7, const char *VAR_8)
{
 struct ima_template_entry *VAR_9;
 struct inode *VAR_10 = FUNC_1(VAR_4);
 struct ima_event_data VAR_11 = { .iint = VAR_6,
          .file = VAR_4,
          .filename = VAR_5,
          .violation = VAR_8 };
 int VAR_12 = 1;
 int VAR_13;


 FUNC_0(&VAR_3.violations);

 VAR_13 = FUNC_2(&VAR_11, &VAR_9, ((void*)0));
 if (VAR_13 < 0) {
  VAR_13 = -VAR_2;
  goto err_out;
 }
 VAR_13 = FUNC_4(VAR_9, VAR_12, VAR_10,
        VAR_5, VAR_1);
 if (VAR_13 < 0)
  FUNC_3(VAR_9);
err_out:
 FUNC_5(VAR_0, VAR_10, VAR_5,
       VAR_7, VAR_8, VAR_13, 0);
}
