
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int backslashResult ;
typedef int PsqlScanState ;
typedef int PQExpBuffer ;
typedef int ConditionalStack ;


 int FUNC_0 (int) ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static backslashResult
FUNC_5(PsqlScanState VAR_2, ConditionalStack VAR_3,
       PQExpBuffer VAR_4)
{
 bool VAR_5 = 1;

 switch (FUNC_1(VAR_3))
 {
  case 128:
  case 132:

   VAR_5 = FUNC_2(VAR_3);
   FUNC_0(VAR_5);
   break;
  case 131:
  case 130:
  case 133:




   FUNC_3(VAR_2, VAR_3, VAR_4);


   VAR_5 = FUNC_2(VAR_3);
   FUNC_0(VAR_5);
   break;
  case 129:

   FUNC_4("\\endif: no matching \\if");
   VAR_5 = 0;
   break;
 }

 return VAR_5 ? VAR_1 : VAR_0;
}
