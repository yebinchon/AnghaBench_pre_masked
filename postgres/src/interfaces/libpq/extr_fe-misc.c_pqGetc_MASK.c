
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ inCursor; scalar_t__ inEnd; char* inBuffer; scalar_t__ Pfdebug; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,char) ;

int
FUNC_1(char *VAR_1, PGconn *VAR_2)
{
 if (VAR_2->inCursor >= VAR_2->inEnd)
  return VAR_0;

 *VAR_1 = VAR_2->inBuffer[VAR_2->inCursor++];

 if (VAR_2->Pfdebug)
  FUNC_0(VAR_2->Pfdebug, "From backend> %c\n", *VAR_1);

 return 0;
}
