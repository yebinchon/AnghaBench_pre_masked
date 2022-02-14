
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; int activeSubid; int name; } ;
typedef TYPE_1__* Portal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(Portal VAR_4)
{

 if (VAR_4->status != VAR_3)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("portal \"%s\" cannot be run", VAR_4->name)));

 VAR_4->status = VAR_2;
 VAR_4->activeSubid = FUNC_0();
}
