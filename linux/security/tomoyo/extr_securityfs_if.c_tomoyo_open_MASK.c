
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_private; } ;


 TYPE_1__* FUNC_0 (struct file*) ;
 int FUNC_1 (int const,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 const int VAR_2 = ((u8 *) FUNC_0(VAR_1)->i_private)
  - ((u8 *) ((void*)0));
 return FUNC_1(VAR_2, VAR_1);
}
