
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct inode*,scalar_t__) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct inode*,scalar_t__) ;

void FUNC_3(struct inode *VAR_0, loff_t VAR_1)
{
 loff_t VAR_2 = VAR_0->i_size;

 FUNC_0(VAR_0, VAR_1);
 if (VAR_1 > VAR_2)
  FUNC_1(VAR_0, VAR_2, VAR_1);
 FUNC_2(VAR_0, VAR_1);
}
