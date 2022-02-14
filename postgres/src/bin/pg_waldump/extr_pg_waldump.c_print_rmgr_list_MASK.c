
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* rm_name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++)
 {
  FUNC_0("%s\n", VAR_1[VAR_2].rm_name);
 }
}
