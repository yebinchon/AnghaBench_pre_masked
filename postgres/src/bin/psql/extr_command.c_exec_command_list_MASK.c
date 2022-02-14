
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
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (int ,int ,int *,int) ;
 scalar_t__ FUNC_4 (char const*,char) ;

__attribute__((used)) static backslashResult
FUNC_5(PsqlScanState VAR_3, bool VAR_4, const char *VAR_5)
{
 bool VAR_6 = 1;

 if (VAR_4)
 {
  char *VAR_7;
  bool VAR_8;

  VAR_7 = FUNC_3(VAR_3,
           VAR_0, ((void*)0), 1);

  VAR_8 = FUNC_4(VAR_5, '+') ? 1 : 0;

  VAR_6 = FUNC_2(VAR_7, VAR_8);

  if (VAR_7)
   FUNC_0(VAR_7);
 }
 else
  FUNC_1(VAR_3);

 return VAR_6 ? VAR_2 : VAR_1;
}
