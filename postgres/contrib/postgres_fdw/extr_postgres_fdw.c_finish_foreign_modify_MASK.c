
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sql ;
struct TYPE_3__ {char* p_name; int * conn; } ;
typedef TYPE_1__ PgFdwModifyState ;
typedef int PGresult ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,int *,int,char*) ;
 int FUNC_6 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_7(PgFdwModifyState *VAR_2)
{
 FUNC_0(VAR_2 != ((void*)0));


 if (VAR_2->p_name)
 {
  char VAR_3[64];
  PGresult *VAR_4;

  FUNC_6(VAR_3, sizeof(VAR_3), "DEALLOCATE %s", VAR_2->p_name);





  VAR_4 = FUNC_4(VAR_2->conn, VAR_3);
  if (FUNC_2(VAR_4) != VAR_1)
   FUNC_5(VAR_0, VAR_4, VAR_2->conn, 1, VAR_3);
  FUNC_1(VAR_4);
  VAR_2->p_name = ((void*)0);
 }


 FUNC_3(VAR_2->conn);
 VAR_2->conn = ((void*)0);
}
