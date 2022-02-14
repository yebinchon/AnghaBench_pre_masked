
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;

__attribute__((used)) static void
FUNC_7(PGresult *VAR_2)
{
 PQExpBuffer VAR_3;
 const char *VAR_4;

 VAR_3 = FUNC_3();

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4)
  FUNC_6(VAR_3, "%s:  ", VAR_4);
 else
  FUNC_6(VAR_3, "ERROR:  ");
 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4)
  FUNC_2(VAR_3, VAR_4);
 else
  FUNC_2(VAR_3, "(not available)");
 FUNC_1(VAR_3, '\n');

 FUNC_5("%s", VAR_3->data);

 FUNC_4(VAR_3);
}
