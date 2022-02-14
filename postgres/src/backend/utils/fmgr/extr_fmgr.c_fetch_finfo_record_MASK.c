
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int api_version; } ;
typedef TYPE_1__ Pg_finfo_record ;
typedef TYPE_1__* (* PGFInfoFunction ) () ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (void*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char const*) ;
 TYPE_1__* FUNC_8 () ;

const Pg_finfo_record *
FUNC_9(void *VAR_3, const char *VAR_4)
{
 char *VAR_5;
 PGFInfoFunction VAR_6;
 const Pg_finfo_record *VAR_7;

 VAR_5 = FUNC_7("pg_finfo_%s", VAR_4);


 VAR_6 = (PGFInfoFunction) FUNC_5(VAR_3,
                VAR_5);
 if (VAR_6 == ((void*)0))
 {
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),
     FUNC_4("could not find function information for function \"%s\"",
      VAR_4),
     FUNC_3("SQL-callable functions need an accompanying PG_FUNCTION_INFO_V1(funcname).")));
  return ((void*)0);
 }


 VAR_7 = (*VAR_6) ();


 if (VAR_7 == ((void*)0))
  FUNC_0(VAR_2, "null result from info function \"%s\"", VAR_5);
 switch (VAR_7->api_version)
 {
  case 1:

   break;
  default:
   FUNC_1(VAR_2,
     (FUNC_2(VAR_0),
      FUNC_4("unrecognized API version %d reported by info function \"%s\"",
       VAR_7->api_version, VAR_5)));
   break;
 }

 FUNC_6(VAR_5);
 return VAR_7;
}
