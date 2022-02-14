
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct sg_table*,unsigned int,int ,int *,int ,int ,int ) ;
 int FUNC_1 (struct sg_table*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct sg_table *VAR_3, unsigned int VAR_4, gfp_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_0,
          ((void*)0), 0, VAR_5, VAR_2);
 if (FUNC_2(VAR_6))
  FUNC_1(VAR_3, VAR_0, 0, VAR_1);

 return VAR_6;
}
