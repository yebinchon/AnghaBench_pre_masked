
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct super_block {TYPE_1__* s_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (struct dentry*,char*,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *,int ,char*,int,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_7,
     u16 VAR_8,
     u16 VAR_9,
     u32 *VAR_10)
{
 int VAR_11;
 struct super_block *VAR_12 = VAR_7->d_sb;
 char *VAR_13, *VAR_14;

 VAR_13 = (char *)FUNC_2(VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = FUNC_3(VAR_7, VAR_13, VAR_3);
 if (FUNC_0(VAR_14))
  VAR_11 = FUNC_1(VAR_14);
 else {
  if (VAR_9 & VAR_5) {



   while (VAR_14[1] >= '0' && VAR_14[1] <= '9') {
    VAR_14[1] = '/';
    VAR_14++;
   }
  }
  VAR_11 = FUNC_5(&VAR_6, VAR_12->s_type->name,
     VAR_14, VAR_8, VAR_10);
  if (VAR_11 == -VAR_0) {

   *VAR_10 = VAR_4;
   VAR_11 = 0;
  }
 }
 FUNC_4((unsigned long)VAR_13);
 return VAR_11;
}
