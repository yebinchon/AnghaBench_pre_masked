
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neigh_table {int dummy; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct neigh_table** VAR_3 ;

__attribute__((used)) static struct neigh_table *FUNC_0(int VAR_4)
{
 struct neigh_table *VAR_5 = ((void*)0);

 switch (VAR_4) {
 case 129:
  VAR_5 = VAR_3[VAR_0];
  break;
 case 128:
  VAR_5 = VAR_3[VAR_2];
  break;
 case 130:
  VAR_5 = VAR_3[VAR_1];
  break;
 }

 return VAR_5;
}
