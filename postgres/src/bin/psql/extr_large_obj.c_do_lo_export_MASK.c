
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,char const*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_9 (char*,int*) ;

bool
FUNC_10(const char *VAR_1, const char *VAR_2)
{
 int VAR_3;
 bool VAR_4;

 if (!FUNC_9("\\lo_export", &VAR_4))
  return 0;

 FUNC_2();
 VAR_3 = FUNC_6(VAR_0.db, FUNC_3(VAR_1), VAR_2);
 FUNC_1();


 if (VAR_3 != 1)
 {
  FUNC_7("%s", FUNC_0(VAR_0.db));
  return FUNC_4("\\lo_export", VAR_4);
 }

 if (!FUNC_5("\\lo_export", VAR_4))
  return 0;

 FUNC_8("lo_export");

 return 1;
}
