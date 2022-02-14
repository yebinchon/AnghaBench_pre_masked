
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;


 int VAR_0 ;

__attribute__((used)) static TimestampTz
FUNC_0(TimestampTz VAR_1)
{
 TimestampTz VAR_2 = VAR_1 + (VAR_0 - 1);

 return VAR_2 - (VAR_2 % VAR_0);
}
