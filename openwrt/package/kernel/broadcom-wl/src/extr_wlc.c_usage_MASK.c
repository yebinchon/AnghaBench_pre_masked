
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ desc; scalar_t__ name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(char *VAR_3)
{
 int VAR_4;
 FUNC_1(VAR_0, "Usage: %s <command> [<argument> ...]\n"
     "\n"
     "Available commands:\n", VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_1(VAR_0, "\t%-16s\t%s\n", VAR_1[VAR_4].name ?: "", VAR_1[VAR_4].desc ?: "");
 }
 FUNC_1(VAR_0, "\n");
 FUNC_0(1);
}
