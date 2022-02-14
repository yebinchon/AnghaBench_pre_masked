
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {unsigned int orig_nents; } ;


 int VAR_0 ;
 int FUNC_0 (struct sg_table*,int ,unsigned int,int ) ;
 int VAR_1 ;

void FUNC_1(struct sg_table *VAR_2,
  unsigned VAR_3)
{
 if (VAR_2->orig_nents <= VAR_3)
  return;

 if (VAR_3 == 1)
  VAR_3 = 0;

 FUNC_0(VAR_2, VAR_0, VAR_3, VAR_1);
}
