
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int attlen; scalar_t__ attbyval; } ;
typedef TYPE_1__ SpGistTypeDesc ;
typedef int Datum ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;

unsigned int
FUNC_2(SpGistTypeDesc *VAR_0, Datum VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0->attbyval)
  VAR_2 = sizeof(Datum);
 else if (VAR_0->attlen > 0)
  VAR_2 = VAR_0->attlen;
 else
  VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2);
}
