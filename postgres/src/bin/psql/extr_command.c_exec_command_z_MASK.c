
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int backslashResult ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static backslashResult
FUNC_4(PsqlScanState VAR_3, bool VAR_4)
{
 bool VAR_5 = 1;

 if (VAR_4)
 {
  char *VAR_6 = FUNC_3(VAR_3,
              VAR_0, ((void*)0), 1);

  VAR_5 = FUNC_2(VAR_6);
  if (VAR_6)
   FUNC_0(VAR_6);
 }
 else
  FUNC_1(VAR_3);

 return VAR_5 ? VAR_2 : VAR_1;
}
