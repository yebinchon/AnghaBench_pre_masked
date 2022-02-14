
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_known {int dummy; } ;
struct inode {int i_opflags; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smack_known* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dentry*,struct inode*,char const*,char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 struct smack_known* FUNC_4 (char*,int) ;

__attribute__((used)) static struct smack_known *FUNC_5(const char *VAR_5, struct inode *VAR_6,
     struct dentry *VAR_7)
{
 int VAR_8;
 char *VAR_9;
 struct smack_known *VAR_10 = ((void*)0);

 if (!(VAR_6->i_opflags & VAR_3))
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_3(VAR_4, VAR_2);
 if (VAR_9 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_1(VAR_7, VAR_6, VAR_5, VAR_9, VAR_4);
 if (VAR_8 < 0)
  VAR_10 = FUNC_0(VAR_8);
 else if (VAR_8 == 0)
  VAR_10 = ((void*)0);
 else
  VAR_10 = FUNC_4(VAR_9, VAR_8);

 FUNC_2(VAR_9);

 return VAR_10;
}
