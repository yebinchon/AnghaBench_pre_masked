
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*,int ,...) ;
 int FUNC_9 (int ) ;

void
FUNC_10(const char *VAR_3, Oid VAR_4)
{

 if (FUNC_5(VAR_0,
         FUNC_0(VAR_3),
         FUNC_3(FUNC_1()),
         FUNC_4(VAR_4)))
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_8("collation \"%s\" for encoding \"%s\" already exists in schema \"%s\"",
      VAR_3, FUNC_2(),
      FUNC_9(VAR_4))));


 if (FUNC_5(VAR_0,
         FUNC_0(VAR_3),
         FUNC_3(-1),
         FUNC_4(VAR_4)))
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_8("collation \"%s\" already exists in schema \"%s\"",
      VAR_3, FUNC_9(VAR_4))));
}
