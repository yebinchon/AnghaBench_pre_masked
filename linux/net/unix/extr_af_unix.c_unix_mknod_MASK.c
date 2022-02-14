
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct path {int dentry; int mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct path*,struct dentry*) ;
 struct dentry* FUNC_5 (int ,char const*,struct path*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct path*,struct dentry*,int ,int ) ;
 int FUNC_8 (int ,struct dentry*,int ,int ) ;

__attribute__((used)) static int FUNC_9(const char *VAR_1, umode_t VAR_2, struct path *VAR_3)
{
 struct dentry *VAR_4;
 struct path VAR_5;
 int VAR_6 = 0;




 VAR_4 = FUNC_5(VAR_0, VAR_1, &VAR_5, 0);
 VAR_6 = FUNC_1(VAR_4);
 if (FUNC_0(VAR_4))
  return VAR_6;




 VAR_6 = FUNC_7(&VAR_5, VAR_4, VAR_2, 0);
 if (!VAR_6) {
  VAR_6 = FUNC_8(FUNC_2(VAR_5.dentry), VAR_4, VAR_2, 0);
  if (!VAR_6) {
   VAR_3->mnt = FUNC_6(VAR_5.mnt);
   VAR_3->dentry = FUNC_3(VAR_4);
  }
 }
 FUNC_4(&VAR_5, VAR_4);
 return VAR_6;
}
