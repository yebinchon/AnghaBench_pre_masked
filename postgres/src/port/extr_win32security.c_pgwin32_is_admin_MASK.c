
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ SID_IDENTIFIER_AUTHORITY ;
typedef int PSID ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*,int,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(void)
{
 PSID VAR_4;
 PSID VAR_5;
 SID_IDENTIFIER_AUTHORITY VAR_6 = {VAR_3};
 BOOL VAR_7;
 BOOL VAR_8;

 if (!FUNC_0(&VAR_6, 2,
          VAR_2,
          VAR_0, 0, 0, 0, 0, 0,
          0, &VAR_4))
 {
  FUNC_6(FUNC_4("could not get SID for Administrators group: error code %lu\n"),
      FUNC_3());
  FUNC_5(1);
 }

 if (!FUNC_0(&VAR_6, 2,
          VAR_2,
          VAR_1, 0, 0, 0, 0, 0,
          0, &VAR_5))
 {
  FUNC_6(FUNC_4("could not get SID for PowerUsers group: error code %lu\n"),
      FUNC_3());
  FUNC_5(1);
 }

 if (!FUNC_1(((void*)0), VAR_4, &VAR_7) ||
  !FUNC_1(((void*)0), VAR_5, &VAR_8))
 {
  FUNC_6(FUNC_4("could not check access token membership: error code %lu\n"),
      FUNC_3());
  FUNC_5(1);
 }

 FUNC_2(VAR_4);
 FUNC_2(VAR_5);

 if (VAR_7 || VAR_8)
  return 1;
 else
  return 0;
}
