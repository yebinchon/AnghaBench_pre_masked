
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct hdac_bus {int unsol_wp; int unsol_work; void** unsol_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hdac_bus*,void*,void*) ;

void FUNC_2(struct hdac_bus *VAR_1, u32 VAR_2, u32 VAR_3)
{
 unsigned int VAR_4;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1, VAR_2, VAR_3);
 VAR_4 = (VAR_1->unsol_wp + 1) % VAR_0;
 VAR_1->unsol_wp = VAR_4;

 VAR_4 <<= 1;
 VAR_1->unsol_queue[VAR_4] = VAR_2;
 VAR_1->unsol_queue[VAR_4 + 1] = VAR_3;

 FUNC_0(&VAR_1->unsol_work);
}
