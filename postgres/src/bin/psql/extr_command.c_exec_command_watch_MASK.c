
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int backslashResult ;
typedef int PsqlScanState ;
typedef int PQExpBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,double) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ) ;
 double FUNC_7 (char*,int *) ;

__attribute__((used)) static backslashResult
FUNC_8(PsqlScanState VAR_3, bool VAR_4,
       PQExpBuffer VAR_5, PQExpBuffer VAR_6)
{
 bool VAR_7 = 1;

 if (VAR_4)
 {
  char *VAR_8 = FUNC_5(VAR_3,
             VAR_0, ((void*)0), 1);
  double VAR_9 = 2;


  if (VAR_8)
  {
   VAR_9 = FUNC_7(VAR_8, ((void*)0));
   if (VAR_9 <= 0)
    VAR_9 = 1;
   FUNC_2(VAR_8);
  }


  FUNC_0(VAR_5, VAR_6);

  VAR_7 = FUNC_1(VAR_5, VAR_9);


  FUNC_6(VAR_5);
  FUNC_4(VAR_3);
 }
 else
  FUNC_3(VAR_3);

 return VAR_7 ? VAR_2 : VAR_1;
}
