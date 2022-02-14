
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_6 ;

void
FUNC_5(void)
{
 FUNC_0();






 if (VAR_6 < VAR_5)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("logical decoding requires wal_level >= logical")));

 if (VAR_4 == VAR_3)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("logical decoding requires a database connection")));
 if (FUNC_1())
  FUNC_2(VAR_2,
    (FUNC_3(VAR_0),
     FUNC_4("logical decoding cannot be used while in recovery")));
}
