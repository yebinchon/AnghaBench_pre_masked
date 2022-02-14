
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_3(void)
{





 if (VAR_3 == 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     (FUNC_2("replication slots can only be used if max_replication_slots > 0"))));

 if (VAR_4 < VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("replication slots can only be used if wal_level >= replica")));
}
