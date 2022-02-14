
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t Index; int * String; } ;
typedef TYPE_1__ StrArray ;


 int FUNC_0 (int ) ;

void FUNC_1(StrArray* VAR_0)
{
 uint32_t VAR_1;
 if ((VAR_0 == ((void*)0)) || (VAR_0->String == ((void*)0)))
  return;
 for (VAR_1=0; VAR_1<VAR_0->Index; VAR_1++) {
  FUNC_0(VAR_0->String[VAR_1]);
 }
 VAR_0->Index = 0;
}
