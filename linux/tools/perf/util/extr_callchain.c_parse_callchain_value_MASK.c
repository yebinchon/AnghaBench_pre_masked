
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_4)
{
 if (!FUNC_1(VAR_4, "percent", FUNC_0(VAR_4))) {
  VAR_3.value = VAR_1;
  return 0;
 }
 if (!FUNC_1(VAR_4, "period", FUNC_0(VAR_4))) {
  VAR_3.value = VAR_2;
  return 0;
 }
 if (!FUNC_1(VAR_4, "count", FUNC_0(VAR_4))) {
  VAR_3.value = VAR_0;
  return 0;
 }
 return -1;
}
