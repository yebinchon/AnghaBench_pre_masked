
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_table_info {unsigned int size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct xt_table_info* FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct xt_table_info*,int ,int) ;

struct xt_table_info *FUNC_2(unsigned int VAR_2)
{
 struct xt_table_info *VAR_3 = ((void*)0);
 size_t VAR_4 = sizeof(*VAR_3) + VAR_2;

 if (VAR_4 < sizeof(*VAR_3) || VAR_4 >= VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_4, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->size = VAR_2;
 return VAR_3;
}
