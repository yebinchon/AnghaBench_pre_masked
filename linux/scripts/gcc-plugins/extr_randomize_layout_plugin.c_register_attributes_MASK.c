
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* name; int type_required; int affects_type_identity; void* handler; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_7, void *VAR_8)
{
 VAR_5.name = "randomize_layout";
 VAR_5.type_required = 1;
 VAR_5.handler = VAR_1;




 VAR_3.name = "no_randomize_layout";
 VAR_3.type_required = 1;
 VAR_3.handler = VAR_1;




 VAR_4.name = "randomize_considered";
 VAR_4.type_required = 1;
 VAR_4.handler = VAR_0;

 VAR_6.name = "randomize_performed";
 VAR_6.type_required = 1;
 VAR_6.handler = VAR_2;

 FUNC_0(&VAR_5);
 FUNC_0(&VAR_3);
 FUNC_0(&VAR_4);
 FUNC_0(&VAR_6);
}
