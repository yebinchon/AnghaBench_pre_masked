
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int order_set; int order; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3)
{
 if (!FUNC_1(VAR_3, "caller", FUNC_0(VAR_3))) {
  VAR_2.order = VAR_1;
  VAR_2.order_set = 1;
  return 0;
 }
 if (!FUNC_1(VAR_3, "callee", FUNC_0(VAR_3))) {
  VAR_2.order = VAR_0;
  VAR_2.order_set = 1;
  return 0;
 }
 return -1;
}
