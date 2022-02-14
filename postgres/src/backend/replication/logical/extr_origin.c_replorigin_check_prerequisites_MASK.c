
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(bool VAR_5, bool VAR_6)
{
 if (!FUNC_4())
  FUNC_1(VAR_3,
    (FUNC_2(VAR_0),
     FUNC_3("only superusers can query or manipulate replication origins")));

 if (VAR_5 && VAR_4 == 0)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_1),
     FUNC_3("cannot query or manipulate replication origin when max_replication_slots = 0")));

 if (!VAR_6 && FUNC_0())
  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),
     FUNC_3("cannot manipulate replication origins during recovery")));

}
