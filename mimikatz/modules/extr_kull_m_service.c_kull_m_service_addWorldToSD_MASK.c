
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ptstrName; } ;
struct TYPE_5__ {int * member_4; int member_3; int member_2; int member_1; int * member_0; } ;
struct TYPE_7__ {int member_0; TYPE_2__ Trustee; TYPE_1__ member_3; int member_2; int member_1; } ;
typedef int SID_IDENTIFIER_AUTHORITY ;
typedef int SECURITY_DESCRIPTOR ;
typedef int SC_HANDLE ;
typedef int PSID ;
typedef int * PSECURITY_DESCRIPTOR ;
typedef TYPE_3__ EXPLICIT_ACCESS ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int,TYPE_3__*,int ,int *,int *,int *,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int ,int ,int *,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (int ,int ,int *) ;
 int VAR_19 ;
 int VAR_20 ;

BOOL FUNC_8(SC_HANDLE VAR_21)
{
 BOOL VAR_22 = VAR_3;
 DWORD VAR_23;
 PSECURITY_DESCRIPTOR VAR_24, VAR_25;
 SECURITY_DESCRIPTOR VAR_26;
 SID_IDENTIFIER_AUTHORITY VAR_27 = VAR_9;
 EXPLICIT_ACCESS VAR_28 = {
  VAR_14 | VAR_13 | VAR_11 | VAR_10 | VAR_12 | VAR_15 | VAR_16 | VAR_17 | VAR_7,
  VAR_18,
  &VAR_5,
  {((void*)0), VAR_6, VAR_19, VAR_20, ((void*)0)}
 };
 if(!FUNC_6(VAR_21, VAR_0, &VAR_26, 0, &VAR_23) && (FUNC_3() == VAR_1))
 {
  if((VAR_24 = (PSECURITY_DESCRIPTOR) FUNC_4(VAR_4, VAR_23)))
  {
   if(FUNC_6(VAR_21, VAR_0, VAR_24, VAR_23, &VAR_23))
   {
    if(FUNC_0(&VAR_27, 1, VAR_8, 0, 0, 0, 0, 0, 0, 0, (PSID *)&VAR_28.Trustee.ptstrName))
    {
     if(FUNC_1(((void*)0), ((void*)0), 1, &VAR_28, 0, ((void*)0), VAR_24, &VAR_23, &VAR_25) == VAR_2)
     {
      VAR_22 = FUNC_7(VAR_21, VAR_0, VAR_25);
      FUNC_5(VAR_25);
     }
     FUNC_2(VAR_28.Trustee.ptstrName);
    }
   }
   FUNC_5(VAR_24);
  }
 }
 return VAR_22;
}
