
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hdac_bus*) ;
 int FUNC_1 (struct hdac_bus*,int ,int ,int ) ;
 int FUNC_2 (struct hdac_bus*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct hdac_bus *VAR_4)
{
 FUNC_3(&VAR_4->reg_lock);

 FUNC_2(VAR_4, VAR_3, 0);
 FUNC_2(VAR_4, VAR_1, 0);
 FUNC_4(&VAR_4->reg_lock);

 FUNC_0(VAR_4);

 FUNC_3(&VAR_4->reg_lock);

 FUNC_1(VAR_4, VAR_2, VAR_0, 0);
 FUNC_4(&VAR_4->reg_lock);
}
