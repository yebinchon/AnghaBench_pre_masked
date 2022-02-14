
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(const char *VAR_3, Oid VAR_4,
         Oid VAR_5)
{

 if (FUNC_2(VAR_2,
         FUNC_1(VAR_4),
         FUNC_0(VAR_3),
         FUNC_1(VAR_5)))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("operator family \"%s\" for access method \"%s\" already exists in schema \"%s\"",
      VAR_3,
      FUNC_6(VAR_4),
      FUNC_7(VAR_5))));
}
