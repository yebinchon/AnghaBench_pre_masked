
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int cmd_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hdac_bus*,unsigned int,unsigned int,unsigned int*) ;

int FUNC_3(struct hdac_bus *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2, unsigned int *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->cmd_mutex);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->cmd_mutex);
 return VAR_4;
}
