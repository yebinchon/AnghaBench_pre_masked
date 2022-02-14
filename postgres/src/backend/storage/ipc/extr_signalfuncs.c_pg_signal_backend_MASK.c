
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int roleId; } ;
typedef TYPE_1__ PGPROC ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(int VAR_6, int VAR_7)
{
 PGPROC *VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 == ((void*)0))
 {




  FUNC_2(VAR_5,
    (FUNC_3("PID %d is not a PostgreSQL server process", VAR_6)));
  return VAR_1;
 }


 if (FUNC_7(VAR_8->roleId) && !FUNC_6())
  return VAR_3;


 if (!FUNC_4(FUNC_1(), VAR_8->roleId) &&
  !FUNC_4(FUNC_1(), VAR_0))
  return VAR_2;
 if (FUNC_5(VAR_6, VAR_7))

 {

  FUNC_2(VAR_5,
    (FUNC_3("could not send signal to process %d: %m", VAR_6)));
  return VAR_1;
 }
 return VAR_4;
}
