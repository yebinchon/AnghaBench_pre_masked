
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db; } ;
typedef int PGresult ;


 int FUNC_0 () ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char const*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static bool
FUNC_6(const PGresult *VAR_1)
{
 bool VAR_2;

 if (!VAR_1)
  VAR_2 = 0;
 else
  switch (FUNC_2(VAR_1))
  {
   case 134:
   case 128:
   case 131:
   case 133:
   case 132:

    VAR_2 = 1;
    break;

   case 135:
   case 129:
   case 130:
    VAR_2 = 0;
    break;

   default:
    VAR_2 = 0;
    FUNC_3("unexpected PQresultStatus: %d",
        FUNC_2(VAR_1));
    break;
  }

 if (!VAR_2)
 {
  const char *VAR_3 = FUNC_1(VAR_0.db);

  if (FUNC_5(VAR_3))
   FUNC_4("%s", VAR_3);

  FUNC_0();
 }

 return VAR_2;
}
