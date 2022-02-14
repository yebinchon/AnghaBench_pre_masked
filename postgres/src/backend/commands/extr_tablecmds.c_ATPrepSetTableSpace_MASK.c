
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ newTableSpace; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int LOCKMODE ;
typedef TYPE_1__ AlteredTableInfo ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,char const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_8(AlteredTableInfo *VAR_6, Relation VAR_7, const char *VAR_8, LOCKMODE VAR_9)
{
 Oid VAR_10;


 VAR_10 = FUNC_6(VAR_8, 0);


 if (FUNC_1(VAR_10) && VAR_10 != VAR_4)
 {
  AclResult VAR_11;

  VAR_11 = FUNC_7(VAR_10, FUNC_0(), VAR_1);
  if (VAR_11 != VAR_0)
   FUNC_2(VAR_11, VAR_5, VAR_8);
 }


 if (FUNC_1(VAR_6->newTableSpace))
  FUNC_3(VAR_3,
    (FUNC_4(VAR_2),
     FUNC_5("cannot have multiple SET TABLESPACE subcommands")));

 VAR_6->newTableSpace = VAR_10;
}
