
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 char FUNC_6 (int ) ;
 int FUNC_7 (char) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(const RangeVar *VAR_7,
        Oid VAR_8, Oid VAR_9, void *VAR_10)
{
 char VAR_11;


 if (!FUNC_1(VAR_8))
  return;






 VAR_11 = FUNC_6(VAR_8);
 if (!VAR_11)
  return;
 if (VAR_11 != VAR_5 && VAR_11 != VAR_6 &&
  VAR_11 != VAR_3 && VAR_11 != VAR_4)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("\"%s\" is not a table or materialized view", VAR_7->relname)));


 if (!FUNC_8(VAR_8, FUNC_0()))
  FUNC_2(VAR_0, FUNC_7(FUNC_6(VAR_8)), VAR_7->relname);
}
