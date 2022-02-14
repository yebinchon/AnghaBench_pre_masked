
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static backslashResult
FUNC_5(PsqlScanState VAR_2, ConditionalStack VAR_3,
      PQExpBuffer VAR_4)
{
 bool VAR_5 = 1;

 switch (FUNC_0(VAR_3))
 {
  case 128:






   FUNC_4(VAR_2, VAR_3, VAR_4);


   FUNC_1(VAR_3, 133);
   break;
  case 131:




   FUNC_2(VAR_2, VAR_3, VAR_4);





   FUNC_1(VAR_3, 132);
   break;
  case 130:




   FUNC_2(VAR_2, VAR_3, VAR_4);






   FUNC_1(VAR_3, 133);
   break;
  case 132:
  case 133:
   FUNC_3("\\else: cannot occur after \\else");
   VAR_5 = 0;
   break;
  case 129:

   FUNC_3("\\else: no matching \\if");
   VAR_5 = 0;
   break;
 }

 return VAR_5 ? VAR_1 : VAR_0;
}
