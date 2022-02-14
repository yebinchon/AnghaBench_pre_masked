
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum COMPAT_MODE { ____Placeholder_COMPAT_MODE } COMPAT_MODE ;
typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int,int ,int ,int *) ;
 int FUNC_7 (int,int *,int *,int) ;

bool
FUNC_8(PGresult *VAR_2, int VAR_3, PGconn *VAR_4, enum COMPAT_MODE VAR_5)
{
 if (VAR_2 == ((void*)0))
 {
  FUNC_5("ecpg_check_PQresult on line %d: no result - %s", VAR_3, FUNC_2(VAR_4));
  FUNC_7(VAR_3, ((void*)0), VAR_4, VAR_5);
  return 0;
 }

 switch (FUNC_4(VAR_2))
 {

  case 128:
   return 1;
   break;
  case 131:

   FUNC_6(VAR_3, VAR_0, VAR_1, ((void*)0));
   FUNC_0(VAR_2);
   return 0;
   break;
  case 134:
   return 1;
   break;
  case 129:
  case 130:
  case 135:
   FUNC_5("ecpg_check_PQresult on line %d: bad response - %s", VAR_3, FUNC_3(VAR_2));
   FUNC_7(VAR_3, VAR_2, VAR_4, VAR_5);
   FUNC_0(VAR_2);
   return 0;
   break;
  case 132:
   return 1;
   break;
  case 133:
   FUNC_5("ecpg_check_PQresult on line %d: COPY IN data transfer in progress\n", VAR_3);
   FUNC_1(VAR_4);
   FUNC_0(VAR_2);
   return 0;
   break;
  default:
   FUNC_5("ecpg_check_PQresult on line %d: unknown execution status type\n",
      VAR_3);
   FUNC_7(VAR_3, VAR_2, VAR_4, VAR_5);
   FUNC_0(VAR_2);
   return 0;
   break;
 }
}
