
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_known {int smk_known; int smk_rules; } ;
struct qstr {int dummy; } ;
struct inode_smack {int smk_flags; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct inode_smack* FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 struct smack_known* FUNC_6 () ;
 struct smack_known* FUNC_7 (struct inode*) ;
 size_t FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5, struct inode *VAR_6,
         const struct qstr *VAR_7, const char **VAR_8,
         void **VAR_9, size_t *VAR_10)
{
 struct inode_smack *VAR_11 = FUNC_3(VAR_5);
 struct smack_known *VAR_12 = FUNC_6();
 struct smack_known *VAR_13 = FUNC_7(VAR_5);
 struct smack_known *VAR_14 = FUNC_7(VAR_6);
 int VAR_15;

 if (VAR_8)
  *VAR_8 = VAR_4;

 if (VAR_9 && VAR_10) {
  FUNC_1();
  VAR_15 = FUNC_4(VAR_12->smk_known, VAR_14->smk_known,
           &VAR_12->smk_rules);
  FUNC_2();







  if (VAR_15 > 0 && ((VAR_15 & VAR_2) != 0) &&
      FUNC_5(VAR_6)) {
   VAR_13 = VAR_14;
   VAR_11->smk_flags |= VAR_3;
  }

  *VAR_9 = FUNC_0(VAR_13->smk_known, VAR_1);
  if (*VAR_9 == ((void*)0))
   return -VAR_0;

  *VAR_10 = FUNC_8(VAR_13->smk_known);
 }

 return 0;
}
