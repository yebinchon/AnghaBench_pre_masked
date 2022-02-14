
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;
typedef int PGconn ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int,int) ;

__attribute__((used)) static bool
FUNC_3(PGconn *VAR_0, TimestampTz *VAR_1)
{

 if (!FUNC_0(*VAR_1))
  return 0;
 *VAR_1 = FUNC_1();
 if (!FUNC_2(VAR_0, *VAR_1, 1, 0))
  return 0;

 return 1;
}
