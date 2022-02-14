
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Pfdebug; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_1, PGconn *VAR_2)
{
 if (FUNC_1(VAR_1, FUNC_2(VAR_1) + 1, VAR_2))
  return VAR_0;

 if (VAR_2->Pfdebug)
  FUNC_0(VAR_2->Pfdebug, "To backend> \"%s\"\n", VAR_1);

 return 0;
}
