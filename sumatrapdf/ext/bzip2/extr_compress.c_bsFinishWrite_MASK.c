
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UChar ;
struct TYPE_3__ {scalar_t__ bsLive; size_t numZ; int bsBuff; scalar_t__* zbits; } ;
typedef TYPE_1__ EState ;



__attribute__((used)) static
void FUNC_0 ( EState* VAR_0 )
{
   while (VAR_0->bsLive > 0) {
      VAR_0->zbits[VAR_0->numZ] = (UChar)(VAR_0->bsBuff >> 24);
      VAR_0->numZ++;
      VAR_0->bsBuff <<= 8;
      VAR_0->bsLive -= 8;
   }
}
