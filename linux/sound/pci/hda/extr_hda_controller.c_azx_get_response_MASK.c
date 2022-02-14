
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int dummy; } ;
struct azx {scalar_t__ single_cmd; scalar_t__ disabled; } ;


 int FUNC_0 (struct hdac_bus*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct hdac_bus*,unsigned int,unsigned int*) ;
 struct azx* FUNC_2 (struct hdac_bus*) ;

__attribute__((used)) static int FUNC_3(struct hdac_bus *VAR_0, unsigned int VAR_1,
       unsigned int *VAR_2)
{
 struct azx *VAR_3 = FUNC_2(VAR_0);

 if (VAR_3->disabled)
  return 0;
 if (VAR_3->single_cmd)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2);
}
