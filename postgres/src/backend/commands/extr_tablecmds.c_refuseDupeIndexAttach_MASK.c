
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(Relation VAR_2, Relation VAR_3, Relation VAR_4)
{
 Oid VAR_5;

 VAR_5 = FUNC_7(VAR_4,
           FUNC_2(VAR_2));
 if (FUNC_0(VAR_5))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_6("cannot attach index \"%s\" as a partition of index \"%s\"",
      FUNC_1(VAR_3),
      FUNC_1(VAR_2)),
     FUNC_5("Another index is already attached for partition \"%s\".",
         FUNC_1(VAR_4))));
}
