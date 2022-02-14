
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ p; scalar_t__ ep; } ;
typedef TYPE_1__ DwarfBuf ;


 scalar_t__ VAR_0 ;

void
FUNC_0(DwarfBuf *VAR_1, int VAR_2)
{
 if(VAR_1->p==VAR_0 || VAR_1->p+VAR_2 > VAR_1->ep)
  VAR_1->p = VAR_0;
 else
  VAR_1->p += VAR_2;
}
