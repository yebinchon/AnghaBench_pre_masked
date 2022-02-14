
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ECPG_statement_type { ____Placeholder_ECPG_statement_type } ECPG_statement_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 (int ,int) ;
 char** VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int VAR_12 ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

void
FUNC_7(char *VAR_13, int VAR_14, enum ECPG_statement_type VAR_15)
{
 FUNC_1(VAR_7, "{ ECPGdo(__LINE__, %d, %d, %s, %d, ", VAR_8, VAR_11, VAR_9 ? VAR_9 : "NULL", VAR_12);

 if (VAR_15 == VAR_3 && !VAR_6)
  VAR_15 = VAR_2;






 FUNC_1(VAR_7, "%s, ", VAR_10[VAR_15]);
 if (VAR_15 == VAR_1 || VAR_15 == VAR_0)
  FUNC_1(VAR_7, "%s, ", VAR_13);
 else
 {
  FUNC_2("\"", VAR_7);
  FUNC_4(VAR_13, 0);
  FUNC_2("\", ", VAR_7);
 }


 FUNC_0(VAR_4, 1);
 FUNC_2("ECPGt_EOIT, ", VAR_7);
 FUNC_0(VAR_5, 1);
 FUNC_2("ECPGt_EORT);", VAR_7);
 FUNC_5();

 FUNC_6(VAR_14 | 2);
 FUNC_3(VAR_13);
 if (VAR_9 != ((void*)0))
  FUNC_3(VAR_9);
 VAR_9 = ((void*)0);
}
