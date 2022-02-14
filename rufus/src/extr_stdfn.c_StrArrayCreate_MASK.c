
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {char** String; int Max; scalar_t__ Index; } ;
typedef TYPE_1__ StrArray ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;

void FUNC_2(StrArray* VAR_0, uint32_t VAR_1)
{
 if (VAR_0 == ((void*)0)) return;
 VAR_0->Max = VAR_1; VAR_0->Index = 0;
 VAR_0->String = (char**)FUNC_0(VAR_0->Max, sizeof(char*));
 if (VAR_0->String == ((void*)0))
  FUNC_1("Could not allocate string array\n");
}
