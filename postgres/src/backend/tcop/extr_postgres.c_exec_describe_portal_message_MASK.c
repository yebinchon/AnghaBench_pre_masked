
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int formats; scalar_t__ tupDesc; } ;
typedef TYPE_1__* Portal ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,scalar_t__,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char) ;
 int VAR_5 ;
 int FUNC_11 () ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_12(const char *VAR_7)
{
 Portal VAR_8;





 FUNC_11();


 FUNC_3(VAR_4);

 VAR_8 = FUNC_1(VAR_7);
 if (!FUNC_4(VAR_8))
  FUNC_6(VAR_3,
    (FUNC_7(VAR_2),
     FUNC_9("portal \"%s\" does not exist", VAR_7)));
 if (FUNC_2() &&
  VAR_8->tupDesc)
  FUNC_6(VAR_3,
    (FUNC_7(VAR_1),
     FUNC_9("current transaction is aborted, "
      "commands ignored until end of transaction block"),
     FUNC_8()));

 if (VAR_6 != VAR_0)
  return;

 if (VAR_8->tupDesc)
  FUNC_5(&VAR_5,
          VAR_8->tupDesc,
          FUNC_0(VAR_8),
          VAR_8->formats);
 else
  FUNC_10('n');
}
