
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (void**,int ) ;
 int FUNC_3 (void**,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void**) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int FUNC_8 (char*,...) ;

void
FUNC_9(const char *VAR_1,
      const char *VAR_2,
      const char *VAR_3,
      int VAR_4)
{
 if (!FUNC_0(VAR_1)
  || !FUNC_0(VAR_3)
  || !FUNC_0(VAR_2))
  FUNC_8("TRAP: ExceptionalCondition: bad arguments\n");
 else
 {
  FUNC_8("TRAP: %s(\"%s\", File: \"%s\", Line: %d)\n",
      VAR_2, VAR_1,
      VAR_3, VAR_4);
 }


 FUNC_4(VAR_0);
 FUNC_1();
}
