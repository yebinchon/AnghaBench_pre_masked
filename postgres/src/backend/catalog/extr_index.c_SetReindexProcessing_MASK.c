
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(Oid VAR_3, Oid VAR_4)
{
 FUNC_0(FUNC_1(VAR_3) && FUNC_1(VAR_4));

 if (FUNC_1(VAR_1))
  FUNC_3(VAR_0, "cannot reindex while reindexing");
 VAR_1 = VAR_3;
 VAR_2 = VAR_4;

 FUNC_2(VAR_4);
}
