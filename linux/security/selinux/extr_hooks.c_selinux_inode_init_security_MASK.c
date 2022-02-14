
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct task_security_struct {void* create_sid; } ;
struct superblock_security_struct {int flags; } ;
struct qstr {int dummy; } ;
struct inode_security_struct {int initialized; void* sid; int sclass; } ;
struct inode {int i_mode; TYPE_1__* i_sb; } ;
struct TYPE_5__ {int initialized; } ;
struct TYPE_4__ {struct superblock_security_struct* s_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,void*,char**,void**) ;
 struct task_security_struct* FUNC_3 (int ) ;
 int FUNC_4 (struct task_security_struct*,struct inode*,struct qstr const*,int ,void**) ;
 struct inode_security_struct* FUNC_5 (struct inode*) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_6, struct inode *VAR_7,
           const struct qstr *VAR_8,
           const char **VAR_9,
           void **VAR_10, size_t *VAR_11)
{
 const struct task_security_struct *VAR_12 = FUNC_3(FUNC_0());
 struct superblock_security_struct *VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16;
 char *VAR_17;

 VAR_13 = VAR_7->i_sb->s_security;

 VAR_14 = VAR_12->create_sid;

 VAR_16 = FUNC_4(FUNC_3(FUNC_0()),
  VAR_7, VAR_8,
  FUNC_1(VAR_6->i_mode),
  &VAR_14);
 if (VAR_16)
  return VAR_16;


 if (VAR_13->flags & VAR_3) {
  struct inode_security_struct *VAR_18 = FUNC_5(VAR_6);
  VAR_18->sclass = FUNC_1(VAR_6->i_mode);
  VAR_18->sid = VAR_14;
  VAR_18->initialized = VAR_1;
 }

 if (!VAR_5.initialized || !(VAR_13->flags & VAR_2))
  return -VAR_0;

 if (VAR_9)
  *VAR_9 = VAR_4;

 if (VAR_10 && VAR_11) {
  VAR_16 = FUNC_2(&VAR_5, VAR_14,
         &VAR_17, &VAR_15);
  if (VAR_16)
   return VAR_16;
  *VAR_10 = VAR_17;
  *VAR_11 = VAR_15;
 }

 return 0;
}
