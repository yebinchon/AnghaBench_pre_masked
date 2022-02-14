
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queryFout; int crosstab_flag; int gexec_flag; int gset_prefix; } ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_9 (char const*,char*,int) ;

__attribute__((used)) static bool
FUNC_10(PGresult *VAR_1)
{
 bool VAR_2;
 const char *VAR_3;

 if (!VAR_1)
  return 0;

 switch (FUNC_2(VAR_1))
 {
  case 128:

   if (VAR_0.gset_prefix)
    VAR_2 = FUNC_6(VAR_1);
   else if (VAR_0.gexec_flag)
    VAR_2 = FUNC_0(VAR_1);
   else if (VAR_0.crosstab_flag)
    VAR_2 = FUNC_5(VAR_1);
   else
    VAR_2 = FUNC_4(VAR_1);

   VAR_3 = FUNC_1(VAR_1);
   if (FUNC_9(VAR_3, "INSERT", 6) == 0 ||
    FUNC_9(VAR_3, "UPDATE", 6) == 0 ||
    FUNC_9(VAR_3, "DELETE", 6) == 0)
    FUNC_3(VAR_1);
   break;

  case 134:
   FUNC_3(VAR_1);
   VAR_2 = 1;
   break;

  case 131:
   VAR_2 = 1;
   break;

  case 132:
  case 133:

   VAR_2 = 1;
   break;

  case 135:
  case 129:
  case 130:
   VAR_2 = 0;
   break;

  default:
   VAR_2 = 0;
   FUNC_8("unexpected PQresultStatus: %d",
       FUNC_2(VAR_1));
   break;
 }

 FUNC_7(VAR_0.queryFout);

 return VAR_2;
}
