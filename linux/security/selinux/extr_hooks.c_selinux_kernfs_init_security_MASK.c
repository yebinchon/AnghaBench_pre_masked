
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct task_security_struct {int sid; scalar_t__ create_sid; } ;
struct qstr {int hash_len; int name; } ;
struct kernfs_node {int name; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kernfs_node*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kernfs_node*,int ,char*,scalar_t__) ;
 int FUNC_4 (struct kernfs_node*,int ,char*,scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *,char*,scalar_t__,scalar_t__*,int ) ;
 int FUNC_8 (int *,scalar_t__,char**,scalar_t__*) ;
 int FUNC_9 (int *,int ,scalar_t__,int ,struct qstr*,scalar_t__*) ;
 struct task_security_struct* FUNC_10 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct kernfs_node *VAR_6,
     struct kernfs_node *VAR_7)
{
 const struct task_security_struct *VAR_8 = FUNC_10(FUNC_0());
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;
 char *VAR_13;

 VAR_12 = FUNC_3(VAR_6, VAR_4, ((void*)0), 0);
 if (VAR_12 == -VAR_0)
  return 0;
 else if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = (u32)VAR_12;
 VAR_13 = FUNC_6(VAR_11, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_3(VAR_6, VAR_4, VAR_13, VAR_11);
 if (VAR_12 < 0) {
  FUNC_5(VAR_13);
  return VAR_12;
 }

 VAR_12 = FUNC_7(&VAR_5, VAR_13, VAR_11, &VAR_9,
         VAR_2);
 FUNC_5(VAR_13);
 if (VAR_12)
  return VAR_12;

 if (VAR_8->create_sid) {
  VAR_10 = VAR_8->create_sid;
 } else {
  u16 VAR_14 = FUNC_2(VAR_7->mode);
  struct qstr VAR_15;

  VAR_15.name = VAR_7->name;
  VAR_15.hash_len = FUNC_1(VAR_6, VAR_7->name);

  VAR_12 = FUNC_9(&VAR_5, VAR_8->sid,
          VAR_9, VAR_14, &VAR_15,
          &VAR_10);
  if (VAR_12)
   return VAR_12;
 }

 VAR_12 = FUNC_8(&VAR_5, VAR_10,
        &VAR_13, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_4(VAR_7, VAR_4, VAR_13, VAR_11,
         VAR_3);
 FUNC_5(VAR_13);
 return VAR_12;
}
