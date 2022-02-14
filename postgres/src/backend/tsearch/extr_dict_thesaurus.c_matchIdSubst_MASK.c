
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_3__ {scalar_t__ idsubst; struct TYPE_3__* nextvariant; } ;
typedef TYPE_1__ LexemeInfo ;



__attribute__((used)) static bool
FUNC_0(LexemeInfo *VAR_0, uint32 VAR_1)
{
 bool VAR_2 = 1;

 if (VAR_0)
 {
  VAR_2 = 0;

  for (; VAR_0; VAR_0 = VAR_0->nextvariant)
   if (VAR_0->idsubst == VAR_1)
   {
    VAR_2 = 1;
    break;
   }
 }

 return VAR_2;
}
