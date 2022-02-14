
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int OidOptions ;
typedef int Oid ;
typedef int Archive ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 char* VAR_0 ;
 char* FUNC_6 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static char *
FUNC_7(Archive *VAR_5, Oid VAR_6, OidOptions VAR_7)
{
 char *VAR_8;
 PQExpBuffer VAR_9;
 PGresult *VAR_10;

 if (VAR_6 == 0)
 {
  if ((VAR_7 & VAR_3) != 0)
   return FUNC_6(VAR_0);
  else if ((VAR_7 & VAR_1) != 0)
   return FUNC_6("'any'");
  else if ((VAR_7 & VAR_4) != 0)
   return FUNC_6("*");
  else if ((VAR_7 & VAR_2) != 0)
   return FUNC_6("NONE");
 }

 VAR_9 = FUNC_4();
 FUNC_3(VAR_9, "SELECT pg_catalog.format_type('%u'::pg_catalog.oid, NULL)",
       VAR_6);

 VAR_10 = FUNC_0(VAR_5, VAR_9->data);


 VAR_8 = FUNC_6(FUNC_2(VAR_10, 0, 0));

 FUNC_1(VAR_10);
 FUNC_5(VAR_9);

 return VAR_8;
}
