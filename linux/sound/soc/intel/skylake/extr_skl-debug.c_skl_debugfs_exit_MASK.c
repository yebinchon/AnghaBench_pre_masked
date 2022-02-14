
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dev {struct skl_debug* debugfs; } ;
struct skl_debug {int fs; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct skl_dev *VAR_0)
{
 struct skl_debug *VAR_1 = VAR_0->debugfs;

 FUNC_0(VAR_1->fs);

 VAR_1 = ((void*)0);
}
