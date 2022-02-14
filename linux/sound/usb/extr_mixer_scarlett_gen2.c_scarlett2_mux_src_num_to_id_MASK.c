
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scarlett2_ports {int* num; int id; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(const struct scarlett2_ports *VAR_2,
           int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0;
      VAR_4 < VAR_1;
      VAR_4++) {
  if (VAR_3 < VAR_2[VAR_4].num[VAR_0])
   return VAR_2[VAR_4].id | VAR_3;
  VAR_3 -= VAR_2[VAR_4].num[VAR_0];
 }


 return 0;
}
