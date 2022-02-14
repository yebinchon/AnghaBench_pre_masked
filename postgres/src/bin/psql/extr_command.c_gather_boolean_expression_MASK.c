
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PsqlScanState ;
typedef int PQExpBuffer ;


 int VAR_0 ;
 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int ,int *,int) ;

__attribute__((used)) static PQExpBuffer
FUNC_5(PsqlScanState VAR_1)
{
 PQExpBuffer VAR_2 = FUNC_2();
 int VAR_3 = 0;
 char *VAR_4;


 while ((VAR_4 = FUNC_4(VAR_1,
             VAR_0, ((void*)0), 0)) != ((void*)0))
 {

  if (VAR_3 > 0)
   FUNC_0(VAR_2, ' ');
  FUNC_1(VAR_2, VAR_4);
  VAR_3++;
  FUNC_3(VAR_4);
 }

 return VAR_2;
}
