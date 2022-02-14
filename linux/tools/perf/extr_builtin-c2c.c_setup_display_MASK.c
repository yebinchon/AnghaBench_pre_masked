
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int display; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_4)
{
 const char *VAR_5 = VAR_4 ?: "tot";

 if (!FUNC_1(VAR_5, "tot"))
  VAR_3.display = VAR_2;
 else if (!FUNC_1(VAR_5, "rmt"))
  VAR_3.display = VAR_1;
 else if (!FUNC_1(VAR_5, "lcl"))
  VAR_3.display = VAR_0;
 else {
  FUNC_0("failed: unknown display type: %s\n", VAR_4);
  return -1;
 }

 return 0;
}
