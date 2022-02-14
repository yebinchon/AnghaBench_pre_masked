
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vars; int db; } ;
typedef int PGresult ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,size_t,int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,char const*) ;
 int FUNC_11 (char*,int ) ;
 char* FUNC_12 (size_t,int ) ;
 int FUNC_13 (char*,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int FUNC_14 (char*,char*,scalar_t__) ;
 int FUNC_15 (char*,int*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char const*) ;

bool
FUNC_18(const char *VAR_3, const char *VAR_4)
{
 PGresult *VAR_5;
 Oid VAR_6;
 char VAR_7[32];
 bool VAR_8;

 if (!FUNC_15("\\lo_import", &VAR_8))
  return 0;

 FUNC_5();
 VAR_6 = FUNC_10(VAR_2.db, VAR_3);
 FUNC_4();

 if (VAR_6 == VAR_0)
 {
  FUNC_11("%s", FUNC_1(VAR_2.db));
  return FUNC_7("\\lo_import", VAR_8);
 }


 if (VAR_4)
 {
  char *VAR_9;
  char *VAR_10;
  size_t VAR_11 = FUNC_17(VAR_4);

  VAR_9 = FUNC_12(VAR_11 * 2 + 256, VAR_1);
  if (!VAR_9)
   return FUNC_7("\\lo_import", VAR_8);
  FUNC_14(VAR_9, "COMMENT ON LARGE OBJECT %u IS '", VAR_6);
  VAR_10 = VAR_9 + FUNC_17(VAR_9);
  VAR_10 += FUNC_2(VAR_2.db, VAR_10, VAR_4, VAR_11, ((void*)0));
  FUNC_16(VAR_10, "'");

  if (!(VAR_5 = FUNC_3(VAR_9)))
  {
   FUNC_9(VAR_9);
   return FUNC_7("\\lo_import", VAR_8);
  }

  FUNC_0(VAR_5);
  FUNC_9(VAR_9);
 }

 if (!FUNC_8("\\lo_import", VAR_8))
  return 0;

 FUNC_13("lo_import %u", VAR_6);

 FUNC_14(VAR_7, "%u", VAR_6);
 FUNC_6(VAR_2.vars, "LASTOID", VAR_7);

 return 1;
}
