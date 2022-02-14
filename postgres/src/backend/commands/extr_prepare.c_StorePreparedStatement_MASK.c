
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_2__ {int from_sql; int prepare_time; int * plansource; } ;
typedef TYPE_1__ PreparedStatement ;
typedef int CachedPlanSource ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (int ,char const*,int ,int*) ;
 int VAR_3 ;

void
FUNC_7(const char *VAR_4,
        CachedPlanSource *VAR_5,
        bool VAR_6)
{
 PreparedStatement *VAR_7;
 TimestampTz VAR_8 = FUNC_0();
 bool VAR_9;


 if (!VAR_3)
  FUNC_1();


 VAR_7 = (PreparedStatement *) FUNC_6(VAR_3,
             VAR_4,
             VAR_2,
             &VAR_9);


 if (VAR_9)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("prepared statement \"%s\" already exists",
      VAR_4)));


 VAR_7->plansource = VAR_5;
 VAR_7->from_sql = VAR_6;
 VAR_7->prepare_time = VAR_8;


 FUNC_2(VAR_5);
}
