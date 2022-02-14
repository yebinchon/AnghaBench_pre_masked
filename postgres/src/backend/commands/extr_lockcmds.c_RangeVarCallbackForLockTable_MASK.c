
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef int Oid ;
typedef int LOCKMODE ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 char FUNC_7 (int ) ;
 char FUNC_8 (int ) ;
 int FUNC_9 (char) ;

__attribute__((used)) static void
FUNC_10(const RangeVar *VAR_9, Oid VAR_10, Oid VAR_11,
        void *VAR_12)
{
 LOCKMODE VAR_13 = *(LOCKMODE *) VAR_12;
 char VAR_14;
 char VAR_15;
 AclResult VAR_16;

 if (!FUNC_2(VAR_10))
  return;
 VAR_14 = FUNC_8(VAR_10);
 if (!VAR_14)
  return;



 if (VAR_14 != VAR_5 && VAR_14 != VAR_4 &&
  VAR_14 != VAR_6)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("\"%s\" is not a table or view",
      VAR_9->relname)));





 VAR_15 = FUNC_7(VAR_10);
 if (VAR_15 == VAR_7)
  VAR_3 |= VAR_8;


 VAR_16 = FUNC_1(VAR_10, VAR_13, FUNC_0());
 if (VAR_16 != VAR_0)
  FUNC_3(VAR_16, FUNC_9(FUNC_8(VAR_10)), VAR_9->relname);
}
