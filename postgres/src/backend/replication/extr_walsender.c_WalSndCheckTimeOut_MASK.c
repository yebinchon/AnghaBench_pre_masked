
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TimestampTz ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_4(void)
{
 TimestampTz VAR_4;


 if (VAR_2 <= 0)
  return;

 VAR_4 = FUNC_0(VAR_2,
            VAR_3);

 if (VAR_3 > 0 && VAR_1 >= VAR_4)
 {





  FUNC_2(VAR_0,
    (FUNC_3("terminating walsender process due to replication timeout")));

  FUNC_1();
 }
}
