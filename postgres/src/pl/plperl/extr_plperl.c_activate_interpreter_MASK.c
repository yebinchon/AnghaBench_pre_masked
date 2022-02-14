
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_id; int interp; } ;
typedef TYPE_1__ plperl_interp_desc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(plperl_interp_desc *VAR_1)
{
 if (VAR_1 && VAR_0 != VAR_1)
 {
  FUNC_0(VAR_1->interp);
  FUNC_2(VAR_1->interp);

  FUNC_3(FUNC_1(VAR_1->user_id));
  VAR_0 = VAR_1;
 }
}
