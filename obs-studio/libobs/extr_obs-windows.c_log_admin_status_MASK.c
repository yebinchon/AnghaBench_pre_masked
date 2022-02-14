
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SID_IDENTIFIER_AUTHORITY ;
typedef int PSID ;
typedef int BOOL ;


 int FUNC_0 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *,int ,int*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 SID_IDENTIFIER_AUTHORITY VAR_4 = VAR_3;
 PSID VAR_5;
 BOOL VAR_6;

 VAR_6 = FUNC_0(&VAR_4, 2,
        VAR_2,
        VAR_0, 0, 0, 0, 0,
        0, 0, &VAR_5);
 if (VAR_6) {
  if (!FUNC_1(((void*)0), VAR_5, &VAR_6))
   VAR_6 = 0;
  FUNC_2(VAR_5);
 }

 FUNC_3(VAR_1, "Running as administrator: %s",
      VAR_6 ? "true" : "false");
}
