
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static bool
FUNC_3(TimestampTz VAR_8)
{
 VAR_5 = VAR_8;

 VAR_3 = VAR_7;

 if (VAR_0 <= 0)
  return 1;

 if (!VAR_6)
  return 1;

 VAR_6 = 0;


 if (!VAR_4)
  return 1;

 if (FUNC_1(VAR_1) != 0)
 {
  FUNC_2("could not fsync file \"%s\": %m", VAR_2);
  FUNC_0(1);
 }

 return 1;
}
