
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ inCursor; scalar_t__ Pfdebug; scalar_t__ inBuffer; scalar_t__ inEnd; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;

int
FUNC_2(size_t VAR_1, PGconn *VAR_2)
{
 if (VAR_1 > (size_t) (VAR_2->inEnd - VAR_2->inCursor))
  return VAR_0;

 if (VAR_2->Pfdebug)
 {
  FUNC_0(VAR_2->Pfdebug, "From backend (%lu)> ", (unsigned long) VAR_1);
  FUNC_1(VAR_2->Pfdebug, VAR_2->inBuffer + VAR_2->inCursor, VAR_1);
  FUNC_0(VAR_2->Pfdebug, "\n");
 }

 VAR_2->inCursor += VAR_1;

 return 0;
}
