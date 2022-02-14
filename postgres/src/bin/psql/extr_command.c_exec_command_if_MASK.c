
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int backslashResult ;
typedef int PsqlScanState ;
typedef int PQExpBuffer ;
typedef int ConditionalStack ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static backslashResult
FUNC_6(PsqlScanState VAR_4, ConditionalStack VAR_5,
    PQExpBuffer VAR_6)
{
 if (FUNC_0(VAR_5))
 {






  FUNC_2(VAR_5, VAR_2);


  FUNC_5(VAR_4, VAR_5, VAR_6);




  if (!FUNC_4(VAR_4, "\\if expression"))
   FUNC_1(VAR_5, VAR_0);
 }
 else
 {





  FUNC_2(VAR_5, VAR_1);


  FUNC_5(VAR_4, VAR_5, VAR_6);

  FUNC_3(VAR_4);
 }

 return VAR_3;
}
