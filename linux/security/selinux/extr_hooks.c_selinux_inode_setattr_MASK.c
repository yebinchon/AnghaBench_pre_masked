
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct iattr {unsigned int ia_valid; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ s_magic; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 struct cred* FUNC_0 () ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct cred const*,struct dentry*,int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_15, struct iattr *VAR_16)
{
 const struct cred *VAR_17 = FUNC_0();
 struct inode *VAR_18 = FUNC_1(VAR_15);
 unsigned int VAR_19 = VAR_16->ia_valid;
 __u32 VAR_20 = VAR_13;


 if (VAR_19 & VAR_2) {
  VAR_19 &= ~(VAR_5 | VAR_4 | VAR_6 |
         VAR_2);
  if (!VAR_19)
   return 0;
 }

 if (VAR_19 & (VAR_6 | VAR_10 | VAR_3 |
   VAR_0 | VAR_7 | VAR_9))
  return FUNC_2(VAR_17, VAR_15, VAR_12);

 if (FUNC_3() &&
     VAR_18->i_sb->s_magic != VAR_14 &&
     (VAR_19 & VAR_8) &&
     !(VAR_19 & VAR_1))
  VAR_20 |= VAR_11;

 return FUNC_2(VAR_17, VAR_15, VAR_20);
}
