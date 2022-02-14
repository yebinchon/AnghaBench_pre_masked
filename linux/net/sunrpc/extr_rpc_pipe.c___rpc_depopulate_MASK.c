
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_filelist {int name; } ;
struct qstr {int len; int name; } ;
struct inode {int i_mode; } ;
struct dentry {int dummy; } ;


 int FUNC_0 () ;

 int VAR_0 ;

 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*,struct qstr*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct dentry *VAR_1,
        const struct rpc_filelist *VAR_2,
        int VAR_3, int VAR_4)
{
 struct inode *VAR_5 = FUNC_4(VAR_1);
 struct dentry *VAR_6;
 struct qstr VAR_7;
 int VAR_8;

 for (VAR_8 = VAR_3; VAR_8 < VAR_4; VAR_8++) {
  VAR_7.name = VAR_2[VAR_8].name;
  VAR_7.len = FUNC_7(VAR_2[VAR_8].name);
  VAR_6 = FUNC_3(VAR_1, &VAR_7);

  if (VAR_6 == ((void*)0))
   continue;
  if (FUNC_5(VAR_6))
   goto next;
  switch (FUNC_4(VAR_6)->i_mode & VAR_0) {
   default:
    FUNC_0();
   case 128:
    FUNC_2(VAR_5, VAR_6);
    break;
   case 129:
    FUNC_1(VAR_5, VAR_6);
  }
next:
  FUNC_6(VAR_6);
 }
}
