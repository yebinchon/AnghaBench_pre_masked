
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp ;
struct tm {int dummy; } ;
typedef int int64 ;


 scalar_t__ FUNC_0 (struct tm*) ;
 int FUNC_1 (struct tm*,int ,int *,int *) ;

__attribute__((used)) static timestamp
FUNC_2(void)
{
 int64 VAR_0 = 0;
 timestamp VAR_1;
 struct tm VAR_2,
      *VAR_3 = &VAR_2;

 if (FUNC_0(VAR_3) < 0)
  return VAR_0;

 FUNC_1(VAR_3, 0, ((void*)0), &VAR_1);
 return VAR_1;
}
