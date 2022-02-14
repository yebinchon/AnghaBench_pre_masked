
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,int) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == FUNC_4(VAR_0)) {
  if (VAR_1 == 0)
   VAR_2 = FUNC_2(VAR_0, 1);
  else
   VAR_2 = FUNC_3(VAR_0, 1);
 } else {
  if (VAR_1 == 0)
   VAR_2 = FUNC_0(VAR_0, 1);
  else
   VAR_2 = FUNC_1(VAR_0, 1);
 }

 return VAR_2;
}
