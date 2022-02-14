
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;

void FUNC_2(struct inode *VAR_2)
{
    if (!FUNC_0(VAR_2->i_sb,
                                 VAR_0))
        FUNC_1(VAR_2)->i_flags &= ~VAR_1;
}
