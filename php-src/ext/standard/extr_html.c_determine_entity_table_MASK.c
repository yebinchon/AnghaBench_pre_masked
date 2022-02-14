
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int table; int ms_table; int * member_0; } ;
typedef TYPE_1__ entity_table_opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static entity_table_opt FUNC_1(int VAR_7, int VAR_8)
{
 entity_table_opt VAR_9 = {((void*)0)};

 FUNC_0(!(VAR_8 == VAR_2 && VAR_7));

 if (VAR_7) {
  VAR_9.ms_table = (VAR_8 == VAR_1) ?
   VAR_4 : VAR_3;
 } else {
  VAR_9.table = (VAR_8 == VAR_0) ?
   VAR_6 : VAR_5;
 }
 return VAR_9;
}
