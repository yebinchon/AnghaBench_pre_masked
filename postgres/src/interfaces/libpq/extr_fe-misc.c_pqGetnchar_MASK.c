
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Pfdebug; scalar_t__ inCursor; scalar_t__ inBuffer; scalar_t__ inEnd; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 int FUNC_1 (scalar_t__,char*,size_t) ;
 int FUNC_2 (char*,scalar_t__,size_t) ;

int
FUNC_3(char *VAR_1, size_t VAR_2, PGconn *VAR_3)
{
 if (VAR_2 > (size_t) (VAR_3->inEnd - VAR_3->inCursor))
  return VAR_0;

 FUNC_2(VAR_1, VAR_3->inBuffer + VAR_3->inCursor, VAR_2);


 VAR_3->inCursor += VAR_2;

 if (VAR_3->Pfdebug)
 {
  FUNC_0(VAR_3->Pfdebug, "From backend (%lu)> ", (unsigned long) VAR_2);
  FUNC_1(VAR_3->Pfdebug, VAR_1, VAR_2);
  FUNC_0(VAR_3->Pfdebug, "\n");
 }

 return 0;
}
