
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stmt_name; int plansource; } ;
typedef TYPE_1__ PreparedStatement ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (char const*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int VAR_1 ;

void
FUNC_3(const char *VAR_2, bool VAR_3)
{
 PreparedStatement *VAR_4;


 VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4)
 {

  FUNC_0(VAR_4->plansource);


  FUNC_2(VAR_1, VAR_4->stmt_name, VAR_0, ((void*)0));
 }
}
