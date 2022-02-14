
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Pfdebug; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,char) ;
 scalar_t__ FUNC_1 (char*,int,TYPE_1__*) ;

int
FUNC_2(char VAR_1, PGconn *VAR_2)
{
 if (FUNC_1(&VAR_1, 1, VAR_2))
  return VAR_0;

 if (VAR_2->Pfdebug)
  FUNC_0(VAR_2->Pfdebug, "To backend> %c\n", VAR_1);

 return 0;
}
