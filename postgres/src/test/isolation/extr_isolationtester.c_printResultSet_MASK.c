
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;


 char* FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(PGresult *VAR_0)
{
 int VAR_1;
 int VAR_2,
    VAR_3;


 VAR_1 = FUNC_2(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_4("%-15s", FUNC_0(VAR_0, VAR_2));
 FUNC_4("\n\n");


 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_0); VAR_2++)
 {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   FUNC_4("%-15s", FUNC_1(VAR_0, VAR_2, VAR_3));
  FUNC_4("\n");
 }
}
