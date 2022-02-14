
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
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_3 ;

int
FUNC_5(void)
{
 static int VAR_4 = -1;
 BOOL VAR_5;
 PSID VAR_6;
 PSID VAR_7;
 SID_IDENTIFIER_AUTHORITY VAR_8 = {VAR_1};


 if (VAR_4 != -1)
  return VAR_4;


 if (!FUNC_0(&VAR_8, 1,
          VAR_0, 0, 0, 0, 0, 0, 0, 0,
          &VAR_7))
 {
  FUNC_4(VAR_3, "could not get SID for local system account\n");
  return -1;
 }

 if (!FUNC_1(((void*)0), VAR_7, &VAR_5))
 {
  FUNC_4(VAR_3, "could not check access token membership: error code %d\n",
    FUNC_3());
  FUNC_2(VAR_7);
  return -1;
 }
 FUNC_2(VAR_7);

 if (VAR_5)
 {
  VAR_4 = 1;
  return VAR_4;
 }


 if (!FUNC_0(&VAR_8, 1,
          VAR_2, 0, 0, 0, 0, 0, 0, 0,
          &VAR_6))
 {
  FUNC_4(VAR_3, "could not get SID for service group: error code %d\n",
    FUNC_3());
  return -1;
 }

 if (!FUNC_1(((void*)0), VAR_6, &VAR_5))
 {
  FUNC_4(VAR_3, "could not check access token membership: error code %d\n",
    FUNC_3());
  FUNC_2(VAR_6);
  return -1;
 }
 FUNC_2(VAR_6);

 if (VAR_5)
  VAR_4 = 1;
 else
  VAR_4 = 0;

 return VAR_4;
}
