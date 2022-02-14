
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int (* exec_verb ) (struct hdac_device*,unsigned int,unsigned int,unsigned int*) ;int addr; int bus; } ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int*) ;
 int FUNC_1 (struct hdac_device*,unsigned int,unsigned int,unsigned int*) ;

int FUNC_2(struct hdac_device *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2, unsigned int *VAR_3)
{
 if (VAR_0->exec_verb)
  return VAR_0->exec_verb(VAR_0, VAR_1, VAR_2, VAR_3);
 return FUNC_0(VAR_0->bus, VAR_0->addr, VAR_1, VAR_3);
}
