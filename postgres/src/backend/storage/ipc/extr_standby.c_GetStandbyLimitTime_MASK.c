
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static TimestampTz
FUNC_2(void)
{
 TimestampTz VAR_2;
 bool VAR_3;





 FUNC_0(&VAR_2, &VAR_3);
 if (VAR_3)
 {
  if (VAR_1 < 0)
   return 0;
  return FUNC_1(VAR_2, VAR_1);
 }
 else
 {
  if (VAR_0 < 0)
   return 0;
  return FUNC_1(VAR_2, VAR_0);
 }
}
